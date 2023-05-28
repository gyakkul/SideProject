// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionSendSlotEventTask.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionSendSlotEventTask() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData;
class UScriptStruct* FGameplayInteractionSendSlotEventTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSendSlotEventTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSendSlotEventTaskInstanceData>()
{
	return FGameplayInteractionSendSlotEventTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSendSlotEventTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSendSlotEventTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The slot to send the event to. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSendSlotEventTask.h" },
		{ "ToolTip", "The slot to send the event to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSendSlotEventTaskInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewProp_TargetSlot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewProp_TargetSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionSendSlotEventTaskInstanceData",
		sizeof(FGameplayInteractionSendSlotEventTaskInstanceData),
		alignof(FGameplayInteractionSendSlotEventTaskInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionSendSlotEventTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionSendSlotEventTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask;
class UScriptStruct* FGameplayInteractionSendSlotEventTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSendSlotEventTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSendSlotEventTask>()
{
	return FGameplayInteractionSendSlotEventTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Trigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to send event to a specified Smart Object Slot based on the tasks lifetime. \n */" },
		{ "DisplayName", "Send Slot Event" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSendSlotEventTask.h" },
		{ "ToolTip", "Task to send event to a specified Smart Object Slot based on the tasks lifetime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSendSlotEventTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_EventTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tag of the event to send. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSendSlotEventTask.h" },
		{ "ToolTip", "Tag of the event to send." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSendSlotEventTask, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_EventTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Payload of the event to send. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSendSlotEventTask.h" },
		{ "ToolTip", "Payload of the event to send." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSendSlotEventTask, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Payload_MetaData)) }; // 3026308664
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Specifies under which conditions to send the event. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSendSlotEventTask.h" },
		{ "ToolTip", "Specifies under which conditions to send the event." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSendSlotEventTask, Trigger), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger_MetaData)) }; // 632723220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewProp_Trigger,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionSendSlotEventTask",
		sizeof(FGameplayInteractionSendSlotEventTask),
		alignof(FGameplayInteractionSendSlotEventTask),
		Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSendSlotEventTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSendSlotEventTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionSendSlotEventTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTaskInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionSendSlotEventTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSendSlotEventTaskInstanceData), 3465926917U) },
		{ FGameplayInteractionSendSlotEventTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSendSlotEventTask_Statics::NewStructOps, TEXT("GameplayInteractionSendSlotEventTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSendSlotEventTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSendSlotEventTask), 1583524558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSendSlotEventTask_h_4022907933(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSendSlotEventTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSendSlotEventTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
