// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshSamplingFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSamplingFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptScalarList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions;
class UScriptStruct* FGeometryScriptMeshPointSamplingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshPointSamplingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshPointSamplingOptions>()
{
	return FGeometryScriptMeshPointSamplingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSampleDensity_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SubSampleDensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshPointSamplingOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Desired \"radius\" of sample points. Spacing between samples is at least 2x this value. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "Desired \"radius\" of sample points. Spacing between samples is at least 2x this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SamplingRadius = { "SamplingRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPointSamplingOptions, SamplingRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SamplingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SamplingRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_MaxNumSamples_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "Maximum number of samples requested. If 0 or default value, mesh will be maximally sampled" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_MaxNumSamples = { "MaxNumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPointSamplingOptions, MaxNumSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_MaxNumSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_MaxNumSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Random Seed used to initialize sampling strategies */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "Random Seed used to initialize sampling strategies" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPointSamplingOptions, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SubSampleDensity_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "Density of subsampling used in Poisson strategy. Larger numbers mean \"more accurate\" (but slower) results." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SubSampleDensity = { "SubSampleDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPointSamplingOptions, SubSampleDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SubSampleDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SubSampleDensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SamplingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_MaxNumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewProp_SubSampleDensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshPointSamplingOptions",
		sizeof(FGeometryScriptMeshPointSamplingOptions),
		alignof(FGeometryScriptMeshPointSamplingOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode;
	static UEnum* EGeometryScriptSamplingWeightMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSamplingWeightMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSamplingWeightMode>()
	{
		return EGeometryScriptSamplingWeightMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::Enumerators[] = {
		{ "EGeometryScriptSamplingWeightMode::WeightToRadius", (int64)EGeometryScriptSamplingWeightMode::WeightToRadius },
		{ "EGeometryScriptSamplingWeightMode::FilledWeightToRadius", (int64)EGeometryScriptSamplingWeightMode::FilledWeightToRadius },
		{ "EGeometryScriptSamplingWeightMode::WeightedRandom", (int64)EGeometryScriptSamplingWeightMode::WeightedRandom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Control how active Weights are used to affect point radius */" },
		{ "FilledWeightToRadius.Comment", "/** \n\x09 * Weights are clamped to [0,1] and used to interpolate Min/Max Radius, with decay, so that smaller-radius samples will infill between large ones.\n\x09 * So areas with large weight may still end up with some variable-radius samples, but areas with 0 weight will only ever have min-radius samples.\n\x09 */" },
		{ "FilledWeightToRadius.Name", "EGeometryScriptSamplingWeightMode::FilledWeightToRadius" },
		{ "FilledWeightToRadius.ToolTip", "Weights are clamped to [0,1] and used to interpolate Min/Max Radius, with decay, so that smaller-radius samples will infill between large ones.\nSo areas with large weight may still end up with some variable-radius samples, but areas with 0 weight will only ever have min-radius samples." },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "Control how active Weights are used to affect point radius" },
		{ "WeightedRandom.Comment", "/** \n\x09 * Weight is used to create nonuniform random sampling, ie it nudges the random sample-radius distribution but does not directly control it.\n\x09 * So samples with any radius can still appear at any location, but if weight=1 then max-radius samples are more likely, etc.\n\x09 */" },
		{ "WeightedRandom.Name", "EGeometryScriptSamplingWeightMode::WeightedRandom" },
		{ "WeightedRandom.ToolTip", "Weight is used to create nonuniform random sampling, ie it nudges the random sample-radius distribution but does not directly control it.\nSo samples with any radius can still appear at any location, but if weight=1 then max-radius samples are more likely, etc." },
		{ "WeightToRadius.Comment", "/** \n\x09 * Weights are clamped to [0,1] and used to interpolate Min/Max Radius. This is a \"hard constraint\", ie if the weight\n\x09 * at a point is 1, only a \"max radius\" sample may be placed there, otherwise no samples at all (so no \"filling in\" smaller samples between large ones)\n\x09 */" },
		{ "WeightToRadius.Name", "EGeometryScriptSamplingWeightMode::WeightToRadius" },
		{ "WeightToRadius.ToolTip", "Weights are clamped to [0,1] and used to interpolate Min/Max Radius. This is a \"hard constraint\", ie if the weight\nat a point is 1, only a \"max radius\" sample may be placed there, otherwise no samples at all (so no \"filling in\" smaller samples between large ones)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSamplingWeightMode",
		"EGeometryScriptSamplingWeightMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode;
	static UEnum* EGeometryScriptSamplingDistributionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSamplingDistributionMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSamplingDistributionMode>()
	{
		return EGeometryScriptSamplingDistributionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::Enumerators[] = {
		{ "EGeometryScriptSamplingDistributionMode::Uniform", (int64)EGeometryScriptSamplingDistributionMode::Uniform },
		{ "EGeometryScriptSamplingDistributionMode::Smaller", (int64)EGeometryScriptSamplingDistributionMode::Smaller },
		{ "EGeometryScriptSamplingDistributionMode::Larger", (int64)EGeometryScriptSamplingDistributionMode::Larger },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Controls the distribution of sample radii */" },
		{ "Larger.Comment", "/** Distribution is weighted towards larger points */" },
		{ "Larger.Name", "EGeometryScriptSamplingDistributionMode::Larger" },
		{ "Larger.ToolTip", "Distribution is weighted towards larger points" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "Smaller.Comment", "/** Distribution is weighted towards smaller points */" },
		{ "Smaller.Name", "EGeometryScriptSamplingDistributionMode::Smaller" },
		{ "Smaller.ToolTip", "Distribution is weighted towards smaller points" },
		{ "ToolTip", "Controls the distribution of sample radii" },
		{ "Uniform.Comment", "/** Uniform distribution of sizes, ie all equally likely */" },
		{ "Uniform.Name", "EGeometryScriptSamplingDistributionMode::Uniform" },
		{ "Uniform.ToolTip", "Uniform distribution of sizes, ie all equally likely" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSamplingDistributionMode",
		"EGeometryScriptSamplingDistributionMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions;
class UScriptStruct* FGeometryScriptNonUniformPointSamplingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptNonUniformPointSamplingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptNonUniformPointSamplingOptions>()
{
	return FGeometryScriptNonUniformPointSamplingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSamplingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSamplingRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeDistribution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeDistributionPower_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SizeDistributionPower;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeightMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertWeights_MetaData[];
#endif
		static void NewProp_bInvertWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertWeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptNonUniformPointSamplingOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_MaxSamplingRadius_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If MaxSampleRadius > SampleRadius, then output sample radius will be in range [SampleRadius, MaxSampleRadius] */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "If MaxSampleRadius > SampleRadius, then output sample radius will be in range [SampleRadius, MaxSampleRadius]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_MaxSamplingRadius = { "MaxSamplingRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptNonUniformPointSamplingOptions, MaxSamplingRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_MaxSamplingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_MaxSamplingRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** SizeDistribution setting controls the distribution of sample radii */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "SizeDistribution setting controls the distribution of sample radii" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution = { "SizeDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptNonUniformPointSamplingOptions, SizeDistribution), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingDistributionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution_MetaData)) }; // 845568934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistributionPower_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** SizeDistributionPower is used to control how extreme the Size Distribution shift is. Valid range is [1,10] */" },
		{ "EditCondition", "(SizeDistribution != EGeometryScriptSamplingDistributionMode::Uniform)" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "SizeDistributionPower is used to control how extreme the Size Distribution shift is. Valid range is [1,10]" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistributionPower = { "SizeDistributionPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptNonUniformPointSamplingOptions, SizeDistributionPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistributionPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistributionPower_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** WeightMode controls how any active Weight scheme is used to affect sample radius */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "WeightMode controls how any active Weight scheme is used to affect sample radius" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode = { "WeightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptNonUniformPointSamplingOptions, WeightMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSamplingWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode_MetaData)) }; // 1904685627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, weight values are inverted */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ToolTip", "If true, weight values are inverted" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights_SetBit(void* Obj)
	{
		((FGeometryScriptNonUniformPointSamplingOptions*)Obj)->bInvertWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights = { "bInvertWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptNonUniformPointSamplingOptions), &Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_MaxSamplingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_SizeDistributionPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_WeightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewProp_bInvertWeights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptNonUniformPointSamplingOptions",
		sizeof(FGeometryScriptNonUniformPointSamplingOptions),
		alignof(FGeometryScriptNonUniformPointSamplingOptions),
		Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSamplingFunctions::execComputeVertexWeightedPointSampling)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshPointSamplingOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptNonUniformPointSamplingOptions,Z_Param_NonUniformOptions);
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_VertexWeights);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Samples);
		P_GET_TARRAY_REF(double,Z_Param_Out_SampleRadii);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_TriangleIDs);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(Z_Param_TargetMesh,Z_Param_Options,Z_Param_NonUniformOptions,Z_Param_VertexWeights,Z_Param_Out_Samples,Z_Param_Out_SampleRadii,Z_Param_Out_TriangleIDs,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSamplingFunctions::execComputeNonUniformPointSampling)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshPointSamplingOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptNonUniformPointSamplingOptions,Z_Param_NonUniformOptions);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Samples);
		P_GET_TARRAY_REF(double,Z_Param_Out_SampleRadii);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_TriangleIDs);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(Z_Param_TargetMesh,Z_Param_Options,Z_Param_NonUniformOptions,Z_Param_Out_Samples,Z_Param_Out_SampleRadii,Z_Param_Out_TriangleIDs,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSamplingFunctions::execComputePointSampling)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshPointSamplingOptions,Z_Param_Options);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Samples);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_TriangleIDs);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Out_Samples,Z_Param_Out_TriangleIDs,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshSamplingFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeNonUniformPointSampling", &UGeometryScriptLibrary_MeshSamplingFunctions::execComputeNonUniformPointSampling },
			{ "ComputePointSampling", &UGeometryScriptLibrary_MeshSamplingFunctions::execComputePointSampling },
			{ "ComputeVertexWeightedPointSampling", &UGeometryScriptLibrary_MeshSamplingFunctions::execComputeVertexWeightedPointSampling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics
	{
		struct GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshPointSamplingOptions Options;
			FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions;
			TArray<FTransform> Samples;
			TArray<double> SampleRadii;
			FGeometryScriptIndexList TriangleIDs;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NonUniformOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleRadii_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleRadii;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 4269836427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_NonUniformOptions = { "NonUniformOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, NonUniformOptions), Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 3113657192
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_SampleRadii_Inner = { "SampleRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_SampleRadii = { "SampleRadii", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, SampleRadii), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_TriangleIDs = { "TriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, TriangleIDs), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_NonUniformOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_SampleRadii_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_SampleRadii,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_TriangleIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSampling" },
		{ "Comment", "/**\n\x09 * Compute a set of sample points lying on the surface of TargetMesh based on the provided sampling Options and NonUniformOptions.\n\x09 * The sample points have radii in the range [Options.SamplingRadius, NonUniformOptions.MaxSamplingRadius], and\n\x09 * are non-overlapping, ie the distance between two points is always larger than the sum of their respective radii.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute a set of sample points lying on the surface of TargetMesh based on the provided sampling Options and NonUniformOptions.\nThe sample points have radii in the range [Options.SamplingRadius, NonUniformOptions.MaxSamplingRadius], and\nare non-overlapping, ie the distance between two points is always larger than the sum of their respective radii." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions, nullptr, "ComputeNonUniformPointSampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::GeometryScriptLibrary_MeshSamplingFunctions_eventComputeNonUniformPointSampling_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics
	{
		struct GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshPointSamplingOptions Options;
			TArray<FTransform> Samples;
			FGeometryScriptIndexList TriangleIDs;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 4269836427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_TriangleIDs = { "TriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms, TriangleIDs), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_TriangleIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSampling" },
		{ "Comment", "/**\n\x09 * Compute a set of sample points lying on the surface of TargetMesh based on the provided sampling Options.\n\x09 * Samples are approximately uniformly distributed, and non-overlapping relative to the provided Options.SamplingRadius,\n\x09 * ie the distance between any pair of samples if >= 2*SamplingRadius.\n\x09 * @param Samples output list of sample points. Transform Location is sample position, Rotation orients Z with the triangle normal\n\x09 * @param TriangleIDs TriangleID that contains each sample point. Length is the same as Samples array.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute a set of sample points lying on the surface of TargetMesh based on the provided sampling Options.\nSamples are approximately uniformly distributed, and non-overlapping relative to the provided Options.SamplingRadius,\nie the distance between any pair of samples if >= 2*SamplingRadius.\n@param Samples output list of sample points. Transform Location is sample position, Rotation orients Z with the triangle normal\n@param TriangleIDs TriangleID that contains each sample point. Length is the same as Samples array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions, nullptr, "ComputePointSampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::GeometryScriptLibrary_MeshSamplingFunctions_eventComputePointSampling_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics
	{
		struct GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshPointSamplingOptions Options;
			FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions;
			FGeometryScriptScalarList VertexWeights;
			TArray<FTransform> Samples;
			TArray<double> SampleRadii;
			FGeometryScriptIndexList TriangleIDs;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NonUniformOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleRadii_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleRadii;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 4269836427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_NonUniformOptions = { "NonUniformOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, NonUniformOptions), Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 3113657192
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_VertexWeights = { "VertexWeights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, VertexWeights), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(nullptr, 0) }; // 396077995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_SampleRadii_Inner = { "SampleRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_SampleRadii = { "SampleRadii", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, SampleRadii), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_TriangleIDs = { "TriangleIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, TriangleIDs), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_NonUniformOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_VertexWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_SampleRadii_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_SampleRadii,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_TriangleIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSampling" },
		{ "Comment", "/**\n\x09 * Compute a set of sample points lying on the surface of TargetMesh based on the provided sampling Options and NonUniformOptions.\n\x09 * The sample points have radii in the range [Options.SamplingRadius, NonUniformOptions.MaxSamplingRadius], and\n\x09 * are non-overlapping, ie the distance between two points is always larger than the sum of their respective radii.\n\x09 * @param VertexWeights defines a per-vertex weight in range [0,1], these are interpolated to create a scalar field over the mesh triangles which is used to weight the sampling radii\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute a set of sample points lying on the surface of TargetMesh based on the provided sampling Options and NonUniformOptions.\nThe sample points have radii in the range [Options.SamplingRadius, NonUniformOptions.MaxSamplingRadius], and\nare non-overlapping, ie the distance between two points is always larger than the sum of their respective radii.\n@param VertexWeights defines a per-vertex weight in range [0,1], these are interpolated to create a scalar field over the mesh triangles which is used to weight the sampling radii" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions, nullptr, "ComputeVertexWeightedPointSampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::GeometryScriptLibrary_MeshSamplingFunctions_eventComputeVertexWeightedPointSampling_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshSamplingFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling, "ComputeNonUniformPointSampling" }, // 2434167163
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling, "ComputePointSampling" }, // 1746752954
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling, "ComputeVertexWeightedPointSampling" }, // 3789111204
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshSamplingFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSamplingFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshSampling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshSamplingFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshSamplingFunctions>()
	{
		return UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshSamplingFunctions::UGeometryScriptLibrary_MeshSamplingFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshSamplingFunctions);
	UGeometryScriptLibrary_MeshSamplingFunctions::~UGeometryScriptLibrary_MeshSamplingFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptSamplingWeightMode_StaticEnum, TEXT("EGeometryScriptSamplingWeightMode"), &Z_Registration_Info_UEnum_EGeometryScriptSamplingWeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1904685627U) },
		{ EGeometryScriptSamplingDistributionMode_StaticEnum, TEXT("EGeometryScriptSamplingDistributionMode"), &Z_Registration_Info_UEnum_EGeometryScriptSamplingDistributionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 845568934U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptMeshPointSamplingOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshPointSamplingOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshPointSamplingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshPointSamplingOptions), 4269836427U) },
		{ FGeometryScriptNonUniformPointSamplingOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics::NewStructOps, TEXT("GeometryScriptNonUniformPointSamplingOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptNonUniformPointSamplingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptNonUniformPointSamplingOptions), 3113657192U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions, UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshSamplingFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshSamplingFunctions), 2058095832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_1646516128(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
