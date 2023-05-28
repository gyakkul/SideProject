// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/MotionTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrajectoryTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySample();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrajectorySample;
class UScriptStruct* FTrajectorySample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrajectorySample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrajectorySample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySample, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TrajectorySample"));
	}
	return Z_Registration_Info_UScriptStruct_TrajectorySample.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTrajectorySample>()
{
	return FTrajectorySample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrajectorySample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrajectorySample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// The relative accumulated time that this sample is associated with\n// Zero value for instantaneous, negative values for the past, and positive values for the future\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "The relative accumulated time that this sample is associated with\nZero value for instantaneous, negative values for the past, and positive values for the future" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds = { "AccumulatedSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrajectorySample, AccumulatedSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Position relative to the sampled in-motion object\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Position relative to the sampled in-motion object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrajectorySample, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Linear velocity relative to the sampled in-motion object\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Linear velocity relative to the sampled in-motion object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrajectorySample, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LinearVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrajectorySample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LinearVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TrajectorySample",
		sizeof(FTrajectorySample),
		alignof(FTrajectorySample),
		Z_Construct_UScriptStruct_FTrajectorySample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySample()
	{
		if (!Z_Registration_Info_UScriptStruct_TrajectorySample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrajectorySample.InnerSingleton, Z_Construct_UScriptStruct_FTrajectorySample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrajectorySample.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrajectorySampleRange;
class UScriptStruct* FTrajectorySampleRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrajectorySampleRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrajectorySampleRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySampleRange, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TrajectorySampleRange"));
	}
	return Z_Registration_Info_UScriptStruct_TrajectorySampleRange.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTrajectorySampleRange>()
{
	return FTrajectorySampleRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// A container of ordered trajectory samples and associated sampling rate\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "A container of ordered trajectory samples and associated sampling rate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrajectorySampleRange>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTrajectorySample, METADATA_PARAMS(nullptr, 0) }; // 2229209792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Linearly ordered container for past, present, and future trajectory samples\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Linearly ordered container for past, present, and future trajectory samples" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrajectorySampleRange, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_MetaData)) }; // 2229209792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TrajectorySampleRange",
		sizeof(FTrajectorySampleRange),
		alignof(FTrajectorySampleRange),
		Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange()
	{
		if (!Z_Registration_Info_UScriptStruct_TrajectorySampleRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrajectorySampleRange.InnerSingleton, Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrajectorySampleRange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::ScriptStructInfo[] = {
		{ FTrajectorySample::StaticStruct, Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewStructOps, TEXT("TrajectorySample"), &Z_Registration_Info_UScriptStruct_TrajectorySample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrajectorySample), 2229209792U) },
		{ FTrajectorySampleRange::StaticStruct, Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewStructOps, TEXT("TrajectorySampleRange"), &Z_Registration_Info_UScriptStruct_TrajectorySampleRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrajectorySampleRange), 4181307663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_4118550139(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
