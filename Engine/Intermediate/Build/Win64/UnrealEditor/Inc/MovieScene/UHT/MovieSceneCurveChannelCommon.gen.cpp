// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneCurveChannelCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCurveChannelCommon() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTangentData;
class UScriptStruct* FMovieSceneTangentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTangentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTangentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTangentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTangentData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTangentData>()
{
	return FMovieSceneTangentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tangents for curve channel control points.\n */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCurveChannelCommon.h" },
		{ "ToolTip", "Tangents for curve channel control points." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** If RCIM_Cubic, the arriving tangent at this key */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCurveChannelCommon.h" },
		{ "ToolTip", "If RCIM_Cubic, the arriving tangent at this key" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, ArriveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** If RCIM_Cubic, the leaving tangent at this key */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCurveChannelCommon.h" },
		{ "ToolTip", "If RCIM_Cubic, the leaving tangent at this key" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, LeaveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCurveChannelCommon.h" },
		{ "ToolTip", "If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, ArriveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCurveChannelCommon.h" },
		{ "ToolTip", "If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, LeaveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** If RCIM_Cubic, the tangent weight mode */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCurveChannelCommon.h" },
		{ "ToolTip", "If RCIM_Cubic, the tangent weight mode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode_MetaData)) }; // 3709203772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTangentData",
		sizeof(FMovieSceneTangentData),
		alignof(FMovieSceneTangentData),
		Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTangentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTangentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTangentData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTangentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewStructOps, TEXT("MovieSceneTangentData"), &Z_Registration_Info_UScriptStruct_MovieSceneTangentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTangentData), 300005167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h_4154736974(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneCurveChannelCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
