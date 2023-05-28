// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusDataDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataDomain() {}
// Cross Module References
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDataDomainType;
	static UEnum* EOptimusDataDomainType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDataDomainType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusDataDomainType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusDataDomainType"));
		}
		return Z_Registration_Info_UEnum_EOptimusDataDomainType.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDataDomainType>()
	{
		return EOptimusDataDomainType_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::Enumerators[] = {
		{ "EOptimusDataDomainType::Dimensional", (int64)EOptimusDataDomainType::Dimensional },
		{ "EOptimusDataDomainType::Expression", (int64)EOptimusDataDomainType::Expression },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::Enum_MetaDataParams[] = {
		{ "Dimensional.Name", "EOptimusDataDomainType::Dimensional" },
		{ "Expression.Comment", "/** Dimensional, e.g. has zero or more named dimensions of lookup. Zero-dimensional data domain is a singleton, e.g. a parameter */" },
		{ "Expression.Name", "EOptimusDataDomainType::Expression" },
		{ "Expression.ToolTip", "Dimensional, e.g. has zero or more named dimensions of lookup. Zero-dimensional data domain is a singleton, e.g. a parameter" },
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusDataDomainType",
		"EOptimusDataDomainType",
		Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDataDomainType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDataDomainType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusDataDomainType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDataDomain;
class UScriptStruct* FOptimusDataDomain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDataDomain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDataDomain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDataDomain, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDataDomain"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDataDomain.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDataDomain>()
{
	return FOptimusDataDomain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusDataDomain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DimensionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DimensionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DimensionNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A struct to specify the domain range of a resource buffer, as defined by compute kernels and data\n*   interfaces. Data domains can be multi-dimensional, expression-based, or empty. Empty domains on pins imply a single\n*   value, like a parameter. \n*\n*   Domains come in two flavors, either as a pre-defined list with a multiplier, or as an arithmetic expression. For\n*   domains with a multiplier, the multiplier only applies to the innermost dimension (e.g. Vertex.Bone x 2, allows\n*   for two values per-bone, but not two values per-bone _and_ per-vertex)\n*\n*   The expression can take any execution domain, or none (e.g. \"Vertex * 2 + 1\", \"Triangle * 2 + Vertex * 6\", \"1024\").\n*   If an expression is used, the domain is one-dimensional.\n*   As of now, expression domain comparison is done on the string level, such that \"Vertex * 2\" and \"2 * Vertex\" are \n*   not marked as compatible domains. \n*/" },
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
		{ "ToolTip", "A struct to specify the domain range of a resource buffer, as defined by compute kernels and data\n interfaces. Data domains can be multi-dimensional, expression-based, or empty. Empty domains on pins imply a single\n value, like a parameter.\n\n Domains come in two flavors, either as a pre-defined list with a multiplier, or as an arithmetic expression. For\n domains with a multiplier, the multiplier only applies to the innermost dimension (e.g. Vertex.Bone x 2, allows\n for two values per-bone, but not two values per-bone _and_ per-vertex)\n\n The expression can take any execution domain, or none (e.g. \"Vertex * 2 + 1\", \"Triangle * 2 + Vertex * 6\", \"1024\").\n If an expression is used, the domain is one-dimensional.\n As of now, expression domain comparison is done on the string level, such that \"Vertex * 2\" and \"2 * Vertex\" are\n not marked as compatible domains." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDataDomain>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "DataDomain" },
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataDomain, Type), Z_Construct_UEnum_OptimusCore_EOptimusDataDomainType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type_MetaData)) }; // 2103650962
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames_Inner = { "DimensionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames_MetaData[] = {
		{ "Category", "DataDomain" },
		{ "Comment", "// The name of the context that this resource/kernel applies to.\n" },
		{ "EditCondition", "DomainType==EOptimusDataDomainType::Dimensional" },
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
		{ "ToolTip", "The name of the context that this resource/kernel applies to." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames = { "DimensionNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataDomain, DimensionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "DataDomain" },
		{ "ClampMin", "1" },
		{ "EditCondition", "DomainType==EOptimusDataDomainType::Dimensional" },
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataDomain, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Expression_MetaData[] = {
		{ "Category", "DataDomain" },
		{ "Comment", "//  \n" },
		{ "EditCondition", "DomainType==EOptimusDataDomainType::Expression" },
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataDomain, Expression), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Expression_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames_Inner = { "LevelNames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDataDomain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDataDomain, LevelNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_DimensionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_Expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewProp_LevelNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusDataDomain",
		sizeof(FOptimusDataDomain),
		alignof(FOptimusDataDomain),
		Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusDataDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDataDomain.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusDataDomain.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics::EnumInfo[] = {
		{ EOptimusDataDomainType_StaticEnum, TEXT("EOptimusDataDomainType"), &Z_Registration_Info_UEnum_EOptimusDataDomainType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103650962U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics::ScriptStructInfo[] = {
		{ FOptimusDataDomain::StaticStruct, Z_Construct_UScriptStruct_FOptimusDataDomain_Statics::NewStructOps, TEXT("OptimusDataDomain"), &Z_Registration_Info_UScriptStruct_OptimusDataDomain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDataDomain), 413683696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_4108846785(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
