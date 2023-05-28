// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStateTreeTypes() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References

static_assert(std::is_polymorphic<FMassStateTreeEvaluatorBase>() == std::is_polymorphic<FStateTreeEvaluatorBase>(), "USTRUCT FMassStateTreeEvaluatorBase cannot be polymorphic unless super FStateTreeEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase;
class UScriptStruct* FMassStateTreeEvaluatorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassStateTreeEvaluatorBase"));
	}
	return Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassStateTreeEvaluatorBase>()
{
	return FMassStateTreeEvaluatorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all Mass StateTree Evaluators.\n */" },
		{ "DisplayName", "Mass Evaluator Base" },
		{ "ModuleRelativePath", "Public/MassStateTreeTypes.h" },
		{ "ToolTip", "Base struct for all Mass StateTree Evaluators." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStateTreeEvaluatorBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,
		&NewStructOps,
		"MassStateTreeEvaluatorBase",
		sizeof(FMassStateTreeEvaluatorBase),
		alignof(FMassStateTreeEvaluatorBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase.InnerSingleton, Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassStateTreeTaskBase>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FMassStateTreeTaskBase cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase;
class UScriptStruct* FMassStateTreeTaskBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStateTreeTaskBase, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassStateTreeTaskBase"));
	}
	return Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassStateTreeTaskBase>()
{
	return FMassStateTreeTaskBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all Mass StateTree Tasks.\n */" },
		{ "DisplayName", "Mass Task Base" },
		{ "ModuleRelativePath", "Public/MassStateTreeTypes.h" },
		{ "ToolTip", "Base struct for all Mass StateTree Tasks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStateTreeTaskBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"MassStateTreeTaskBase",
		sizeof(FMassStateTreeTaskBase),
		alignof(FMassStateTreeTaskBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase.InnerSingleton, Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassStateTreeEvaluatorBase::StaticStruct, Z_Construct_UScriptStruct_FMassStateTreeEvaluatorBase_Statics::NewStructOps, TEXT("MassStateTreeEvaluatorBase"), &Z_Registration_Info_UScriptStruct_MassStateTreeEvaluatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStateTreeEvaluatorBase), 2446910553U) },
		{ FMassStateTreeTaskBase::StaticStruct, Z_Construct_UScriptStruct_FMassStateTreeTaskBase_Statics::NewStructOps, TEXT("MassStateTreeTaskBase"), &Z_Registration_Info_UScriptStruct_MassStateTreeTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStateTreeTaskBase), 1799425194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTypes_h_1105925167(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
