// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchIndex() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndex();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndexAsset();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndexBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchPoseMetadata();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESearchIndexAssetType;
	static UEnum* ESearchIndexAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESearchIndexAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESearchIndexAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("ESearchIndexAssetType"));
		}
		return Z_Registration_Info_UEnum_ESearchIndexAssetType.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<ESearchIndexAssetType>()
	{
		return ESearchIndexAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::Enumerators[] = {
		{ "ESearchIndexAssetType::Invalid", (int64)ESearchIndexAssetType::Invalid },
		{ "ESearchIndexAssetType::Sequence", (int64)ESearchIndexAssetType::Sequence },
		{ "ESearchIndexAssetType::BlendSpace", (int64)ESearchIndexAssetType::BlendSpace },
		{ "ESearchIndexAssetType::AnimComposite", (int64)ESearchIndexAssetType::AnimComposite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::Enum_MetaDataParams[] = {
		{ "AnimComposite.Name", "ESearchIndexAssetType::AnimComposite" },
		{ "BlendSpace.Name", "ESearchIndexAssetType::BlendSpace" },
		{ "Comment", "// namespace UE::PoseSearch\n" },
		{ "Invalid.Name", "ESearchIndexAssetType::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "Sequence.Name", "ESearchIndexAssetType::Sequence" },
		{ "ToolTip", "namespace UE::PoseSearch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"ESearchIndexAssetType",
		"ESearchIndexAssetType",
		Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType()
	{
		if (!Z_Registration_Info_UEnum_ESearchIndexAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESearchIndexAssetType.InnerSingleton, Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESearchIndexAssetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchBooleanRequest;
	static UEnum* EPoseSearchBooleanRequest_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchBooleanRequest.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchBooleanRequest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchBooleanRequest"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchBooleanRequest.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchBooleanRequest>()
	{
		return EPoseSearchBooleanRequest_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::Enumerators[] = {
		{ "EPoseSearchBooleanRequest::FalseValue", (int64)EPoseSearchBooleanRequest::FalseValue },
		{ "EPoseSearchBooleanRequest::TrueValue", (int64)EPoseSearchBooleanRequest::TrueValue },
		{ "EPoseSearchBooleanRequest::Indifferent", (int64)EPoseSearchBooleanRequest::Indifferent },
		{ "EPoseSearchBooleanRequest::Num", (int64)EPoseSearchBooleanRequest::Num },
		{ "EPoseSearchBooleanRequest::Invalid", (int64)EPoseSearchBooleanRequest::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::Enum_MetaDataParams[] = {
		{ "FalseValue.Name", "EPoseSearchBooleanRequest::FalseValue" },
		{ "Indifferent.Name", "EPoseSearchBooleanRequest::Indifferent" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchBooleanRequest::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "Num.Comment", "// if this is used, there will be no cost difference between true and false results\n" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchBooleanRequest::Num" },
		{ "Num.ToolTip", "if this is used, there will be no cost difference between true and false results" },
		{ "TrueValue.Name", "EPoseSearchBooleanRequest::TrueValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchBooleanRequest",
		"EPoseSearchBooleanRequest",
		Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchBooleanRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchBooleanRequest.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchBooleanRequest_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchBooleanRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchPoseFlags;
	static UEnum* EPoseSearchPoseFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchPoseFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchPoseFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchPoseFlags"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchPoseFlags.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchPoseFlags>()
	{
		return EPoseSearchPoseFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::Enumerators[] = {
		{ "EPoseSearchPoseFlags::None", (int64)EPoseSearchPoseFlags::None },
		{ "EPoseSearchPoseFlags::BlockTransition", (int64)EPoseSearchPoseFlags::BlockTransition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlockTransition.Comment", "// Don't return this pose as a search result\n" },
		{ "BlockTransition.Name", "EPoseSearchPoseFlags::BlockTransition" },
		{ "BlockTransition.ToolTip", "Don't return this pose as a search result" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "None.Name", "EPoseSearchPoseFlags::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchPoseFlags",
		"EPoseSearchPoseFlags",
		Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchPoseFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchPoseFlags.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchPoseFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata;
class UScriptStruct* FPoseSearchPoseMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchPoseMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchPoseMetadata>()
{
	return FPoseSearchPoseMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CostAddend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuingPoseCostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinuingPoseCostAddend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is kept for each pose in the search index along side the feature vector values and is used to influence the search.\n */" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "ToolTip", "This is kept for each pose in the search index along side the feature vector values and is used to influence the search." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchPoseMetadata>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchPoseMetadata, Flags), Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags_MetaData)) }; // 663614485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_CostAddend_MetaData[] = {
		{ "Comment", "// @todo: consider float16\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "@todo: consider float16" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_CostAddend = { "CostAddend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchPoseMetadata, CostAddend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_CostAddend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_CostAddend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_ContinuingPoseCostAddend_MetaData[] = {
		{ "Comment", "// @todo: consider float16\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "@todo: consider float16" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_ContinuingPoseCostAddend = { "ContinuingPoseCostAddend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchPoseMetadata, ContinuingPoseCostAddend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_ContinuingPoseCostAddend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_ContinuingPoseCostAddend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_AssetIndex_MetaData[] = {
		{ "Comment", "// @todo: consider int16\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "@todo: consider int16" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_AssetIndex = { "AssetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchPoseMetadata, AssetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_AssetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_AssetIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_CostAddend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_ContinuingPoseCostAddend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewProp_AssetIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchPoseMetadata",
		sizeof(FPoseSearchPoseMetadata),
		alignof(FPoseSearchPoseMetadata),
		Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchPoseMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset;
class UScriptStruct* FPoseSearchIndexAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchIndexAsset, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchIndexAsset"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchIndexAsset>()
{
	return FPoseSearchIndexAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceAssetIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrored_MetaData[];
#endif
		static void NewProp_bMirrored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingInterval_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoseIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstPoseIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Information about a source animation asset used by a search index.\n* Some source animation entries may generate multiple FPoseSearchIndexAsset entries.\n**/" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "ToolTip", "Information about a source animation asset used by a search index.\nSome source animation entries may generate multiple FPoseSearchIndexAsset entries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchIndexAsset>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// Default to Sequence for now for backward compatibility but\n// at some point we might want to change this to Invalid.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "Default to Sequence for now for backward compatibility but\nat some point we might want to change this to Invalid." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexAsset, Type), Z_Construct_UEnum_PoseSearch_ESearchIndexAssetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type_MetaData)) }; // 1842822890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SourceAssetIdx_MetaData[] = {
		{ "Comment", "// Index of the source asset in search index's container (i.e. UPoseSearchDatabase)\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "Index of the source asset in search index's container (i.e. UPoseSearchDatabase)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SourceAssetIdx = { "SourceAssetIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexAsset, SourceAssetIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SourceAssetIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SourceAssetIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored_SetBit(void* Obj)
	{
		((FPoseSearchIndexAsset*)Obj)->bMirrored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored = { "bMirrored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchIndexAsset), &Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_BlendParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_BlendParameters = { "BlendParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexAsset, BlendParameters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_BlendParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_BlendParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SamplingInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SamplingInterval = { "SamplingInterval", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexAsset, SamplingInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SamplingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SamplingInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_FirstPoseIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_FirstPoseIdx = { "FirstPoseIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexAsset, FirstPoseIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_FirstPoseIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_FirstPoseIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_NumPoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_NumPoses = { "NumPoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexAsset, NumPoses), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_NumPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_NumPoses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SourceAssetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_bMirrored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_BlendParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_SamplingInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_FirstPoseIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewProp_NumPoses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchIndexAsset",
		sizeof(FPoseSearchIndexAsset),
		alignof(FPoseSearchIndexAsset),
		Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndexAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchIndexBase;
class UScriptStruct* FPoseSearchIndexBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchIndexBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchIndexBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchIndexBase, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchIndexBase"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchIndexBase.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchIndexBase>()
{
	return FPoseSearchIndexBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoses;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseMetadata_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseMetadata;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_OverallFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverallFlags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCostAddend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* case class for FPoseSearchIndex. building block used to gather data for data mining and calculate weights, pca, kdtree stuff\n*/" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "ToolTip", "case class for FPoseSearchIndex. building block used to gather data for data mining and calculate weights, pca, kdtree stuff" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchIndexBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_NumPoses_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_NumPoses = { "NumPoses", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexBase, NumPoses), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_NumPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_NumPoses_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexBase, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata_Inner = { "PoseMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseSearchPoseMetadata, METADATA_PARAMS(nullptr, 0) }; // 3848058498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata = { "PoseMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexBase, PoseMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata_MetaData)) }; // 3848058498
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags = { "OverallFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexBase, OverallFlags), Z_Construct_UEnum_PoseSearch_EPoseSearchPoseFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags_MetaData)) }; // 663614485
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseSearchIndexAsset, METADATA_PARAMS(nullptr, 0) }; // 2675656391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexBase, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets_MetaData)) }; // 2675656391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_MinCostAddend_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// minimum of the database metadata CostAddend: it represents the minimum cost of any search for the associated database (we'll skip the search in case the search result total cost is already less than MinCostAddend)\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "minimum of the database metadata CostAddend: it represents the minimum cost of any search for the associated database (we'll skip the search in case the search result total cost is already less than MinCostAddend)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_MinCostAddend = { "MinCostAddend", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndexBase, MinCostAddend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_MinCostAddend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_MinCostAddend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_NumPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_PoseMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_OverallFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewProp_MinCostAddend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchIndexBase",
		sizeof(FPoseSearchIndexBase),
		alignof(FPoseSearchIndexBase),
		Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndexBase()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchIndexBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchIndexBase.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchIndexBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchIndex>() == std::is_polymorphic<FPoseSearchIndexBase>(), "USTRUCT FPoseSearchIndex cannot be polymorphic unless super FPoseSearchIndexBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchIndex;
class UScriptStruct* FPoseSearchIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchIndex, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchIndex"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchIndex.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchIndex>()
{
	return FPoseSearchIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PCAValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PCAValues;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PCAProjectionMatrix_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAProjectionMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PCAProjectionMatrix;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mean_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Mean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightsSqrt_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightsSqrt_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightsSqrt;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAExplainedVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PCAExplainedVariance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Deviation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deviation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Deviation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A search index for animation poses. The structure of the search index is determined by its UPoseSearchSchema.\n* May represent a single animation (see UPoseSearchSequenceMetaData) or a collection (see UPoseSearchDatabase).\n*/" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "ToolTip", "A search index for animation poses. The structure of the search index is determined by its UPoseSearchSchema.\nMay represent a single animation (see UPoseSearchSequenceMetaData) or a collection (see UPoseSearchDatabase)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchIndex>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues_Inner = { "PCAValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues = { "PCAValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndex, PCAValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix_Inner = { "PCAProjectionMatrix", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix = { "PCAProjectionMatrix", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndex, PCAProjectionMatrix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean_Inner = { "Mean", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndex, Mean), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt_Inner = { "WeightsSqrt", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "// we store weights square roots to reduce numerical errors when CompareFeatureVectors \n// ((VA - VB) * VW).square().sum()\n// instead of\n// ((VA - VB).square() * VW).sum()\n// since (VA - VB).square() could lead to big numbers, and VW being multiplied by the variance of the dataset\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
		{ "ToolTip", "we store weights square roots to reduce numerical errors when CompareFeatureVectors\n((VA - VB) * VW).square().sum()\ninstead of\n((VA - VB).square() * VW).sum()\nsince (VA - VB).square() could lead to big numbers, and VW being multiplied by the variance of the dataset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt = { "WeightsSqrt", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndex, WeightsSqrt), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAExplainedVariance_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAExplainedVariance = { "PCAExplainedVariance", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndex, PCAExplainedVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAExplainedVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAExplainedVariance_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation_Inner = { "Deviation", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchIndex.h" },
		{ "NeverInHash", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation = { "Deviation", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchIndex, Deviation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAProjectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Mean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_WeightsSqrt,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_PCAExplainedVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewProp_Deviation,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchIndexBase,
		&NewStructOps,
		"PoseSearchIndex",
		sizeof(FPoseSearchIndex),
		alignof(FPoseSearchIndex),
		Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchIndex.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchIndex.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics::EnumInfo[] = {
		{ ESearchIndexAssetType_StaticEnum, TEXT("ESearchIndexAssetType"), &Z_Registration_Info_UEnum_ESearchIndexAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1842822890U) },
		{ EPoseSearchBooleanRequest_StaticEnum, TEXT("EPoseSearchBooleanRequest"), &Z_Registration_Info_UEnum_EPoseSearchBooleanRequest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2121616840U) },
		{ EPoseSearchPoseFlags_StaticEnum, TEXT("EPoseSearchPoseFlags"), &Z_Registration_Info_UEnum_EPoseSearchPoseFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 663614485U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchPoseMetadata::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics::NewStructOps, TEXT("PoseSearchPoseMetadata"), &Z_Registration_Info_UScriptStruct_PoseSearchPoseMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchPoseMetadata), 3848058498U) },
		{ FPoseSearchIndexAsset::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics::NewStructOps, TEXT("PoseSearchIndexAsset"), &Z_Registration_Info_UScriptStruct_PoseSearchIndexAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchIndexAsset), 2675656391U) },
		{ FPoseSearchIndexBase::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics::NewStructOps, TEXT("PoseSearchIndexBase"), &Z_Registration_Info_UScriptStruct_PoseSearchIndexBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchIndexBase), 710866077U) },
		{ FPoseSearchIndex::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchIndex_Statics::NewStructOps, TEXT("PoseSearchIndex"), &Z_Registration_Info_UScriptStruct_PoseSearchIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchIndex), 1786799431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_2374644156(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
