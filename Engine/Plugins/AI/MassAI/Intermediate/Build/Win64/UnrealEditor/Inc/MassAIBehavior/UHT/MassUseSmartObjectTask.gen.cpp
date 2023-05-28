// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassUseSmartObjectTask.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassUseSmartObjectTask() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassUseSmartObjectTask();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData;
class UScriptStruct* FMassUseSmartObjectTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassUseSmartObjectTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassUseSmartObjectTaskInstanceData>()
{
	return FMassUseSmartObjectTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimedSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimedSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Task to tell an entity to start using a claimed smart object.\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassUseSmartObjectTask.h" },
		{ "ToolTip", "Task to tell an entity to start using a claimed smart object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassUseSmartObjectTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Tasks/MassUseSmartObjectTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot = { "ClaimedSlot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassUseSmartObjectTaskInstanceData, ClaimedSlot), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot_MetaData)) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewProp_ClaimedSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassUseSmartObjectTaskInstanceData",
		sizeof(FMassUseSmartObjectTaskInstanceData),
		alignof(FMassUseSmartObjectTaskInstanceData),
		Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassUseSmartObjectTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassUseSmartObjectTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask;
class UScriptStruct* FMassUseSmartObjectTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassUseSmartObjectTask, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassUseSmartObjectTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassUseSmartObjectTask>()
{
	return FMassUseSmartObjectTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Mass Use SmartObject Task" },
		{ "ModuleRelativePath", "Public/Tasks/MassUseSmartObjectTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassUseSmartObjectTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassUseSmartObjectTask",
		sizeof(FMassUseSmartObjectTask),
		alignof(FMassUseSmartObjectTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassUseSmartObjectTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask.InnerSingleton, Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassUseSmartObjectTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassUseSmartObjectTask_h_Statics::ScriptStructInfo[] = {
		{ FMassUseSmartObjectTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassUseSmartObjectTaskInstanceData_Statics::NewStructOps, TEXT("MassUseSmartObjectTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassUseSmartObjectTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassUseSmartObjectTaskInstanceData), 1501251465U) },
		{ FMassUseSmartObjectTask::StaticStruct, Z_Construct_UScriptStruct_FMassUseSmartObjectTask_Statics::NewStructOps, TEXT("MassUseSmartObjectTask"), &Z_Registration_Info_UScriptStruct_MassUseSmartObjectTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassUseSmartObjectTask), 2158024048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassUseSmartObjectTask_h_3416628721(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassUseSmartObjectTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassUseSmartObjectTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
