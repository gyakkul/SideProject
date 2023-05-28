// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionListenSlotEventsTask.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionListenSlotEventsTask() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData;
class UScriptStruct* FGameplayInteractionListenSlotEventsTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionListenSlotEventsTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionListenSlotEventsTaskInstanceData>()
{
	return FGameplayInteractionListenSlotEventsTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionListenSlotEventsTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionListenSlotEventsTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionListenSlotEventsTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionListenSlotEventsTaskInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewProp_TargetSlot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewProp_TargetSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionListenSlotEventsTaskInstanceData",
		sizeof(FGameplayInteractionListenSlotEventsTaskInstanceData),
		alignof(FGameplayInteractionListenSlotEventsTaskInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionListenSlotEventsTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionListenSlotEventsTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask;
class UScriptStruct* FGameplayInteractionListenSlotEventsTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionListenSlotEventsTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionListenSlotEventsTask>()
{
	return FGameplayInteractionListenSlotEventsTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to listen Smart Object slot events on a specified slot.\n * Any event sent to the specified Smart Object slot will be translated to a State Tree event.\n */" },
		{ "DisplayName", "Listen Slot Events" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionListenSlotEventsTask.h" },
		{ "ToolTip", "Task to listen Smart Object slot events on a specified slot.\nAny event sent to the specified Smart Object slot will be translated to a State Tree event." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionListenSlotEventsTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionListenSlotEventsTask",
		sizeof(FGameplayInteractionListenSlotEventsTask),
		alignof(FGameplayInteractionListenSlotEventsTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionListenSlotEventsTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionListenSlotEventsTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionListenSlotEventsTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTaskInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionListenSlotEventsTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionListenSlotEventsTaskInstanceData), 3304472284U) },
		{ FGameplayInteractionListenSlotEventsTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionListenSlotEventsTask_Statics::NewStructOps, TEXT("GameplayInteractionListenSlotEventsTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionListenSlotEventsTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionListenSlotEventsTask), 2943686148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionListenSlotEventsTask_h_2382801233(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionListenSlotEventsTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionListenSlotEventsTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
