// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "../../Source/Runtime/Engine/Classes/Animation/SmartName.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAsset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluence();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluences();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseData;
class UScriptStruct* FPoseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseData"));
	}
	return Z_Registration_Info_UScriptStruct_PoseData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseData>()
{
	return FPoseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocalSpacePose_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocalSpacePose_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLocalSpacePose;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceCurveData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceCurveData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpacePose_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePose_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePose;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Pose data \n * \n * This is one pose data structure\n * This will let us blend poses quickly easily\n * All poses within this asset should contain same number of tracks, \n * so that we can blend quickly\n */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data\n\nThis is one pose data structure\nThis will let us blend poses quickly easily\nAll poses within this asset should contain same number of tracks,\nso that we can blend quickly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseData>();
	}
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner = { "SourceLocalSpacePose", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData[] = {
		{ "Comment", "// source local space pose, this pose is always full pose\n// the size this array matches Tracks in the pose container\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source local space pose, this pose is always full pose\nthe size this array matches Tracks in the pose container" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose = { "SourceLocalSpacePose", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseData, SourceLocalSpacePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner = { "SourceCurveData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData[] = {
		{ "Comment", "// source curve data that is full value\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source curve data that is full value" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData = { "SourceCurveData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseData, SourceCurveData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner = { "LocalSpacePose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData[] = {
		{ "Comment", "// local space pose, # of array match with # of TrackToBufferIndex\n// it only saves the one with delta as base pose or ref pose if full pose\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "local space pose, # of array match with # of TrackToBufferIndex\nit only saves the one with delta as base pose or ref pose if full pose" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose = { "LocalSpacePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseData, LocalSpacePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData[] = {
		{ "Comment", "// # of array match with # of Curves in PoseDataContainer\n// curve data is not compressed\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "# of array match with # of Curves in PoseDataContainer\ncurve data is not compressed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseData, CurveData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseData",
		sizeof(FPoseData),
		alignof(FPoseData),
		Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseData()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseData.InnerSingleton, Z_Construct_UScriptStruct_FPoseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseAssetInfluence;
class UScriptStruct* FPoseAssetInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseAssetInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseAssetInfluence, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseAssetInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_PoseAssetInfluence.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseAssetInfluence>()
{
	return FPoseAssetInfluence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransformIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTransformIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseAssetInfluence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex = { "PoseIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseAssetInfluence, PoseIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex = { "BoneTransformIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseAssetInfluence, BoneTransformIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_PoseIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewProp_BoneTransformIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseAssetInfluence",
		sizeof(FPoseAssetInfluence),
		alignof(FPoseAssetInfluence),
		Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluence()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseAssetInfluence.InnerSingleton, Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseAssetInfluence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseAssetInfluences;
class UScriptStruct* FPoseAssetInfluences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseAssetInfluences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseAssetInfluences, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseAssetInfluences"));
	}
	return Z_Registration_Info_UScriptStruct_PoseAssetInfluences.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseAssetInfluences>()
{
	return FPoseAssetInfluences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Influences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Influences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseAssetInfluences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_Inner = { "Influences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseAssetInfluence, METADATA_PARAMS(nullptr, 0) }; // 2939766159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseAssetInfluences, Influences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_MetaData)) }; // 2939766159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewProp_Influences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseAssetInfluences",
		sizeof(FPoseAssetInfluences),
		alignof(FPoseAssetInfluences),
		Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseAssetInfluences()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseAssetInfluences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseAssetInfluences.InnerSingleton, Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseAssetInfluences.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseDataContainer;
class UScriptStruct* FPoseDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseDataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDataContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseDataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_PoseDataContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseDataContainer>()
{
	return FPoseDataContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackBoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackBoneIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackPoseInfluenceIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackPoseInfluenceIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackPoseInfluenceIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Pose data container\n* \n* Contains animation and curve for all poses\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data container\n\nContains animation and curve for all poses" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDataContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(nullptr, 0) }; // 1281775015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData[] = {
		{ "Comment", "// pose names - horizontal data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "pose names - horizontal data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDataContainer, PoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData)) }; // 1281775015
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "// this is list of tracks - vertical data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of tracks - vertical data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDataContainer, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_Inner = { "TrackBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_MetaData[] = {
		{ "Comment", "// cache containting the skeleton indices for FName in Tracks array\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "cache containting the skeleton indices for FName in Tracks array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices = { "TrackBoneIndices", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDataContainer, TrackBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_Inner = { "TrackPoseInfluenceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseAssetInfluences, METADATA_PARAMS(nullptr, 0) }; // 62970085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices = { "TrackPoseInfluenceIndices", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDataContainer, TrackPoseInfluenceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_MetaData)) }; // 62970085
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseData, METADATA_PARAMS(nullptr, 0) }; // 3255499206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData[] = {
		{ "Comment", "// this is list of poses\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of poses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDataContainer, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData)) }; // 3255499206
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimCurveBase, METADATA_PARAMS(nullptr, 0) }; // 3572319546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData[] = {
		{ "Comment", "// curve meta data # of Curve UIDs should match with Poses.CurveValues.Num\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "curve meta data # of Curve UIDs should match with Poses.CurveValues.Num" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDataContainer, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData)) }; // 3572319546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackPoseInfluenceIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseDataContainer",
		sizeof(FPoseDataContainer),
		alignof(FPoseDataContainer),
		Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseDataContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseDataContainer.InnerSingleton, Z_Construct_UScriptStruct_FPoseDataContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseDataContainer.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UPoseAsset::execUpdatePoseFromAnimation)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePoseFromAnimation(Z_Param_AnimSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseAsset::execGetPoseNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_PoseNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPoseNames(Z_Param_Out_PoseNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoseAsset::execRenamePose)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OriginalPoseName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewPoseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenamePose(Z_Param_Out_OriginalPoseName,Z_Param_Out_NewPoseName);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UPoseAsset::StaticRegisterNativesUPoseAsset()
	{
#if WITH_EDITOR
		UClass* Class = UPoseAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPoseNames", &UPoseAsset::execGetPoseNames },
			{ "RenamePose", &UPoseAsset::execRenamePose },
			{ "UpdatePoseFromAnimation", &UPoseAsset::execUpdatePoseFromAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics
	{
		struct PoseAsset_eventGetPoseNames_Parms
		{
			TArray<FName> PoseNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PoseAsset_eventGetPoseNames_Parms, PoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::NewProp_PoseNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Returns the name of all contained poses */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Returns the name of all contained poses" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "GetPoseNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PoseAsset_eventGetPoseNames_Parms), Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseAsset_GetPoseNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_GetPoseNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPoseAsset_RenamePose_Statics
	{
		struct PoseAsset_eventRenamePose_Parms
		{
			FName OriginalPoseName;
			FName NewPoseName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OriginalPoseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPoseName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName = { "OriginalPoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PoseAsset_eventRenamePose_Parms, OriginalPoseName), METADATA_PARAMS(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName = { "NewPoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PoseAsset_eventRenamePose_Parms, NewPoseName), METADATA_PARAMS(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_OriginalPoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::NewProp_NewPoseName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Renames a specific pose */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Renames a specific pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "RenamePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PoseAsset_eventRenamePose_Parms), Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseAsset_RenamePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_RenamePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics
	{
		struct PoseAsset_eventUpdatePoseFromAnimation_Parms
		{
			UAnimSequence* AnimSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PoseAsset_eventUpdatePoseFromAnimation_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::NewProp_AnimSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseAsset" },
		{ "Comment", "/** Contained poses are re-generated from the provided Animation Sequence*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Contained poses are re-generated from the provided Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseAsset, nullptr, "UpdatePoseFromAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PoseAsset_eventUpdatePoseFromAnimation_Parms), Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseAsset);
	UClass* Z_Construct_UClass_UPoseAsset_NoRegister()
	{
		return UPoseAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPoseAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdditivePose_MetaData[];
#endif
		static void NewProp_bAdditivePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditivePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BasePoseIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RetargetSourceAsset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetSourceAssetReferencePose_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAssetReferencePose_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RetargetSourceAssetReferencePose;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimationRawDataGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAnimationRawDataGUID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoseAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPoseAsset_GetPoseNames, "GetPoseNames" }, // 1000344345
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPoseAsset_RenamePose, "RenamePose" }, // 340802758
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UPoseAsset_UpdatePoseFromAnimation, "UpdatePoseFromAnimation" }, // 2479709747
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Pose Asset that can be blended by weight of curves \n */" },
		{ "IncludePath", "Animation/PoseAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose Asset that can be blended by weight of curves" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData[] = {
		{ "Comment", "/** Animation Pose Data*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Animation Pose Data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer = { "PoseContainer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, PoseContainer), Z_Construct_UScriptStruct_FPoseDataContainer, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData)) }; // 4139170208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData[] = {
		{ "Comment", "/** Whether or not Additive Pose or not - these are property that needs post process, so */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Whether or not Additive Pose or not - these are property that needs post process, so" },
	};
#endif
	void Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit(void* Obj)
	{
		((UPoseAsset*)Obj)->bAdditivePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose = { "bAdditivePose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseAsset), &Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData[] = {
		{ "Comment", "/** if -1, use ref pose */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "if -1, use ref pose" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex = { "BasePoseIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, BasePoseIndex), METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, RetargetSource), METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose. */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset = { "RetargetSourceAsset", nullptr, (EPropertyFlags)0x0014010800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, RetargetSourceAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_Inner = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData[] = {
		{ "Comment", "/** When using RetargetSourceAsset, use the post stored here */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "When using RetargetSourceAsset, use the post stored here" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, RetargetSourceAssetReferencePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation = { "SourceAnimation", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID_MetaData[] = {
		{ "Comment", "/** GUID cached when the contained poses were last updated according to SourceAnimation - used to keep track of out-of-date/sync data*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "GUID cached when the contained poses were last updated according to SourceAnimation - used to keep track of out-of-date/sync data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID = { "SourceAnimationRawDataGUID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAsset, SourceAnimationRawDataGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimationRawDataGUID,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseAsset_Statics::ClassParams = {
		&UPoseAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UPoseAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseAsset()
	{
		if (!Z_Registration_Info_UClass_UPoseAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseAsset.OuterSingleton, Z_Construct_UClass_UPoseAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseAsset>()
	{
		return UPoseAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAsset);
	UPoseAsset::~UPoseAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ScriptStructInfo[] = {
		{ FPoseData::StaticStruct, Z_Construct_UScriptStruct_FPoseData_Statics::NewStructOps, TEXT("PoseData"), &Z_Registration_Info_UScriptStruct_PoseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseData), 3255499206U) },
		{ FPoseAssetInfluence::StaticStruct, Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewStructOps, TEXT("PoseAssetInfluence"), &Z_Registration_Info_UScriptStruct_PoseAssetInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseAssetInfluence), 2939766159U) },
		{ FPoseAssetInfluences::StaticStruct, Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewStructOps, TEXT("PoseAssetInfluences"), &Z_Registration_Info_UScriptStruct_PoseAssetInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseAssetInfluences), 62970085U) },
		{ FPoseDataContainer::StaticStruct, Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewStructOps, TEXT("PoseDataContainer"), &Z_Registration_Info_UScriptStruct_PoseDataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseDataContainer), 4139170208U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseAsset, UPoseAsset::StaticClass, TEXT("UPoseAsset"), &Z_Registration_Info_UClass_UPoseAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseAsset), 1673838006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_2669196974(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
