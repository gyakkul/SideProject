// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchSchema.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchSchema() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor;
	static UEnum* EPoseSearchDataPreprocessor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchDataPreprocessor"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchDataPreprocessor>()
	{
		return EPoseSearchDataPreprocessor_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enumerators[] = {
		{ "EPoseSearchDataPreprocessor::None", (int64)EPoseSearchDataPreprocessor::None },
		{ "EPoseSearchDataPreprocessor::Normalize", (int64)EPoseSearchDataPreprocessor::Normalize },
		{ "EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation", (int64)EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation },
		{ "EPoseSearchDataPreprocessor::Num", (int64)EPoseSearchDataPreprocessor::Num },
		{ "EPoseSearchDataPreprocessor::Invalid", (int64)EPoseSearchDataPreprocessor::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// namespace UE::PoseSearch\n" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchDataPreprocessor::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "None.Name", "EPoseSearchDataPreprocessor::None" },
		{ "Normalize.Name", "EPoseSearchDataPreprocessor::Normalize" },
		{ "NormalizeOnlyByDeviation.Name", "EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchDataPreprocessor::Num" },
		{ "ToolTip", "namespace UE::PoseSearch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchDataPreprocessor",
		"EPoseSearchDataPreprocessor",
		Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset;
class UScriptStruct* FPoseSearchSchemaColorPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchSchemaColorPreset"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchSchemaColorPreset>()
{
	return FPoseSearchSchemaColorPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchSchemaColorPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Query_MetaData[] = {
		{ "Category", "Colors" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchSchemaColorPreset, Query), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Colors" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchSchemaColorPreset, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchSchemaColorPreset",
		sizeof(FPoseSearchSchemaColorPreset),
		alignof(FPoseSearchSchemaColorPreset),
		Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset.InnerSingleton;
	}
	void UPoseSearchSchema::StaticRegisterNativesUPoseSearchSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchSchema);
	UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister()
	{
		return UPoseSearchSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorDataTable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataPreprocessor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPreprocessor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataPreprocessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaCardinality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SchemaCardinality;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneReferences;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_BoneIndicesWithParents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndicesWithParents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIndicesWithParents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuingPoseCostBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinuingPoseCostBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCostBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseCostBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorMismatchCostBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MirrorMismatchCostBias;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/**\n* Specifies the format of a pose search index. At runtime, queries are built according to the schema for searching.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Motion Database Config" },
		{ "IncludePath", "PoseSearch/PoseSearchSchema.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "Specifies the format of a pose search index. At runtime, queries are built according to the schema for searching." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "// @todo: used only for indexing: cache it somewhere else\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "@todo: used only for indexing: cache it somewhere else" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Schema" },
		{ "ClampMax", "240" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner_MetaData[] = {
		{ "Category", "Schema" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_MetaData[] = {
		{ "Category", "Schema" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "// If set, this schema will support mirroring pose search databases\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "If set, this schema will support mirroring pose search databases" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_MetaData[] = {
		{ "Category", "Schema" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor = { "DataPreprocessor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, DataPreprocessor), Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_MetaData)) }; // 4214337906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality = { "SchemaCardinality", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, SchemaCardinality), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_Inner = { "BoneReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_MetaData[] = {
		{ "Comment", "// @todo: used only for indexing: cache it somewhere else\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "@todo: used only for indexing: cache it somewhere else" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences = { "BoneReferences", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, BoneReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_MetaData)) }; // 2906976723
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_Inner = { "BoneIndicesWithParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents = { "BoneIndicesWithParents", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, BoneIndicesWithParents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "// cost added to the continuing pose from databases that uses this schema\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "cost added to the continuing pose from databases that uses this schema" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias = { "ContinuingPoseCostBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, ContinuingPoseCostBias), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "// base cost added to all poses from databases that uses this schema. it can be overridden by UAnimNotifyState_PoseSearchModifyCost\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "base cost added to all poses from databases that uses this schema. it can be overridden by UAnimNotifyState_PoseSearchModifyCost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias = { "BaseCostBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, BaseCostBias), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorMismatchCostBias_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "// If there's a mirroring mismatch between the currently playing asset and a search candidate, this cost will be \n// added to the candidate, making it less likely to be selected\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "ToolTip", "If there's a mirroring mismatch between the currently playing asset and a search candidate, this cost will be\nadded to the candidate, making it less likely to be selected" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorMismatchCostBias = { "MirrorMismatchCostBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, MirrorMismatchCostBias), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorMismatchCostBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorMismatchCostBias_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets_Inner = { "ColorPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset, METADATA_PARAMS(nullptr, 0) }; // 129453852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets_MetaData[] = {
		{ "Category", "Schema" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets = { "ColorPresets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchSchema, ColorPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets_MetaData)) }; // 129453852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorMismatchCostBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ColorPresets,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPoseSearchSchema_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UPoseSearchSchema, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchSchema_Statics::ClassParams = {
		&UPoseSearchSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchSchema()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton, Z_Construct_UClass_UPoseSearchSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchSchema>()
	{
		return UPoseSearchSchema::StaticClass();
	}
	UPoseSearchSchema::UPoseSearchSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchSchema);
	UPoseSearchSchema::~UPoseSearchSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::EnumInfo[] = {
		{ EPoseSearchDataPreprocessor_StaticEnum, TEXT("EPoseSearchDataPreprocessor"), &Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4214337906U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchSchemaColorPreset::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchSchemaColorPreset_Statics::NewStructOps, TEXT("PoseSearchSchemaColorPreset"), &Z_Registration_Info_UScriptStruct_PoseSearchSchemaColorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchSchemaColorPreset), 129453852U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchSchema, UPoseSearchSchema::StaticClass, TEXT("UPoseSearchSchema"), &Z_Registration_Info_UClass_UPoseSearchSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchSchema), 1852382806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_2459557721(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
