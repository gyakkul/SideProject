// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchAssetSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchAssetSampler() {}
// Cross Module References
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters;
class UScriptStruct* FPoseSearchExtrapolationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchExtrapolationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchExtrapolationParameters>()
{
	return FPoseSearchExtrapolationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAssetSampler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchExtrapolationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_AngularSpeedThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If the angular root motion speed in degrees is below this value, it will be treated as zero.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAssetSampler.h" },
		{ "ToolTip", "If the angular root motion speed in degrees is below this value, it will be treated as zero." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_AngularSpeedThreshold = { "AngularSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchExtrapolationParameters, AngularSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_AngularSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_AngularSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_LinearSpeedThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If the root motion linear speed is below this value, it will be treated as zero.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAssetSampler.h" },
		{ "ToolTip", "If the root motion linear speed is below this value, it will be treated as zero." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_LinearSpeedThreshold = { "LinearSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchExtrapolationParameters, LinearSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_LinearSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_LinearSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_SampleTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Time from sequence start/end used to extrapolate the trajectory.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAssetSampler.h" },
		{ "ToolTip", "Time from sequence start/end used to extrapolate the trajectory." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_SampleTime = { "SampleTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchExtrapolationParameters, SampleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_SampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_SampleTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_AngularSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_LinearSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewProp_SampleTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchExtrapolationParameters",
		sizeof(FPoseSearchExtrapolationParameters),
		alignof(FPoseSearchExtrapolationParameters),
		Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSampler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSampler_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchExtrapolationParameters::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchExtrapolationParameters_Statics::NewStructOps, TEXT("PoseSearchExtrapolationParameters"), &Z_Registration_Info_UScriptStruct_PoseSearchExtrapolationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchExtrapolationParameters), 3412316363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSampler_h_3555416522(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSampler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSampler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
