// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionSyncSlotTagStateTask.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionSyncSlotTagStateTask() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData;
class UScriptStruct* FGameplayInteractionSyncSlotTagStateInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSyncSlotTagStateInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSyncSlotTagStateInstanceData>()
{
	return FGameplayInteractionSyncSlotTagStateInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagStateTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSyncSlotTagStateInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The target slot to monitor */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagStateTask.h" },
		{ "ToolTip", "The target slot to monitor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagStateInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewProp_TargetSlot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewProp_TargetSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionSyncSlotTagStateInstanceData",
		sizeof(FGameplayInteractionSyncSlotTagStateInstanceData),
		alignof(FGameplayInteractionSyncSlotTagStateInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionSyncSlotTagStateTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionSyncSlotTagStateTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask;
class UScriptStruct* FGameplayInteractionSyncSlotTagStateTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSyncSlotTagStateTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSyncSlotTagStateTask>()
{
	return FGameplayInteractionSyncSlotTagStateTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagToMonitor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToMonitor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEventTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to monitor existence of a Gameplay Tag on the specified Smart Object slot.\n * If the monitored Gameplay Tag does not exists on the target slot, or this task completes, a BreakEventTag is sent to the the target slot as well as on the running State Tree.\n * This allows to the task to be used to sync State Tree execution between State Tree instances via a Smart Object slot.\n */" },
		{ "DisplayName", "Sync Slot Tag State" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagStateTask.h" },
		{ "ToolTip", "Task to monitor existence of a Gameplay Tag on the specified Smart Object slot.\nIf the monitored Gameplay Tag does not exists on the target slot, or this task completes, a BreakEventTag is sent to the the target slot as well as on the running State Tree.\nThis allows to the task to be used to sync State Tree execution between State Tree instances via a Smart Object slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSyncSlotTagStateTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_TagToMonitor_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** The tag to monitor on the target slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagStateTask.h" },
		{ "ToolTip", "The tag to monitor on the target slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_TagToMonitor = { "TagToMonitor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagStateTask, TagToMonitor), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_TagToMonitor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_TagToMonitor_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_BreakEventTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Event to send when the monitored tag is not present anymore, or when this task becomes inactive. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagStateTask.h" },
		{ "ToolTip", "Event to send when the monitored tag is not present anymore, or when this task becomes inactive." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_BreakEventTag = { "BreakEventTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagStateTask, BreakEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_BreakEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_BreakEventTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_TagToMonitor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewProp_BreakEventTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionSyncSlotTagStateTask",
		sizeof(FGameplayInteractionSyncSlotTagStateTask),
		alignof(FGameplayInteractionSyncSlotTagStateTask),
		Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagStateTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagStateTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionSyncSlotTagStateInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionSyncSlotTagStateInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSyncSlotTagStateInstanceData), 867276530U) },
		{ FGameplayInteractionSyncSlotTagStateTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagStateTask_Statics::NewStructOps, TEXT("GameplayInteractionSyncSlotTagStateTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagStateTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSyncSlotTagStateTask), 2443833026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagStateTask_h_3700227894(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagStateTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagStateTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
