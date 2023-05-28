// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionSetSlotEnabledTask.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionSetSlotEnabledTask() {}
// Cross Module References
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData;
class UScriptStruct* FGameplayInteractionSetSlotEnabledInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSetSlotEnabledInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSetSlotEnabledInstanceData>()
{
	return FGameplayInteractionSetSlotEnabledInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialState_MetaData[];
#endif
		static void NewProp_bInitialState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSetSlotEnabledTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSetSlotEnabledInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Target slot whose tags are modified. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSetSlotEnabledTask.h" },
		{ "ToolTip", "Target slot whose tags are modified." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSetSlotEnabledInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_TargetSlot_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState_MetaData[] = {
		{ "Comment", "/** When using OnEnterStateUndoOnExitState, indicates initial enabled state to be restored on ExitState(). */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSetSlotEnabledTask.h" },
		{ "ToolTip", "When using OnEnterStateUndoOnExitState, indicates initial enabled state to be restored on ExitState()." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState_SetBit(void* Obj)
	{
		((FGameplayInteractionSetSlotEnabledInstanceData*)Obj)->bInitialState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState = { "bInitialState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionSetSlotEnabledInstanceData), &Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_TargetSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewProp_bInitialState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionSetSlotEnabledInstanceData",
		sizeof(FGameplayInteractionSetSlotEnabledInstanceData),
		alignof(FGameplayInteractionSetSlotEnabledInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionSetSlotEnabledTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionSetSlotEnabledTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask;
class UScriptStruct* FGameplayInteractionSetSlotEnabledTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionSetSlotEnabledTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionSetSlotEnabledTask>()
{
	return FGameplayInteractionSetSlotEnabledTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Modify_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modify_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Modify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSlot_MetaData[];
#endif
		static void NewProp_bEnableSlot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to set a Smart Object Slot enabled to disabled.\n * The slot can be enabled or disable for the duration of the task (OnEnterStateUndoOnExitState),\n * or permanently at the beginning or end of the state.\n */" },
		{ "DisplayName", "Set Slot Enabled" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSetSlotEnabledTask.h" },
		{ "ToolTip", "Task to set a Smart Object Slot enabled to disabled.\nThe slot can be enabled or disable for the duration of the task (OnEnterStateUndoOnExitState),\nor permanently at the beginning or end of the state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionSetSlotEnabledTask>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** When to modify the tags. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSetSlotEnabledTask.h" },
		{ "ToolTip", "When to modify the tags." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify = { "Modify", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionSetSlotEnabledTask, Modify), Z_Construct_UEnum_GameplayInteractionsModule_EGameplayInteractionTaskModify, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify_MetaData)) }; // 1475098485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Whether to enable or disable the slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionSetSlotEnabledTask.h" },
		{ "ToolTip", "Whether to enable or disable the slot." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot_SetBit(void* Obj)
	{
		((FGameplayInteractionSetSlotEnabledTask*)Obj)->bEnableSlot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot = { "bEnableSlot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionSetSlotEnabledTask), &Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_Modify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewProp_bEnableSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionSetSlotEnabledTask",
		sizeof(FGameplayInteractionSetSlotEnabledTask),
		alignof(FGameplayInteractionSetSlotEnabledTask),
		Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSetSlotEnabledTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSetSlotEnabledTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionSetSlotEnabledInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionSetSlotEnabledInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSetSlotEnabledInstanceData), 1037373448U) },
		{ FGameplayInteractionSetSlotEnabledTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionSetSlotEnabledTask_Statics::NewStructOps, TEXT("GameplayInteractionSetSlotEnabledTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionSetSlotEnabledTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionSetSlotEnabledTask), 2425682494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSetSlotEnabledTask_h_839777681(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSetSlotEnabledTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSetSlotEnabledTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
