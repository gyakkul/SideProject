// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluators/MassZoneGraphAnnotationEvaluator.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphAnnotationEvaluator() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData;
class UScriptStruct* FMassZoneGraphAnnotationEvaluatorInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphAnnotationEvaluatorInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphAnnotationEvaluatorInstanceData>()
{
	return FMassZoneGraphAnnotationEvaluatorInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnotationTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnnotationTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluator to expose ZoneGraph Annotation Tags for decision making.\n */" },
		{ "ModuleRelativePath", "Public/Evaluators/MassZoneGraphAnnotationEvaluator.h" },
		{ "ToolTip", "Evaluator to expose ZoneGraph Annotation Tags for decision making." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphAnnotationEvaluatorInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewProp_AnnotationTags_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Evaluators/MassZoneGraphAnnotationEvaluator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewProp_AnnotationTags = { "AnnotationTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphAnnotationEvaluatorInstanceData, AnnotationTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewProp_AnnotationTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewProp_AnnotationTags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewProp_AnnotationTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassZoneGraphAnnotationEvaluatorInstanceData",
		sizeof(FMassZoneGraphAnnotationEvaluatorInstanceData),
		alignof(FMassZoneGraphAnnotationEvaluatorInstanceData),
		Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphAnnotationEvaluator>() == std::is_polymorphic<FMassStateTreeEvaluatorBase>(), "USTRUCT FMassZoneGraphAnnotationEvaluator cannot be polymorphic unless super FMassStateTreeEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator;
class UScriptStruct* FMassZoneGraphAnnotationEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphAnnotationEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphAnnotationEvaluator>()
{
	return FMassZoneGraphAnnotationEvaluator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZG Annotation Tags" },
		{ "ModuleRelativePath", "Public/Evaluators/MassZoneGraphAnnotationEvaluator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphAnnotationEvaluator>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase,
		&NewStructOps,
		"MassZoneGraphAnnotationEvaluator",
		sizeof(FMassZoneGraphAnnotationEvaluator),
		alignof(FMassZoneGraphAnnotationEvaluator),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassZoneGraphAnnotationEvaluator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassZoneGraphAnnotationEvaluator_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphAnnotationEvaluatorInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluatorInstanceData_Statics::NewStructOps, TEXT("MassZoneGraphAnnotationEvaluatorInstanceData"), &Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluatorInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphAnnotationEvaluatorInstanceData), 1043170782U) },
		{ FMassZoneGraphAnnotationEvaluator::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationEvaluator_Statics::NewStructOps, TEXT("MassZoneGraphAnnotationEvaluator"), &Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphAnnotationEvaluator), 2130377833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassZoneGraphAnnotationEvaluator_h_3290365018(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassZoneGraphAnnotationEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassZoneGraphAnnotationEvaluator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
