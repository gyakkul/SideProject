// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeEvaluatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEvaluatorBase() {}
// Cross Module References
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References

static_assert(std::is_polymorphic<FStateTreeEvaluatorBase>() == std::is_polymorphic<FStateTreeNodeBase>(), "USTRUCT FStateTreeEvaluatorBase cannot be polymorphic unless super FStateTreeNodeBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase;
class UScriptStruct* FStateTreeEvaluatorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvaluatorBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEvaluatorBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEvaluatorBase>()
{
	return FStateTreeEvaluatorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct of StateTree Evaluators.\n * Evaluators calculate and expose data to be used for decision making in a StateTree.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeEvaluatorBase.h" },
		{ "ToolTip", "Base struct of StateTree Evaluators.\nEvaluators calculate and expose data to be used for decision making in a StateTree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEvaluatorBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeNodeBase,
		&NewStructOps,
		"StateTreeEvaluatorBase",
		sizeof(FStateTreeEvaluatorBase),
		alignof(FStateTreeEvaluatorBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeEvaluatorCommonBase>() == std::is_polymorphic<FStateTreeEvaluatorBase>(), "USTRUCT FStateTreeEvaluatorCommonBase cannot be polymorphic unless super FStateTreeEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase;
class UScriptStruct* FStateTreeEvaluatorCommonBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEvaluatorCommonBase"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEvaluatorCommonBase>()
{
	return FStateTreeEvaluatorCommonBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Base class (namespace) for all common Evaluators that are generally applicable.\n* This allows schemas to safely include all Evaluators child of this struct. \n*/" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/StateTreeEvaluatorBase.h" },
		{ "ToolTip", "Base class (namespace) for all common Evaluators that are generally applicable.\nThis allows schemas to safely include all Evaluators child of this struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEvaluatorCommonBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,
		&NewStructOps,
		"StateTreeEvaluatorCommonBase",
		sizeof(FStateTreeEvaluatorCommonBase),
		alignof(FStateTreeEvaluatorCommonBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeEvaluatorBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEvaluatorBase_Statics::NewStructOps, TEXT("StateTreeEvaluatorBase"), &Z_Registration_Info_UScriptStruct_StateTreeEvaluatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEvaluatorBase), 1968787866U) },
		{ FStateTreeEvaluatorCommonBase::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEvaluatorCommonBase_Statics::NewStructOps, TEXT("StateTreeEvaluatorCommonBase"), &Z_Registration_Info_UScriptStruct_StateTreeEvaluatorCommonBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEvaluatorCommonBase), 664416048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_3952655331(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvaluatorBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
