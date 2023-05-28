// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluators/MassComponentHitEvaluator.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassComponentHitEvaluator() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassComponentHitEvaluator();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData;
class UScriptStruct* FMassComponentHitEvaluatorInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassComponentHitEvaluatorInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassComponentHitEvaluatorInstanceData>()
{
	return FMassComponentHitEvaluatorInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGotHit_MetaData[];
#endif
		static void NewProp_bGotHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGotHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHitEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastHitEntity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluator to extract last hit from the MassComponentHitSubsystem and expose it for tasks and transitions\n */" },
		{ "ModuleRelativePath", "Public/Evaluators/MassComponentHitEvaluator.h" },
		{ "ToolTip", "Evaluator to extract last hit from the MassComponentHitSubsystem and expose it for tasks and transitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassComponentHitEvaluatorInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Evaluators/MassComponentHitEvaluator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit_SetBit(void* Obj)
	{
		((FMassComponentHitEvaluatorInstanceData*)Obj)->bGotHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit = { "bGotHit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassComponentHitEvaluatorInstanceData), &Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_LastHitEntity_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Evaluators/MassComponentHitEvaluator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_LastHitEntity = { "LastHitEntity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassComponentHitEvaluatorInstanceData, LastHitEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_LastHitEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_LastHitEntity_MetaData)) }; // 2284468209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_bGotHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewProp_LastHitEntity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassComponentHitEvaluatorInstanceData",
		sizeof(FMassComponentHitEvaluatorInstanceData),
		alignof(FMassComponentHitEvaluatorInstanceData),
		Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassComponentHitEvaluator>() == std::is_polymorphic<FMassStateTreeEvaluatorBase>(), "USTRUCT FMassComponentHitEvaluator cannot be polymorphic unless super FMassStateTreeEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator;
class UScriptStruct* FMassComponentHitEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassComponentHitEvaluator, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassComponentHitEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassComponentHitEvaluator>()
{
	return FMassComponentHitEvaluator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Mass ComponentHit Eval" },
		{ "ModuleRelativePath", "Public/Evaluators/MassComponentHitEvaluator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassComponentHitEvaluator>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase,
		&NewStructOps,
		"MassComponentHitEvaluator",
		sizeof(FMassComponentHitEvaluator),
		alignof(FMassComponentHitEvaluator),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassComponentHitEvaluator()
	{
		if (!Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassComponentHitEvaluator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassComponentHitEvaluator_h_Statics::ScriptStructInfo[] = {
		{ FMassComponentHitEvaluatorInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassComponentHitEvaluatorInstanceData_Statics::NewStructOps, TEXT("MassComponentHitEvaluatorInstanceData"), &Z_Registration_Info_UScriptStruct_MassComponentHitEvaluatorInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassComponentHitEvaluatorInstanceData), 3927179944U) },
		{ FMassComponentHitEvaluator::StaticStruct, Z_Construct_UScriptStruct_FMassComponentHitEvaluator_Statics::NewStructOps, TEXT("MassComponentHitEvaluator"), &Z_Registration_Info_UScriptStruct_MassComponentHitEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassComponentHitEvaluator), 2173584655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassComponentHitEvaluator_h_4271675617(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassComponentHitEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Evaluators_MassComponentHitEvaluator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
