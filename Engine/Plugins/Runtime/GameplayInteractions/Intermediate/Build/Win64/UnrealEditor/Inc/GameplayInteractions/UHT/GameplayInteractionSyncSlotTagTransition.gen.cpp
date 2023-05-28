// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionSyncSlotTagTransition.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionSyncSlotTagTransition() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState;
	static UEnum* EGameplayInteractionSyncSlotTransitionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayInteractionSyncSlotTransitionState"));
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionSyncSlotTransitionState>()
	{
		return EGameplayInteractionSyncSlotTransitionState_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::Enumerators[] = {
		{ "EGameplayInteractionSyncSlotTransitionState::WaitingForFromTag", (int64)EGameplayInteractionSyncSlotTransitionState::WaitingForFromTag },
		{ "EGameplayInteractionSyncSlotTransitionState::WaitingForToTag", (int64)EGameplayInteractionSyncSlotTransitionState::WaitingForToTag },
		{ "EGameplayInteractionSyncSlotTransitionState::Completed", (int64)EGameplayInteractionSyncSlotTransitionState::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::Enum_MetaDataParams[] = {
		{ "Completed.Name", "EGameplayInteractionSyncSlotTransitionState::Completed" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
		{ "WaitingForFromTag.Name", "EGameplayInteractionSyncSlotTransitionState::WaitingForFromTag" },
		{ "WaitingForToTag.Name", "EGameplayInteractionSyncSlotTransitionState::WaitingForToTag" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayInteractionSyncSlotTransitionState",
		"EGameplayInteractionSyncSlotTransitionState",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState()
	{
		if (!Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionSyncSlotTransitionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData;
class UScriptStruct* FGameplayInteractionSyncSlotTagTransitionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSyncSlotTagTransitionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSyncSlotTagTransitionInstanceData>()
{
	return FGameplayInteractionSyncSlotTagTransitionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSyncSlotTagTransitionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The target slot to monitor */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
		{ "ToolTip", "The target slot to monitor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagTransitionInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewProp_TargetSlot_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewProp_TargetSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionSyncSlotTagTransitionInstanceData",
		sizeof(FGameplayInteractionSyncSlotTagTransitionInstanceData),
		alignof(FGameplayInteractionSyncSlotTagTransitionInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionSyncSlotTagTransitionTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionSyncSlotTagTransitionTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask;
class UScriptStruct* FGameplayInteractionSyncSlotTagTransitionTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSyncSlotTagTransitionTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSyncSlotTagTransitionTask>()
{
	return FGameplayInteractionSyncSlotTagTransitionTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionFromTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionFromTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionToTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionToTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionEventTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to monitor transition of a Gameplay Tag on the specified Smart Object slot.\n *\n * First the task will wait until it sees TransitionFromTag tag on the target Smart Object slot.\n * - TransitionEventTag event is sent to the target slot, which is assumed to trigger a transition to a state that sets TransitionToTag on the Smart Object slot.\n *\n * Then the task will wait until it sees TransitionToTag tag on the target Smart Object slot.\n * - TransitionEventTag event is sent to running State Tree, which allows the running State Tree to transition a new state that is now executed in sync with the other tree.\n */" },
		{ "DisplayName", "Sync Slot Tag Transition" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
		{ "ToolTip", "Task to monitor transition of a Gameplay Tag on the specified Smart Object slot.\n\nFirst the task will wait until it sees TransitionFromTag tag on the target Smart Object slot.\n- TransitionEventTag event is sent to the target slot, which is assumed to trigger a transition to a state that sets TransitionToTag on the Smart Object slot.\n\nThen the task will wait until it sees TransitionToTag tag on the target Smart Object slot.\n- TransitionEventTag event is sent to running State Tree, which allows the running State Tree to transition a new state that is now executed in sync with the other tree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSyncSlotTagTransitionTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionFromTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tag to monitor to see if the slot is ready to transition. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
		{ "ToolTip", "Tag to monitor to see if the slot is ready to transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionFromTag = { "TransitionFromTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagTransitionTask, TransitionFromTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionFromTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionFromTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionToTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tag to monitor to see if the slot has transitioned. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
		{ "ToolTip", "Tag to monitor to see if the slot has transitioned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionToTag = { "TransitionToTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagTransitionTask, TransitionToTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionToTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionToTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionEventTag_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Event that is sent to target slot when TransitionFromTag is seen, and event that is send to running State Tree when TransitionToTag is seen. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSyncSlotTagTransition.h" },
		{ "ToolTip", "Event that is sent to target slot when TransitionFromTag is seen, and event that is send to running State Tree when TransitionToTag is seen." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionEventTag = { "TransitionEventTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSyncSlotTagTransitionTask, TransitionEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionEventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionEventTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionFromTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionToTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewProp_TransitionEventTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionSyncSlotTagTransitionTask",
		sizeof(FGameplayInteractionSyncSlotTagTransitionTask),
		alignof(FGameplayInteractionSyncSlotTagTransitionTask),
		Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics::EnumInfo[] = {
		{ EGameplayInteractionSyncSlotTransitionState_StaticEnum, TEXT("EGameplayInteractionSyncSlotTransitionState"), &Z_Registration_Info_UEnum_EGameplayInteractionSyncSlotTransitionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3890600616U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionSyncSlotTagTransitionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionSyncSlotTagTransitionInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSyncSlotTagTransitionInstanceData), 1186839499U) },
		{ FGameplayInteractionSyncSlotTagTransitionTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics::NewStructOps, TEXT("GameplayInteractionSyncSlotTagTransitionTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSyncSlotTagTransitionTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSyncSlotTagTransitionTask), 3374039423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_925050867(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
