// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "InstancedStruct.h"
#include "PoseSearch/PoseSearchAssetSampler.h"
#include "PoseSearch/PoseSearchIndex.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDatabase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	POSESEARCH_API UClass* Z_Construct_UClass_UNormalizationSetAsset();
	POSESEARCH_API UClass* Z_Construct_UClass_UNormalizationSetAsset_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSearchableAsset();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMode();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchIndex();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchMode;
	static UEnum* EPoseSearchMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMode, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchMode"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMode>()
	{
		return EPoseSearchMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enumerators[] = {
		{ "EPoseSearchMode::BruteForce", (int64)EPoseSearchMode::BruteForce },
		{ "EPoseSearchMode::PCAKDTree", (int64)EPoseSearchMode::PCAKDTree },
		{ "EPoseSearchMode::PCAKDTree_Validate", (int64)EPoseSearchMode::PCAKDTree_Validate },
		{ "EPoseSearchMode::PCAKDTree_Compare", (int64)EPoseSearchMode::PCAKDTree_Compare },
		{ "EPoseSearchMode::Num", (int64)EPoseSearchMode::Num },
		{ "EPoseSearchMode::Invalid", (int64)EPoseSearchMode::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enum_MetaDataParams[] = {
		{ "BruteForce.Name", "EPoseSearchMode::BruteForce" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchMode::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "Num.Comment", "// compares BruteForce vs PCAKDTree\n" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchMode::Num" },
		{ "Num.ToolTip", "compares BruteForce vs PCAKDTree" },
		{ "PCAKDTree.Name", "EPoseSearchMode::PCAKDTree" },
		{ "PCAKDTree_Compare.Comment", "// runs PCAKDTree and performs validation tests\n" },
		{ "PCAKDTree_Compare.Name", "EPoseSearchMode::PCAKDTree_Compare" },
		{ "PCAKDTree_Compare.ToolTip", "runs PCAKDTree and performs validation tests" },
		{ "PCAKDTree_Validate.Name", "EPoseSearchMode::PCAKDTree_Validate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchMode",
		"EPoseSearchMode",
		Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMode()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchMirrorOption;
	static UEnum* EPoseSearchMirrorOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchMirrorOption"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMirrorOption>()
	{
		return EPoseSearchMirrorOption_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enumerators[] = {
		{ "EPoseSearchMirrorOption::UnmirroredOnly", (int64)EPoseSearchMirrorOption::UnmirroredOnly },
		{ "EPoseSearchMirrorOption::MirroredOnly", (int64)EPoseSearchMirrorOption::MirroredOnly },
		{ "EPoseSearchMirrorOption::UnmirroredAndMirrored", (int64)EPoseSearchMirrorOption::UnmirroredAndMirrored },
		{ "EPoseSearchMirrorOption::Num", (int64)EPoseSearchMirrorOption::Num },
		{ "EPoseSearchMirrorOption::Invalid", (int64)EPoseSearchMirrorOption::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchMirrorOption::Invalid" },
		{ "MirroredOnly.DisplayName", "Mirrored Only" },
		{ "MirroredOnly.Name", "EPoseSearchMirrorOption::MirroredOnly" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchMirrorOption::Num" },
		{ "UnmirroredAndMirrored.DisplayName", "Original and Mirrored" },
		{ "UnmirroredAndMirrored.Name", "EPoseSearchMirrorOption::UnmirroredAndMirrored" },
		{ "UnmirroredOnly.DisplayName", "Original Only" },
		{ "UnmirroredOnly.Name", "EPoseSearchMirrorOption::UnmirroredOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchMirrorOption",
		"EPoseSearchMirrorOption",
		Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters;
class UScriptStruct* FPoseSearchExcludeFromDatabaseParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchExcludeFromDatabaseParameters"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchExcludeFromDatabaseParameters>()
{
	return FPoseSearchExcludeFromDatabaseParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceStartInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceStartInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEndInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceEndInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchExcludeFromDatabaseParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Excluding the beginning of sequences can help ensure an exact past trajectory is used when building the features\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "Excluding the beginning of sequences can help ensure an exact past trajectory is used when building the features" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval = { "SequenceStartInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchExcludeFromDatabaseParameters, SequenceStartInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Excluding the end of sequences help ensure an exact future trajectory, and also prevents the selection of\n// a sequence which will end too soon to be worth selecting.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "Excluding the end of sequences help ensure an exact future trajectory, and also prevents the selection of\na sequence which will end too soon to be worth selecting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval = { "SequenceEndInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchExcludeFromDatabaseParameters, SequenceEndInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchExcludeFromDatabaseParameters",
		sizeof(FPoseSearchExcludeFromDatabaseParameters),
		alignof(FPoseSearchExcludeFromDatabaseParameters),
		Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase;
class UScriptStruct* FPoseSearchDatabaseAnimationAssetBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseAnimationAssetBase"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimationAssetBase>()
{
	return FPoseSearchDatabaseAnimationAssetBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimationAssetBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchDatabaseAnimationAssetBase",
		sizeof(FPoseSearchDatabaseAnimationAssetBase),
		alignof(FPoseSearchDatabaseAnimationAssetBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseSequence>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseSequence cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence;
class UScriptStruct* FPoseSearchDatabaseSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseSequence"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseSequence>()
{
	return FPoseSearchDatabaseSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingRange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/** An entry in a UPoseSearchDatabase. */" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "An entry in a UPoseSearchDatabase." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseSequence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseSequence, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseSequence*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDatabaseSequence), &Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange = { "SamplingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseSequence, SamplingRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseSequence, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_MetaData)) }; // 1120262257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseSequence",
		sizeof(FPoseSearchDatabaseSequence),
		alignof(FPoseSearchDatabaseSequence),
		Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseBlendSpace>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseBlendSpace cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace;
class UScriptStruct* FPoseSearchDatabaseBlendSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseBlendSpace"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseBlendSpace>()
{
	return FPoseSearchDatabaseBlendSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGridForSampling_MetaData[];
#endif
		static void NewProp_bUseGridForSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGridForSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfHorizontalSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfHorizontalSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfVerticalSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfVerticalSamples;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/** An blend space entry in a UPoseSearchDatabase. */" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "An blend space entry in a UPoseSearchDatabase." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseBlendSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpace), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_MetaData)) }; // 1120262257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "Comment", "// If to use the blendspace grid locations as parameter sample locations.\n// When enabled, NumberOfHorizontalSamples and NumberOfVerticalSamples are ignored.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "If to use the blendspace grid locations as parameter sample locations.\nWhen enabled, NumberOfHorizontalSamples and NumberOfVerticalSamples are ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpace*)Obj)->bUseGridForSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling = { "bUseGridForSampling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpace), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bUseGridForSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples = { "NumberOfHorizontalSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, NumberOfHorizontalSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bUseGridForSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples = { "NumberOfVerticalSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, NumberOfVerticalSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseBlendSpace",
		sizeof(FPoseSearchDatabaseBlendSpace),
		alignof(FPoseSearchDatabaseBlendSpace),
		Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseAnimComposite>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseAnimComposite cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite;
class UScriptStruct* FPoseSearchDatabaseAnimComposite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseAnimComposite"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimComposite>()
{
	return FPoseSearchDatabaseAnimComposite::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimComposite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimComposite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingRange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/** An entry in a UPoseSearchDatabase. */" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "An entry in a UPoseSearchDatabase." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimComposite>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite_MetaData[] = {
		{ "Category", "AnimComposite" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite = { "AnimComposite", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseAnimComposite, AnimComposite), Z_Construct_UClass_UAnimComposite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "AnimComposite" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimComposite*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDatabaseAnimComposite), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange_MetaData[] = {
		{ "Category", "AnimComposite" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange = { "SamplingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseAnimComposite, SamplingRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "AnimComposite" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchDatabaseAnimComposite, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_MetaData)) }; // 1120262257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseAnimComposite",
		sizeof(FPoseSearchDatabaseAnimComposite),
		alignof(FPoseSearchDatabaseAnimComposite),
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.InnerSingleton;
	}
	void UNormalizationSetAsset::StaticRegisterNativesUNormalizationSetAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNormalizationSetAsset);
	UClass* Z_Construct_UClass_UNormalizationSetAsset_NoRegister()
	{
		return UNormalizationSetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UNormalizationSetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Databases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Databases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Databases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNormalizationSetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalizationSetAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/** A data asset for indexing a collection of animation sequences. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Normalization Set" },
		{ "IncludePath", "PoseSearch/PoseSearchDatabase.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "A data asset for indexing a collection of animation sequences." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases_Inner = { "Databases", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases_MetaData[] = {
		{ "Category", "NormalizationSet" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases = { "Databases", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNormalizationSetAsset, Databases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNormalizationSetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNormalizationSetAsset_Statics::NewProp_Databases,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNormalizationSetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNormalizationSetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNormalizationSetAsset_Statics::ClassParams = {
		&UNormalizationSetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNormalizationSetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNormalizationSetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNormalizationSetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNormalizationSetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNormalizationSetAsset()
	{
		if (!Z_Registration_Info_UClass_UNormalizationSetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNormalizationSetAsset.OuterSingleton, Z_Construct_UClass_UNormalizationSetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNormalizationSetAsset.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UNormalizationSetAsset>()
	{
		return UNormalizationSetAsset::StaticClass();
	}
	UNormalizationSetAsset::UNormalizationSetAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNormalizationSetAsset);
	UNormalizationSetAsset::~UNormalizationSetAsset() {}
	void UPoseSearchDatabase::StaticRegisterNativesUPoseSearchDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabase);
	UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister()
	{
		return UPoseSearchDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Schema;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrapolationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtrapolationParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFromDatabaseParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeFromDatabaseParameters;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendSpaces;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationAssets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseSearchMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseSearchMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoseSearchMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrincipalComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrincipalComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeMaxLeafSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KDTreeMaxLeafSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeQueryNumNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KDTreeQueryNumNeighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipSearchIfPossible_MetaData[];
#endif
		static void NewProp_bSkipSearchIfPossible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSearchIfPossible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalizationSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchIndexPrivate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchIndexPrivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchSearchableAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "Comment", "/** A data asset for indexing a collection of animation sequences. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Motion Database" },
		{ "IncludePath", "PoseSearch/PoseSearchDatabase.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "A data asset for indexing a collection of animation sequences." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema_MetaData[] = {
		{ "Category", "Database" },
		{ "Comment", "// Motion Database Config asset to use with this database.\n" },
		{ "DisplayName", "Config" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Motion Database Config asset to use with this database." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, Schema), Z_Construct_UClass_UPoseSearchSchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExtrapolationParameters_MetaData[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExtrapolationParameters = { "ExtrapolationParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, ExtrapolationParameters), Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExtrapolationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExtrapolationParameters_MetaData)) }; // 3412316363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters_MetaData[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters = { "ExcludeFromDatabaseParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, ExcludeFromDatabaseParameters), Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters_MetaData)) }; // 898374659
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence, METADATA_PARAMS(nullptr, 0) }; // 4209706154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_MetaData[] = {
		{ "Comment", "// Sequences and Blendspaces are deprecated and its data will be part of the AnimationAssets.\n// All sequences and blend spaces will be added to the AnimationAssets in PostLoad().\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "Sequences and Blendspaces are deprecated and its data will be part of the AnimationAssets.\nAll sequences and blend spaces will be added to the AnimationAssets in PostLoad()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, Sequences_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_MetaData)) }; // 4209706154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_Inner = { "BlendSpaces", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace, METADATA_PARAMS(nullptr, 0) }; // 2999495958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, BlendSpaces_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_MetaData)) }; // 2999495958
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_Inner = { "AnimationAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_MetaData[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets = { "AnimationAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, AnimationAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_MetaData)) }; // 3026308664
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode = { "PoseSearchMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, PoseSearchMode), Z_Construct_UEnum_PoseSearch_EPoseSearchMode, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_MetaData)) }; // 3633007721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "EditCondition", "PoseSearchMode != EPoseSearchMode::BruteForce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents = { "NumberOfPrincipalComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, NumberOfPrincipalComponents), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "256" },
		{ "ClampMin", "1" },
		{ "EditCondition", "PoseSearchMode != EPoseSearchMode::BruteForce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "UIMax", "256" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize = { "KDTreeMaxLeafSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, KDTreeMaxLeafSize), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "600" },
		{ "ClampMin", "1" },
		{ "EditCondition", "PoseSearchMode != EPoseSearchMode::BruteForce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "UIMax", "600" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors = { "KDTreeQueryNumNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, KDTreeQueryNumNeighbors), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "// if true, this database search will be skipped if cannot decrease the pose cost, and poses will not be listed into the PoseSearchDebugger\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "ToolTip", "if true, this database search will be skipped if cannot decrease the pose cost, and poses will not be listed into the PoseSearchDebugger" },
	};
#endif
	void Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_SetBit(void* Obj)
	{
		((UPoseSearchDatabase*)Obj)->bSkipSearchIfPossible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible = { "bSkipSearchIfPossible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseSearchDatabase), &Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet_MetaData[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet = { "NormalizationSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, NormalizationSet), Z_Construct_UClass_UNormalizationSetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_SearchIndexPrivate_MetaData[] = {
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_SearchIndexPrivate = { "SearchIndexPrivate", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDatabase, SearchIndexPrivate), Z_Construct_UScriptStruct_FPoseSearchIndex, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_SearchIndexPrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_SearchIndexPrivate_MetaData)) }; // 1786799431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExtrapolationParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_SearchIndexPrivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabase_Statics::ClassParams = {
		&UPoseSearchDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabase()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchDatabase>()
	{
		return UPoseSearchDatabase::StaticClass();
	}
	UPoseSearchDatabase::UPoseSearchDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseSearchDatabase)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::EnumInfo[] = {
		{ EPoseSearchMode_StaticEnum, TEXT("EPoseSearchMode"), &Z_Registration_Info_UEnum_EPoseSearchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3633007721U) },
		{ EPoseSearchMirrorOption_StaticEnum, TEXT("EPoseSearchMirrorOption"), &Z_Registration_Info_UEnum_EPoseSearchMirrorOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1120262257U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchExcludeFromDatabaseParameters::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewStructOps, TEXT("PoseSearchExcludeFromDatabaseParameters"), &Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchExcludeFromDatabaseParameters), 898374659U) },
		{ FPoseSearchDatabaseAnimationAssetBase::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimationAssetBase"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimationAssetBase), 1070195991U) },
		{ FPoseSearchDatabaseSequence::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewStructOps, TEXT("PoseSearchDatabaseSequence"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseSequence), 4209706154U) },
		{ FPoseSearchDatabaseBlendSpace::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewStructOps, TEXT("PoseSearchDatabaseBlendSpace"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseBlendSpace), 2999495958U) },
		{ FPoseSearchDatabaseAnimComposite::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimComposite"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimComposite), 2000594194U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNormalizationSetAsset, UNormalizationSetAsset::StaticClass, TEXT("UNormalizationSetAsset"), &Z_Registration_Info_UClass_UNormalizationSetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNormalizationSetAsset), 3380759489U) },
		{ Z_Construct_UClass_UPoseSearchDatabase, UPoseSearchDatabase::StaticClass, TEXT("UPoseSearchDatabase"), &Z_Registration_Info_UClass_UPoseSearchDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabase), 1760995260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_2230753619(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
