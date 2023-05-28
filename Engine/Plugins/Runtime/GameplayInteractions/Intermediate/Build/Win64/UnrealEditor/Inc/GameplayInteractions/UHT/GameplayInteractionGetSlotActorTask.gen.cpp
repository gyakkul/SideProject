// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/GameplayInteractionGetSlotActorTask.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayInteractionGetSlotActorTask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData;
class UScriptStruct* FGameplayInteractionGetSlotActorTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionGetSlotActorTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionGetSlotActorTaskInstanceData>()
{
	return FGameplayInteractionGetSlotActorTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResultActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionGetSlotActorTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionGetSlotActorTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Target slot to get the Actor from. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionGetSlotActorTask.h" },
		{ "ToolTip", "Target slot to get the Actor from." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionGetSlotActorTaskInstanceData, TargetSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_TargetSlot_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_ResultActor_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Actor in the specified target slot, or empty if target slot is not valid or there is not Actor present. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionGetSlotActorTask.h" },
		{ "ToolTip", "Actor in the specified target slot, or empty if target slot is not valid or there is not Actor present." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_ResultActor = { "ResultActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayInteractionGetSlotActorTaskInstanceData, ResultActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_ResultActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_ResultActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_TargetSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewProp_ResultActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayInteractionGetSlotActorTaskInstanceData",
		sizeof(FGameplayInteractionGetSlotActorTaskInstanceData),
		alignof(FGameplayInteractionGetSlotActorTaskInstanceData),
		Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayInteractionGetSlotActorTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FGameplayInteractionGetSlotActorTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask;
class UScriptStruct* FGameplayInteractionGetSlotActorTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayInteractionGetSlotActorTask"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayInteractionGetSlotActorTask>()
{
	return FGameplayInteractionGetSlotActorTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFailIfNotFound_MetaData[];
#endif
		static void NewProp_bFailIfNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailIfNotFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Task to get an Actor on a specified Smart Object slot. \n */" },
		{ "DisplayName", "Get Slot Actor" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionGetSlotActorTask.h" },
		{ "ToolTip", "Task to get an Actor on a specified Smart Object slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInteractionGetSlotActorTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If true, and no valid actor is found, the task will fail. */" },
		{ "ModuleRelativePath", "Private/StateTree/GameplayInteractionGetSlotActorTask.h" },
		{ "ToolTip", "If true, and no valid actor is found, the task will fail." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound_SetBit(void* Obj)
	{
		((FGameplayInteractionGetSlotActorTask*)Obj)->bFailIfNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound = { "bFailIfNotFound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayInteractionGetSlotActorTask), &Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewProp_bFailIfNotFound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"GameplayInteractionGetSlotActorTask",
		sizeof(FGameplayInteractionGetSlotActorTask),
		alignof(FGameplayInteractionGetSlotActorTask),
		Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionGetSlotActorTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionGetSlotActorTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayInteractionGetSlotActorTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTaskInstanceData_Statics::NewStructOps, TEXT("GameplayInteractionGetSlotActorTaskInstanceData"), &Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionGetSlotActorTaskInstanceData), 599872399U) },
		{ FGameplayInteractionGetSlotActorTask::StaticStruct, Z_Construct_UScriptStruct_FGameplayInteractionGetSlotActorTask_Statics::NewStructOps, TEXT("GameplayInteractionGetSlotActorTask"), &Z_Registration_Info_UScriptStruct_GameplayInteractionGetSlotActorTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInteractionGetSlotActorTask), 3142052406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionGetSlotActorTask_h_3345174189(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionGetSlotActorTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionGetSlotActorTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
