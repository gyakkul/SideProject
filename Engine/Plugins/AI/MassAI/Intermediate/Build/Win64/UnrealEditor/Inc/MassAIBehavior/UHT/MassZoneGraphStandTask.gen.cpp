// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassZoneGraphStandTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphStandTask() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphStandTask();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData;
class UScriptStruct* FMassZoneGraphStandTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphStandTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphStandTaskInstanceData>()
{
	return FMassZoneGraphStandTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stop, and stand on current ZoneGraph location\n */" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphStandTask.h" },
		{ "ToolTip", "Stop, and stand on current ZoneGraph location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphStandTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Delay before the task ends. Default (0 or any negative) will run indefinitely so it requires a transition in the state tree to stop it. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphStandTask.h" },
		{ "ToolTip", "Delay before the task ends. Default (0 or any negative) will run indefinitely so it requires a transition in the state tree to stop it." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphStandTaskInstanceData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphStandTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphStandTaskInstanceData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassZoneGraphStandTaskInstanceData",
		sizeof(FMassZoneGraphStandTaskInstanceData),
		alignof(FMassZoneGraphStandTaskInstanceData),
		Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphStandTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassZoneGraphStandTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask;
class UScriptStruct* FMassZoneGraphStandTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphStandTask, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphStandTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphStandTask>()
{
	return FMassZoneGraphStandTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZG Stand" },
		{ "ModuleRelativePath", "Public/Tasks/MassZoneGraphStandTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphStandTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassZoneGraphStandTask",
		sizeof(FMassZoneGraphStandTask),
		alignof(FMassZoneGraphStandTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphStandTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphStandTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphStandTask_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphStandTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphStandTaskInstanceData_Statics::NewStructOps, TEXT("MassZoneGraphStandTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassZoneGraphStandTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphStandTaskInstanceData), 3731556280U) },
		{ FMassZoneGraphStandTask::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphStandTask_Statics::NewStructOps, TEXT("MassZoneGraphStandTask"), &Z_Registration_Info_UScriptStruct_MassZoneGraphStandTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphStandTask), 2721209715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphStandTask_h_382741795(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphStandTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassZoneGraphStandTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
