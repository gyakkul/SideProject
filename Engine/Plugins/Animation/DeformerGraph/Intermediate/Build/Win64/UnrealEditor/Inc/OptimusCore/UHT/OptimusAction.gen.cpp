// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Actions/OptimusAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusAction() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusCompoundAction();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAction;
class UScriptStruct* FOptimusAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAction>()
{
	return FOptimusAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Base action class. This is a UStruct so that we can use UE's RAII to check for type\n// similarity.\n" },
		{ "ModuleRelativePath", "Private/Actions/OptimusAction.h" },
		{ "ToolTip", "Base action class. This is a UStruct so that we can use UE's RAII to check for type\nsimilarity." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusAction",
		sizeof(FOptimusAction),
		alignof(FOptimusAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusCompoundAction>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusCompoundAction cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusCompoundAction;
class UScriptStruct* FOptimusCompoundAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusCompoundAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusCompoundAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusCompoundAction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusCompoundAction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusCompoundAction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusCompoundAction>()
{
	return FOptimusCompoundAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusCompoundAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusCompoundAction",
		sizeof(FOptimusCompoundAction),
		alignof(FOptimusCompoundAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusCompoundAction()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusCompoundAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusCompoundAction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusCompoundAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics::ScriptStructInfo[] = {
		{ FOptimusAction::StaticStruct, Z_Construct_UScriptStruct_FOptimusAction_Statics::NewStructOps, TEXT("OptimusAction"), &Z_Registration_Info_UScriptStruct_OptimusAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAction), 111309550U) },
		{ FOptimusCompoundAction::StaticStruct, Z_Construct_UScriptStruct_FOptimusCompoundAction_Statics::NewStructOps, TEXT("OptimusCompoundAction"), &Z_Registration_Info_UScriptStruct_OptimusCompoundAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusCompoundAction), 3911863859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_1014180646(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
