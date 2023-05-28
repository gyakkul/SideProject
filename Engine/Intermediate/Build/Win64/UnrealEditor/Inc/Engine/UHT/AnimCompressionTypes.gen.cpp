// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimCompressionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompressionTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationErrorStats();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimationKeyFormat;
	static UEnum* AnimationKeyFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationKeyFormat"));
		}
		return Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimationKeyFormat>()
	{
		return AnimationKeyFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enumerators[] = {
		{ "AKF_ConstantKeyLerp", (int64)AKF_ConstantKeyLerp },
		{ "AKF_VariableKeyLerp", (int64)AKF_VariableKeyLerp },
		{ "AKF_PerTrackCompression", (int64)AKF_PerTrackCompression },
		{ "AKF_MAX", (int64)AKF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enum_MetaDataParams[] = {
		{ "AKF_ConstantKeyLerp.Name", "AKF_ConstantKeyLerp" },
		{ "AKF_MAX.Name", "AKF_MAX" },
		{ "AKF_PerTrackCompression.Name", "AKF_PerTrackCompression" },
		{ "AKF_VariableKeyLerp.Name", "AKF_VariableKeyLerp" },
		{ "Comment", "/**\n * Indicates animation data key format.\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "Indicates animation data key format." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"AnimationKeyFormat",
		"AnimationKeyFormat",
		Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat()
	{
		if (!Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton, Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationErrorStats;
class UScriptStruct* FAnimationErrorStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationErrorStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationErrorStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationErrorStats, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationErrorStats"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationErrorStats.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationErrorStats>()
{
	return FAnimationErrorStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationErrorStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A set of error statistics for an animation, gathered by FAnimationUtils::ComputeCompressionError\n*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "A set of error statistics for an animation, gathered by FAnimationUtils::ComputeCompressionError" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationErrorStats>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationErrorStats",
		sizeof(FAnimationErrorStats),
		alignof(FAnimationErrorStats),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationErrorStats()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationErrorStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationErrorStats.InnerSingleton, Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationErrorStats.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::EnumInfo[] = {
		{ AnimationKeyFormat_StaticEnum, TEXT("AnimationKeyFormat"), &Z_Registration_Info_UEnum_AnimationKeyFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1313704727U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::ScriptStructInfo[] = {
		{ FAnimationErrorStats::StaticStruct, Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::NewStructOps, TEXT("AnimationErrorStats"), &Z_Registration_Info_UScriptStruct_AnimationErrorStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationErrorStats), 995827481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_3155430439(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
