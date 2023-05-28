// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassClaimSmartObjectTask.h"
#include "SmartObjectRuntime.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassClaimSmartObjectTask() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassClaimSmartObjectTask();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStructRef();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData;
class UScriptStruct* FMassClaimSmartObjectTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassClaimSmartObjectTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassClaimSmartObjectTaskInstanceData>()
{
	return FMassClaimSmartObjectTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateSlots_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CandidateSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimedSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimedSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tasks to claim a smart object from search results and release it when done.\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassClaimSmartObjectTask.h" },
		{ "ToolTip", "Tasks to claim a smart object from search results and release it when done." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassClaimSmartObjectTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_CandidateSlots_MetaData[] = {
		{ "BaseStruct", "/Script/MassSmartObjects.MassSmartObjectCandidateSlots" },
		{ "Category", "Input" },
		{ "Comment", "/** Result of the candidates search request (Input) */" },
		{ "ModuleRelativePath", "Public/Tasks/MassClaimSmartObjectTask.h" },
		{ "ToolTip", "Result of the candidates search request (Input)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_CandidateSlots = { "CandidateSlots", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClaimSmartObjectTaskInstanceData, CandidateSlots), Z_Construct_UScriptStruct_FStateTreeStructRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_CandidateSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_CandidateSlots_MetaData)) }; // 385890286
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Tasks/MassClaimSmartObjectTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot = { "ClaimedSlot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClaimSmartObjectTaskInstanceData, ClaimedSlot), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot_MetaData)) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_CandidateSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassClaimSmartObjectTaskInstanceData",
		sizeof(FMassClaimSmartObjectTaskInstanceData),
		alignof(FMassClaimSmartObjectTaskInstanceData),
		Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassClaimSmartObjectTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassClaimSmartObjectTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask;
class UScriptStruct* FMassClaimSmartObjectTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassClaimSmartObjectTask, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassClaimSmartObjectTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassClaimSmartObjectTask>()
{
	return FMassClaimSmartObjectTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCooldown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Claim SmartObject" },
		{ "ModuleRelativePath", "Public/Tasks/MassClaimSmartObjectTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassClaimSmartObjectTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewProp_InteractionCooldown_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Delay in seconds before trying to use another smart object */" },
		{ "ModuleRelativePath", "Public/Tasks/MassClaimSmartObjectTask.h" },
		{ "ToolTip", "Delay in seconds before trying to use another smart object" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewProp_InteractionCooldown = { "InteractionCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassClaimSmartObjectTask, InteractionCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewProp_InteractionCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewProp_InteractionCooldown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewProp_InteractionCooldown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassClaimSmartObjectTask",
		sizeof(FMassClaimSmartObjectTask),
		alignof(FMassClaimSmartObjectTask),
		Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassClaimSmartObjectTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask.InnerSingleton, Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassClaimSmartObjectTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassClaimSmartObjectTask_h_Statics::ScriptStructInfo[] = {
		{ FMassClaimSmartObjectTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassClaimSmartObjectTaskInstanceData_Statics::NewStructOps, TEXT("MassClaimSmartObjectTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassClaimSmartObjectTaskInstanceData), 3800401245U) },
		{ FMassClaimSmartObjectTask::StaticStruct, Z_Construct_UScriptStruct_FMassClaimSmartObjectTask_Statics::NewStructOps, TEXT("MassClaimSmartObjectTask"), &Z_Registration_Info_UScriptStruct_MassClaimSmartObjectTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassClaimSmartObjectTask), 4160932936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassClaimSmartObjectTask_h_1430462780(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassClaimSmartObjectTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassClaimSmartObjectTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
