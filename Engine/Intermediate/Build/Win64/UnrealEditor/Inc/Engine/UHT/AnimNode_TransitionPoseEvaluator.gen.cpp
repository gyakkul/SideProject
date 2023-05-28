// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_TransitionPoseEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionPoseEvaluator() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEvaluatorDataSource();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEvaluatorMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluatorDataSource;
	static UEnum* EEvaluatorDataSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorDataSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEvaluatorDataSource"));
		}
		return Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEvaluatorDataSource::Type>()
	{
		return EEvaluatorDataSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::Enumerators[] = {
		{ "EEvaluatorDataSource::EDS_SourcePose", (int64)EEvaluatorDataSource::EDS_SourcePose },
		{ "EEvaluatorDataSource::EDS_DestinationPose", (int64)EEvaluatorDataSource::EDS_DestinationPose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Indicates which state is being evaluated by this node (source or destination). */" },
		{ "EDS_DestinationPose.DisplayName", "Destination Pose" },
		{ "EDS_DestinationPose.Name", "EEvaluatorDataSource::EDS_DestinationPose" },
		{ "EDS_SourcePose.DisplayName", "Source Pose" },
		{ "EDS_SourcePose.Name", "EEvaluatorDataSource::EDS_SourcePose" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "ToolTip", "Indicates which state is being evaluated by this node (source or destination)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EEvaluatorDataSource",
		"EEvaluatorDataSource::Type",
		Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EEvaluatorDataSource()
	{
		if (!Z_Registration_Info_UEnum_EEvaluatorDataSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluatorDataSource.InnerSingleton, Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvaluatorDataSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluatorMode;
	static UEnum* EEvaluatorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEvaluatorMode"));
		}
		return Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEvaluatorMode::Mode>()
	{
		return EEvaluatorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EEvaluatorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::Enumerators[] = {
		{ "EEvaluatorMode::EM_Standard", (int64)EEvaluatorMode::EM_Standard },
		{ "EEvaluatorMode::EM_Freeze", (int64)EEvaluatorMode::EM_Freeze },
		{ "EEvaluatorMode::EM_DelayedFreeze", (int64)EEvaluatorMode::EM_DelayedFreeze },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines the behavior this node will use when updating and evaluating. */" },
		{ "EM_DelayedFreeze.Comment", "/** DataSource is ticked and evaluated for a given number of frames, then freezes after and uses the cached pose for future frames. */" },
		{ "EM_DelayedFreeze.DisplayName", "Delayed Freeze" },
		{ "EM_DelayedFreeze.Name", "EEvaluatorMode::EM_DelayedFreeze" },
		{ "EM_DelayedFreeze.ToolTip", "DataSource is ticked and evaluated for a given number of frames, then freezes after and uses the cached pose for future frames." },
		{ "EM_Freeze.Comment", "/** DataSource is never ticked and only evaluated on the first frame. Every frame after uses the cached pose from the first frame. */" },
		{ "EM_Freeze.DisplayName", "Freeze" },
		{ "EM_Freeze.Name", "EEvaluatorMode::EM_Freeze" },
		{ "EM_Freeze.ToolTip", "DataSource is never ticked and only evaluated on the first frame. Every frame after uses the cached pose from the first frame." },
		{ "EM_Standard.Comment", "/** DataSource is ticked and evaluated every frame. */" },
		{ "EM_Standard.DisplayName", "Standard" },
		{ "EM_Standard.Name", "EEvaluatorMode::EM_Standard" },
		{ "EM_Standard.ToolTip", "DataSource is ticked and evaluated every frame." },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "ToolTip", "Determines the behavior this node will use when updating and evaluating." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EEvaluatorMode",
		"EEvaluatorMode::Mode",
		Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EEvaluatorMode()
	{
		if (!Z_Registration_Info_UEnum_EEvaluatorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluatorMode.InnerSingleton, Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvaluatorMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_TransitionPoseEvaluator>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_TransitionPoseEvaluator cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator;
class UScriptStruct* FAnimNode_TransitionPoseEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_TransitionPoseEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_TransitionPoseEvaluator>()
{
	return FAnimNode_TransitionPoseEvaluator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesToCachePose_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToCachePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluatorMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Animation data node for state machine transitions.\n * Can be set to supply either the animation data from the transition source (From State) or the transition destination (To State).\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "ToolTip", "Animation data node for state machine transitions.\nCan be set to supply either the animation data from the transition source (From State) or the transition destination (To State)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TransitionPoseEvaluator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose_MetaData[] = {
		{ "Category", "Pose" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "NeverAsPin", "" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose = { "FramesToCachePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_TransitionPoseEvaluator, FramesToCachePose), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_TransitionPoseEvaluator, DataSource), Z_Construct_UEnum_Engine_EEvaluatorDataSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource_MetaData)) }; // 2973417227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode = { "EvaluatorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_TransitionPoseEvaluator, EvaluatorMode), Z_Construct_UEnum_Engine_EEvaluatorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode_MetaData)) }; // 772143781
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_TransitionPoseEvaluator",
		sizeof(FAnimNode_TransitionPoseEvaluator),
		alignof(FAnimNode_TransitionPoseEvaluator),
		Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics::EnumInfo[] = {
		{ EEvaluatorDataSource_StaticEnum, TEXT("EEvaluatorDataSource"), &Z_Registration_Info_UEnum_EEvaluatorDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2973417227U) },
		{ EEvaluatorMode_StaticEnum, TEXT("EEvaluatorMode"), &Z_Registration_Info_UEnum_EEvaluatorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 772143781U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_TransitionPoseEvaluator::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewStructOps, TEXT("AnimNode_TransitionPoseEvaluator"), &Z_Registration_Info_UScriptStruct_AnimNode_TransitionPoseEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TransitionPoseEvaluator), 2840155375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_1944658827(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
