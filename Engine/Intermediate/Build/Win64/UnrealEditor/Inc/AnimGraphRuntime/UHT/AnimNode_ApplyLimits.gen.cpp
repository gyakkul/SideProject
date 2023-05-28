// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_ApplyLimits.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyLimits() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAngularRangeLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AngularRangeLimit;
class UScriptStruct* FAngularRangeLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AngularRangeLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AngularRangeLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngularRangeLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AngularRangeLimit"));
	}
	return Z_Registration_Info_UScriptStruct_AngularRangeLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAngularRangeLimit>()
{
	return FAngularRangeLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAngularRangeLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngularRangeLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularRangeLimit, LimitMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularRangeLimit, LimitMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAngularRangeLimit, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AngularRangeLimit",
		sizeof(FAngularRangeLimit),
		alignof(FAngularRangeLimit),
		Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAngularRangeLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_AngularRangeLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AngularRangeLimit.InnerSingleton, Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AngularRangeLimit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ApplyLimits>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ApplyLimits cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits;
class UScriptStruct* FAnimNode_ApplyLimits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ApplyLimits"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ApplyLimits>()
{
	return FAnimNode_ApplyLimits::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularRangeLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularRangeLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularRangeLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AngularOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyLimits>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_Inner = { "AngularRangeLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAngularRangeLimit, METADATA_PARAMS(nullptr, 0) }; // 3423265136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits = { "AngularRangeLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyLimits, AngularRangeLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_MetaData)) }; // 3423265136
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_Inner = { "AngularOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets = { "AngularOffsets", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyLimits, AngularOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ApplyLimits",
		sizeof(FAnimNode_ApplyLimits),
		alignof(FAnimNode_ApplyLimits),
		Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics::ScriptStructInfo[] = {
		{ FAngularRangeLimit::StaticStruct, Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewStructOps, TEXT("AngularRangeLimit"), &Z_Registration_Info_UScriptStruct_AngularRangeLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAngularRangeLimit), 3423265136U) },
		{ FAnimNode_ApplyLimits::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewStructOps, TEXT("AnimNode_ApplyLimits"), &Z_Registration_Info_UScriptStruct_AnimNode_ApplyLimits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ApplyLimits), 831416234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_2935365402(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ApplyLimits_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
