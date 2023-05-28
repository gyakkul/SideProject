// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tasks/StateTreeDelayTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeDelayTask() {}
// Cross Module References
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTask();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskCommonBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData;
class UScriptStruct* FStateTreeDelayTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDelayTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDelayTaskInstanceData>()
{
	return FStateTreeDelayTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunForever_MetaData[];
#endif
		static void NewProp_bRunForever_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunForever;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDelayTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Delay before the task ends. */" },
		{ "EditCondition", "!bRunForever" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "Delay before the task ends." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeDelayTaskInstanceData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Adds random range to the Duration. */" },
		{ "EditCondition", "!bRunForever" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "Adds random range to the Duration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeDelayTaskInstanceData, RandomDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If true the task will run forever until a transition stops it. */" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "If true the task will run forever until a transition stops it." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_SetBit(void* Obj)
	{
		((FStateTreeDelayTaskInstanceData*)Obj)->bRunForever = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever = { "bRunForever", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStateTreeDelayTaskInstanceData), &Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_RandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewProp_bRunForever,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeDelayTaskInstanceData",
		sizeof(FStateTreeDelayTaskInstanceData),
		alignof(FStateTreeDelayTaskInstanceData),
		Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeDelayTask>() == std::is_polymorphic<FStateTreeTaskCommonBase>(), "USTRUCT FStateTreeDelayTask cannot be polymorphic unless super FStateTreeTaskCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeDelayTask;
class UScriptStruct* FStateTreeDelayTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeDelayTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDelayTask, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeDelayTask"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeDelayTask.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeDelayTask>()
{
	return FStateTreeDelayTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple task to wait indefinitely or for a given time (in seconds) before succeeding.\n */" },
		{ "DisplayName", "Delay Task" },
		{ "ModuleRelativePath", "Private/Tasks/StateTreeDelayTask.h" },
		{ "ToolTip", "Simple task to wait indefinitely or for a given time (in seconds) before succeeding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeDelayTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeTaskCommonBase,
		&NewStructOps,
		"StateTreeDelayTask",
		sizeof(FStateTreeDelayTask),
		alignof(FStateTreeDelayTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeDelayTask()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeDelayTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeDelayTask.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeDelayTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeDelayTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDelayTaskInstanceData_Statics::NewStructOps, TEXT("StateTreeDelayTaskInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeDelayTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDelayTaskInstanceData), 2907867669U) },
		{ FStateTreeDelayTask::StaticStruct, Z_Construct_UScriptStruct_FStateTreeDelayTask_Statics::NewStructOps, TEXT("StateTreeDelayTask"), &Z_Registration_Info_UScriptStruct_StateTreeDelayTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeDelayTask), 1953855864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_2863655976(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Private_Tasks_StateTreeDelayTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
