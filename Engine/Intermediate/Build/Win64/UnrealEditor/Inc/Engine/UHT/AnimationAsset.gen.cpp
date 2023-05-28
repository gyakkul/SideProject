// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncGroupScope();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSampleData;
class UScriptStruct* FBlendSampleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSampleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSampleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSampleData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSampleData"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSampleData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSampleData>()
{
	return FBlendSampleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSampleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleDataIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplePlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transform definition */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Transform definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSampleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex = { "SampleDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, SampleDataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight = { "TotalWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, TotalWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate_MetaData[] = {
		{ "Comment", "// Rate of change of the Weight - used in smoothed BlendSpace blends\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Rate of change of the Weight - used in smoothed BlendSpace blends" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate = { "WeightRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, WeightRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime = { "PreviousTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, PreviousTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate_MetaData[] = {
		{ "Comment", "// We may merge multiple samples if they use the same animation\n// Calculate the combined sample play rate here\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "We may merge multiple samples if they use the same animation\nCalculate the combined sample play rate here" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate = { "SamplePlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSampleData, SamplePlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSampleData",
		sizeof(FBlendSampleData),
		alignof(FBlendSampleData),
		Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSampleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSampleData.InnerSingleton, Z_Construct_UScriptStruct_FBlendSampleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSampleData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendFilter;
class UScriptStruct* FBlendFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BlendFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendFilter>()
{
	return FBlendFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendFilter",
		sizeof(FBlendFilter),
		alignof(FBlendFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendFilter.InnerSingleton, Z_Construct_UScriptStruct_FBlendFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition;
class UScriptStruct* FMarkerSyncAnimPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MarkerSyncAnimPosition"));
	}
	return Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMarkerSyncAnimPosition>()
{
	return FMarkerSyncAnimPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousMarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextMarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBetweenMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionBetweenMarkers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represent a current play position in an animation\n//based on sync markers\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Represent a current play position in an animation\nbased on sync markers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerSyncAnimPosition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "/** The marker we have passed*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The marker we have passed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName = { "PreviousMarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMarkerSyncAnimPosition, PreviousMarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "/** The marker we are heading towards */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The marker we are heading towards" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName = { "NextMarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMarkerSyncAnimPosition, NextMarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "/** Value between 0 and 1 representing where we are:\n\x09""0   we are at PreviousMarker\n\x09""1   we are at NextMarker\n\x09""0.5 we are half way between the two */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Value between 0 and 1 representing where we are:\n      0   we are at PreviousMarker\n      1   we are at NextMarker\n      0.5 we are half way between the two" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers = { "PositionBetweenMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMarkerSyncAnimPosition, PositionBetweenMarkers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MarkerSyncAnimPosition",
		sizeof(FMarkerSyncAnimPosition),
		alignof(FMarkerSyncAnimPosition),
		Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.InnerSingleton, Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimTickRecord;
class UScriptStruct* FAnimTickRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimTickRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimTickRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTickRecord, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimTickRecord"));
	}
	return Z_Registration_Info_UScriptStruct_AnimTickRecord.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimTickRecord>()
{
	return FAnimTickRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimTickRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Information about an animation asset that needs to be ticked\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Information about an animation asset that needs to be ticked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTickRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimTickRecord, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimTickRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimTickRecord",
		sizeof(FAnimTickRecord),
		alignof(FAnimTickRecord),
		Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimTickRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimTickRecord.InnerSingleton, Z_Construct_UScriptStruct_FAnimTickRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimTickRecord.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimGroupRole;
	static UEnum* EAnimGroupRole_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimGroupRole, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimGroupRole"));
		}
		return Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimGroupRole::Type>()
	{
		return EAnimGroupRole_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimGroupRole_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enumerators[] = {
		{ "EAnimGroupRole::CanBeLeader", (int64)EAnimGroupRole::CanBeLeader },
		{ "EAnimGroupRole::AlwaysFollower", (int64)EAnimGroupRole::AlwaysFollower },
		{ "EAnimGroupRole::AlwaysLeader", (int64)EAnimGroupRole::AlwaysLeader },
		{ "EAnimGroupRole::TransitionLeader", (int64)EAnimGroupRole::TransitionLeader },
		{ "EAnimGroupRole::TransitionFollower", (int64)EAnimGroupRole::TransitionFollower },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysFollower.Comment", "/** This node will always be a follower (unless there are only followers, in which case the first one ticked wins). */" },
		{ "AlwaysFollower.Name", "EAnimGroupRole::AlwaysFollower" },
		{ "AlwaysFollower.ToolTip", "This node will always be a follower (unless there are only followers, in which case the first one ticked wins)." },
		{ "AlwaysLeader.Comment", "/** This node will always be a leader (if more than one node is AlwaysLeader, the last one ticked wins). */" },
		{ "AlwaysLeader.Name", "EAnimGroupRole::AlwaysLeader" },
		{ "AlwaysLeader.ToolTip", "This node will always be a leader (if more than one node is AlwaysLeader, the last one ticked wins)." },
		{ "CanBeLeader.Comment", "/** This node can be the leader, as long as it has a higher blend weight than the previous best leader. */" },
		{ "CanBeLeader.Name", "EAnimGroupRole::CanBeLeader" },
		{ "CanBeLeader.ToolTip", "This node can be the leader, as long as it has a higher blend weight than the previous best leader." },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "TransitionFollower.Comment", "/** This node will be excluded from the sync group while blending in. Once blended in it will be a follower until blended out*/" },
		{ "TransitionFollower.Name", "EAnimGroupRole::TransitionFollower" },
		{ "TransitionFollower.ToolTip", "This node will be excluded from the sync group while blending in. Once blended in it will be a follower until blended out" },
		{ "TransitionLeader.Comment", "/** This node will be excluded from the sync group while blending in. Once blended in it will be the sync group leader until blended out*/" },
		{ "TransitionLeader.Name", "EAnimGroupRole::TransitionLeader" },
		{ "TransitionLeader.ToolTip", "This node will be excluded from the sync group while blending in. Once blended in it will be the sync group leader until blended out" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimGroupRole",
		"EAnimGroupRole::Type",
		Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole()
	{
		if (!Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton, Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimSyncGroupScope;
	static UEnum* EAnimSyncGroupScope_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncGroupScope, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimSyncGroupScope"));
		}
		return Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimSyncGroupScope>()
	{
		return EAnimSyncGroupScope_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enumerators[] = {
		{ "EAnimSyncGroupScope::Local", (int64)EAnimSyncGroupScope::Local },
		{ "EAnimSyncGroupScope::Component", (int64)EAnimSyncGroupScope::Component },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Deprecated - do not use\n" },
		{ "Component.Comment", "// Sync with all animations in the main and linked instances of this skeletal mesh component\n" },
		{ "Component.Name", "EAnimSyncGroupScope::Component" },
		{ "Component.ToolTip", "Sync with all animations in the main and linked instances of this skeletal mesh component" },
		{ "Local.Comment", "// Sync only with animations in the current instance (either main or linked instance)\n" },
		{ "Local.Name", "EAnimSyncGroupScope::Local" },
		{ "Local.ToolTip", "Sync only with animations in the current instance (either main or linked instance)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Deprecated - do not use" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimSyncGroupScope",
		"EAnimSyncGroupScope",
		Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimSyncGroupScope()
	{
		if (!Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton, Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimSyncMethod;
	static UEnum* EAnimSyncMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimSyncMethod"));
		}
		return Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimSyncMethod>()
	{
		return EAnimSyncMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enumerators[] = {
		{ "EAnimSyncMethod::DoNotSync", (int64)EAnimSyncMethod::DoNotSync },
		{ "EAnimSyncMethod::SyncGroup", (int64)EAnimSyncMethod::SyncGroup },
		{ "EAnimSyncMethod::Graph", (int64)EAnimSyncMethod::Graph },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// How an asset will synchronize with other assets\n" },
		{ "DoNotSync.Comment", "// Don't sync ever\n" },
		{ "DoNotSync.Name", "EAnimSyncMethod::DoNotSync" },
		{ "DoNotSync.ToolTip", "Don't sync ever" },
		{ "Graph.Comment", "// Use the graph structure to provide a sync group to apply\n" },
		{ "Graph.Name", "EAnimSyncMethod::Graph" },
		{ "Graph.ToolTip", "Use the graph structure to provide a sync group to apply" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "SyncGroup.Comment", "// Use a named sync group\n" },
		{ "SyncGroup.Name", "EAnimSyncMethod::SyncGroup" },
		{ "SyncGroup.ToolTip", "Use a named sync group" },
		{ "ToolTip", "How an asset will synchronize with other assets" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimSyncMethod",
		"EAnimSyncMethod",
		Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod()
	{
		if (!Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGroupInstance;
class UScriptStruct* FAnimGroupInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGroupInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGroupInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInstance"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGroupInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGroupInstance>()
{
	return FAnimGroupInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimGroupInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInstance>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimGroupInstance",
		sizeof(FAnimGroupInstance),
		alignof(FAnimGroupInstance),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimGroupInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGroupInstance.InnerSingleton, Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimGroupInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionMovementParams;
class UScriptStruct* FRootMotionMovementParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionMovementParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionMovementParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionMovementParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionMovementParams"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionMovementParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionMovementParams>()
{
	return FRootMotionMovementParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Utility struct to accumulate root motion. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Utility struct to accumulate root motion." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionMovementParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((FRootMotionMovementParams*)Obj)->bHasRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRootMotionMovementParams), &Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootMotionMovementParams, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform = { "RootMotionTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootMotionMovementParams, RootMotionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionMovementParams",
		sizeof(FRootMotionMovementParams),
		alignof(FRootMotionMovementParams),
		Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams()
	{
		if (!Z_Registration_Info_UScriptStruct_RootMotionMovementParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionMovementParams.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RootMotionMovementParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationGroupReference;
class UScriptStruct* FAnimationGroupReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationGroupReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationGroupReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationGroupReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationGroupReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationGroupReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationGroupReference>()
{
	return FAnimationGroupReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationGroupReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationGroupReference>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// How an asset will synchronize with other assets\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "How an asset will synchronize with other assets" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationGroupReference, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_MetaData)) }; // 2704058953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The name of the group\n" },
		{ "EditCondition", "Method == EAnimSyncMethod::SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The name of the group" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationGroupReference, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The type of membership in the group (potential leader, always follower, etc...)\n" },
		{ "EditCondition", "Method == EAnimSyncMethod::SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The type of membership in the group (potential leader, always follower, etc...)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationGroupReference, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationGroupReference",
		sizeof(FAnimationGroupReference),
		alignof(FAnimationGroupReference),
		Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationGroupReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationGroupReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationGroupReference.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationAsset::execGetPlayLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayLength();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimationAsset::execSetPreviewSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewSkeletalMesh(Z_Param_PreviewMesh);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimationAsset::StaticRegisterNativesUAnimationAsset()
	{
		UClass* Class = UAnimationAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayLength", &UAnimationAsset::execGetPlayLength },
#if WITH_EDITOR
			{ "SetPreviewSkeletalMesh", &UAnimationAsset::execSetPreviewSkeletalMesh },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics
	{
		struct AnimationAsset_eventGetPlayLength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAsset_eventGetPlayLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAsset, nullptr, "GetPlayLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::AnimationAsset_eventGetPlayLength_Parms), Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAsset_GetPlayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics
	{
		struct AnimationAsset_eventSetPreviewSkeletalMesh_Parms
		{
			USkeletalMesh* PreviewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAsset_eventSetPreviewSkeletalMesh_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::NewProp_PreviewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Sets or updates the preview skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Sets or updates the preview skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAsset, nullptr, "SetPreviewSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::AnimationAsset_eventSetPreviewSkeletalMesh_Parms), Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationAsset);
	UClass* Z_Construct_UClass_UAnimationAsset_NoRegister()
	{
		return UAnimationAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentAsset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildrenAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetMappingTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetMappingTable;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPoseAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewPoseAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationAsset_GetPlayLength, "GetPlayLength" }, // 2076822412
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh, "SetPreviewSkeletalMesh" }, // 640733158
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimationAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Pointer to the Skeleton this asset can be played on .\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Pointer to the Skeleton this asset can be played on ." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0044010000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0044008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Parent Asset, if set, you won't be able to edit any data in here but just mapping table\n\x09 * \n\x09 * During cooking, this data will be used to bake out to normal asset */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Parent Asset, if set, you won't be able to edit any data in here but just mapping table\n\nDuring cooking, this data will be used to bake out to normal asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset = { "ParentAsset", nullptr, (EPropertyFlags)0x0014010800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, ParentAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_Inner = { "ChildrenAssets", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_MetaData[] = {
		{ "Comment", "/**\n\x09 * note this is transient as they're added as they're loaded\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "note this is transient as they're added as they're loaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets = { "ChildrenAssets", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, ChildrenAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Asset mapping table when ParentAsset is set */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Asset mapping table when ParentAsset is set" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable = { "AssetMappingTable", nullptr, (EPropertyFlags)0x0024080800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, AssetMappingTable), Z_Construct_UClass_UAssetMappingTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/// @todo: note that this doesn't retarget right now\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset// @todo: note that this doesn't retarget right now" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset = { "PreviewPoseAsset", nullptr, (EPropertyFlags)0x0014000800200001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, PreviewPoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimationAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UAnimationAsset, IInterface_AssetUserData), false },  // 1283872964
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimationAsset, IInterface_PreviewMeshProvider), false },  // 3026411520
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationAsset_Statics::ClassParams = {
		&UAnimationAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationAsset()
	{
		if (!Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton, Z_Construct_UClass_UAnimationAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimationAsset>()
	{
		return UAnimationAsset::StaticClass();
	}
	UAnimationAsset::UAnimationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationAsset);
	UAnimationAsset::~UAnimationAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::EnumInfo[] = {
		{ EAnimGroupRole_StaticEnum, TEXT("EAnimGroupRole"), &Z_Registration_Info_UEnum_EAnimGroupRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1300806665U) },
		{ EAnimSyncGroupScope_StaticEnum, TEXT("EAnimSyncGroupScope"), &Z_Registration_Info_UEnum_EAnimSyncGroupScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1193155952U) },
		{ EAnimSyncMethod_StaticEnum, TEXT("EAnimSyncMethod"), &Z_Registration_Info_UEnum_EAnimSyncMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2704058953U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ScriptStructInfo[] = {
		{ FBlendSampleData::StaticStruct, Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewStructOps, TEXT("BlendSampleData"), &Z_Registration_Info_UScriptStruct_BlendSampleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSampleData), 916317404U) },
		{ FBlendFilter::StaticStruct, Z_Construct_UScriptStruct_FBlendFilter_Statics::NewStructOps, TEXT("BlendFilter"), &Z_Registration_Info_UScriptStruct_BlendFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendFilter), 4061893421U) },
		{ FMarkerSyncAnimPosition::StaticStruct, Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewStructOps, TEXT("MarkerSyncAnimPosition"), &Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarkerSyncAnimPosition), 2184714248U) },
		{ FAnimTickRecord::StaticStruct, Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewStructOps, TEXT("AnimTickRecord"), &Z_Registration_Info_UScriptStruct_AnimTickRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimTickRecord), 1261441088U) },
		{ FAnimGroupInstance::StaticStruct, Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::NewStructOps, TEXT("AnimGroupInstance"), &Z_Registration_Info_UScriptStruct_AnimGroupInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGroupInstance), 1650582018U) },
		{ FRootMotionMovementParams::StaticStruct, Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewStructOps, TEXT("RootMotionMovementParams"), &Z_Registration_Info_UScriptStruct_RootMotionMovementParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionMovementParams), 3125160171U) },
		{ FAnimationGroupReference::StaticStruct, Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewStructOps, TEXT("AnimationGroupReference"), &Z_Registration_Info_UScriptStruct_AnimationGroupReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationGroupReference), 1803352179U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationAsset, UAnimationAsset::StaticClass, TEXT("UAnimationAsset"), &Z_Registration_Info_UClass_UAnimationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationAsset), 2568976687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_3919657094(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
