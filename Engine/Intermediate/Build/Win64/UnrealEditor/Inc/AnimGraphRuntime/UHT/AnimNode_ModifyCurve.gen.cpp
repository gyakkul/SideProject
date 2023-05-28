// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_ModifyCurve.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyCurve() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifyCurveApplyMode;
	static UEnum* EModifyCurveApplyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModifyCurveApplyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModifyCurveApplyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EModifyCurveApplyMode"));
		}
		return Z_Registration_Info_UEnum_EModifyCurveApplyMode.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EModifyCurveApplyMode>()
	{
		return EModifyCurveApplyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enumerators[] = {
		{ "EModifyCurveApplyMode::Add", (int64)EModifyCurveApplyMode::Add },
		{ "EModifyCurveApplyMode::Scale", (int64)EModifyCurveApplyMode::Scale },
		{ "EModifyCurveApplyMode::Blend", (int64)EModifyCurveApplyMode::Blend },
		{ "EModifyCurveApplyMode::WeightedMovingAverage", (int64)EModifyCurveApplyMode::WeightedMovingAverage },
		{ "EModifyCurveApplyMode::RemapCurve", (int64)EModifyCurveApplyMode::RemapCurve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Comment", "/** Add new value to input curve value */" },
		{ "Add.Name", "EModifyCurveApplyMode::Add" },
		{ "Add.ToolTip", "Add new value to input curve value" },
		{ "Blend.Comment", "/** Blend input with new curve value, using Alpha setting on the node */" },
		{ "Blend.Name", "EModifyCurveApplyMode::Blend" },
		{ "Blend.ToolTip", "Blend input with new curve value, using Alpha setting on the node" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "RemapCurve.Comment", "/** Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02) */" },
		{ "RemapCurve.Name", "EModifyCurveApplyMode::RemapCurve" },
		{ "RemapCurve.ToolTip", "Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02)" },
		{ "Scale.Comment", "/** Scale input value by new value */" },
		{ "Scale.Name", "EModifyCurveApplyMode::Scale" },
		{ "Scale.ToolTip", "Scale input value by new value" },
		{ "WeightedMovingAverage.Comment", "/** Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower) */" },
		{ "WeightedMovingAverage.Name", "EModifyCurveApplyMode::WeightedMovingAverage" },
		{ "WeightedMovingAverage.ToolTip", "Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EModifyCurveApplyMode",
		"EModifyCurveApplyMode",
		Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode()
	{
		if (!Z_Registration_Info_UEnum_EModifyCurveApplyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifyCurveApplyMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModifyCurveApplyMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ModifyCurve>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ModifyCurve cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve;
class UScriptStruct* FAnimNode_ModifyCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyCurve"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ModifyCurve>()
{
	return FAnimNode_ModifyCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_ValueProp = { "CurveMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_Key_KeyProp = { "CurveMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap = { "CurveMap", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_Inner = { "CurveValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues = { "CurveValues", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, ApplyMode), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_MetaData)) }; // 2878797211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ModifyCurve",
		sizeof(FAnimNode_ModifyCurve),
		alignof(FAnimNode_ModifyCurve),
		Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::EnumInfo[] = {
		{ EModifyCurveApplyMode_StaticEnum, TEXT("EModifyCurveApplyMode"), &Z_Registration_Info_UEnum_EModifyCurveApplyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2878797211U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ModifyCurve::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewStructOps, TEXT("AnimNode_ModifyCurve"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyCurve), 1839597080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_1877053667(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
