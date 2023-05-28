// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSampling() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData;
class UScriptStruct* FSkeletalMeshSamplingRegionBuiltData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionBuiltData"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegionBuiltData>()
{
	return FSkeletalMeshSamplingRegionBuiltData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Built data for sampling a single region of a skeletal mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Built data for sampling a single region of a skeletal mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBuiltData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegionBuiltData",
		sizeof(FSkeletalMeshSamplingRegionBuiltData),
		alignof(FSkeletalMeshSamplingRegionBuiltData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData;
class UScriptStruct* FSkeletalMeshSamplingLODBuiltData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingLODBuiltData"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingLODBuiltData>()
{
	return FSkeletalMeshSamplingLODBuiltData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Built data for sampling a the whole mesh at a particular LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Built data for sampling a the whole mesh at a particular LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingLODBuiltData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingLODBuiltData",
		sizeof(FSkeletalMeshSamplingLODBuiltData),
		alignof(FSkeletalMeshSamplingLODBuiltData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData;
class UScriptStruct* FSkeletalMeshSamplingBuiltData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingBuiltData"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingBuiltData>()
{
	return FSkeletalMeshSamplingBuiltData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_WholeMeshBuiltData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WholeMeshBuiltData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WholeMeshBuiltData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegionBuiltData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionBuiltData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegionBuiltData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingBuiltData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_Inner = { "WholeMeshBuiltData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData, METADATA_PARAMS(nullptr, 0) }; // 3648467204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData = { "WholeMeshBuiltData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingBuiltData, WholeMeshBuiltData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_MetaData)) }; // 3648467204
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_Inner = { "RegionBuiltData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData, METADATA_PARAMS(nullptr, 0) }; // 737459926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData = { "RegionBuiltData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingBuiltData, RegionBuiltData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_MetaData)) }; // 737459926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingBuiltData",
		sizeof(FSkeletalMeshSamplingBuiltData),
		alignof(FSkeletalMeshSamplingBuiltData),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter;
class UScriptStruct* FSkeletalMeshSamplingRegionBoneFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionBoneFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegionBoneFilter>()
{
	return FSkeletalMeshSamplingRegionBoneFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeOrExclude_MetaData[];
#endif
		static void NewProp_bIncludeOrExclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOrExclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[];
#endif
		static void NewProp_bApplyToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Filter to include or exclude bones and their associated triangles from a sampling region. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filter to include or exclude bones and their associated triangles from a sampling region." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBoneFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Bone Filter" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegionBoneFilter, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_MetaData[] = {
		{ "Category", "Bone Filter" },
		{ "Comment", "/** If true, this filter will include bones. If false, it will exclude them. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "If true, this filter will include bones. If false, it will exclude them." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_SetBit(void* Obj)
	{
		((FSkeletalMeshSamplingRegionBoneFilter*)Obj)->bIncludeOrExclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude = { "bIncludeOrExclude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSkeletalMeshSamplingRegionBoneFilter), &Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_MetaData[] = {
		{ "Category", "Bone Filter" },
		{ "Comment", "/** If true, this filter will apply to all children of this bone as well. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "If true, this filter will apply to all children of this bone as well." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_SetBit(void* Obj)
	{
		((FSkeletalMeshSamplingRegionBoneFilter*)Obj)->bApplyToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren = { "bApplyToChildren", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSkeletalMeshSamplingRegionBoneFilter), &Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegionBoneFilter",
		sizeof(FSkeletalMeshSamplingRegionBoneFilter),
		alignof(FSkeletalMeshSamplingRegionBoneFilter),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter;
class UScriptStruct* FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionMaterialFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegionMaterialFilter>()
{
	return FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Filter to include triangles in a sampling region based on their material. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filter to include triangles in a sampling region based on their material." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionMaterialFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "Material Filter" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegionMaterialFilter, MaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegionMaterialFilter",
		sizeof(FSkeletalMeshSamplingRegionMaterialFilter),
		alignof(FSkeletalMeshSamplingRegionMaterialFilter),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion;
class UScriptStruct* FSkeletalMeshSamplingRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegion"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegion>()
{
	return FSkeletalMeshSamplingRegion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialFilters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defined a named region on a mesh that will have associated triangles and bones for fast sampling at each enabled LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Defined a named region on a mesh that will have associated triangles and bones for fast sampling at each enabled LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegion>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** Name of this region that users will reference. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Name of this region that users will reference." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** The LOD of the mesh that this region applies to. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "The LOD of the mesh that this region applies to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/**\n\x09Mesh supports uniformly distributed sampling in constant time.\n\x09Memory cost is 8 bytes per triangle.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((FSkeletalMeshSamplingRegion*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSkeletalMeshSamplingRegion), &Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_Inner = { "MaterialFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter, METADATA_PARAMS(nullptr, 0) }; // 3767113978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** Filters to determine which triangles to include in this region based on material. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filters to determine which triangles to include in this region based on material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters = { "MaterialFilters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, MaterialFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_MetaData)) }; // 3767113978
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_Inner = { "BoneFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter, METADATA_PARAMS(nullptr, 0) }; // 793486214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** Filters to determine which triangles and bones to include in this region based on bone. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filters to determine which triangles and bones to include in this region based on bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters = { "BoneFilters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, BoneFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_MetaData)) }; // 793486214
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegion",
		sizeof(FSkeletalMeshSamplingRegion),
		alignof(FSkeletalMeshSamplingRegion),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo;
class UScriptStruct* FSkeletalMeshSamplingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingInfo>()
{
	return FSkeletalMeshSamplingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Regions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Regions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Regions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuiltData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_Inner = { "Regions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion, METADATA_PARAMS(nullptr, 0) }; // 2776404297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Info defining sampling of named regions on this mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Info defining sampling of named regions on this mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions = { "Regions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingInfo, Regions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_MetaData)) }; // 2776404297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData = { "BuiltData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshSamplingInfo, BuiltData), Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData_MetaData)) }; // 648513895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingInfo",
		sizeof(FSkeletalMeshSamplingInfo),
		alignof(FSkeletalMeshSamplingInfo),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSampling_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSampling_h_Statics::ScriptStructInfo[] = {
		{ FSkeletalMeshSamplingRegionBuiltData::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::NewStructOps, TEXT("SkeletalMeshSamplingRegionBuiltData"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBuiltData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingRegionBuiltData), 737459926U) },
		{ FSkeletalMeshSamplingLODBuiltData::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::NewStructOps, TEXT("SkeletalMeshSamplingLODBuiltData"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingLODBuiltData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingLODBuiltData), 3648467204U) },
		{ FSkeletalMeshSamplingBuiltData::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewStructOps, TEXT("SkeletalMeshSamplingBuiltData"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingBuiltData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingBuiltData), 648513895U) },
		{ FSkeletalMeshSamplingRegionBoneFilter::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewStructOps, TEXT("SkeletalMeshSamplingRegionBoneFilter"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionBoneFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingRegionBoneFilter), 793486214U) },
		{ FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewStructOps, TEXT("SkeletalMeshSamplingRegionMaterialFilter"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegionMaterialFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingRegionMaterialFilter), 3767113978U) },
		{ FSkeletalMeshSamplingRegion::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewStructOps, TEXT("SkeletalMeshSamplingRegion"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingRegion), 2776404297U) },
		{ FSkeletalMeshSamplingInfo::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewStructOps, TEXT("SkeletalMeshSamplingInfo"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSamplingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSamplingInfo), 408201072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSampling_h_1252293258(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSampling_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSampling_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
