// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/ContextualAnimStateTreeTask.h"
#include "GameplayInteractionsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimStateTreeTask() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_PlayContextualAnim_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStateTreeTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData;
class UScriptStruct* FContextualAnimStateTreeTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("ContextualAnimStateTreeTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FContextualAnimStateTreeTaskInstanceData>()
{
	return FContextualAnimStateTreeTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContextualAnimAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractableObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractableObjectRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbortContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbortContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FContextualAnimStateTreeTask instance data\n * @see FContextualAnimStateTreeTask\n */" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
		{ "ToolTip", "FContextualAnimStateTreeTask instance data\n@see FContextualAnimStateTreeTask" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimStateTreeTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_ContextualAnimAsset_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_ContextualAnimAsset = { "ContextualAnimAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, ContextualAnimAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_ContextualAnimAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_ContextualAnimAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObject_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObject = { "InteractableObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, InteractableObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Task_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, Task), Z_Construct_UClass_UGameplayTask_PlayContextualAnim_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractorRole_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, InteractorRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractorRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractorRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObjectRole_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObjectRole = { "InteractableObjectRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, InteractableObjectRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObjectRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObjectRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_AbortContext_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_AbortContext = { "AbortContext", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTaskInstanceData, AbortContext), Z_Construct_UScriptStruct_FGameplayInteractionAbortContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_AbortContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_AbortContext_MetaData)) }; // 2210915608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_ContextualAnimAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractorRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_InteractableObjectRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewProp_AbortContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"ContextualAnimStateTreeTaskInstanceData",
		sizeof(FContextualAnimStateTreeTaskInstanceData),
		alignof(FContextualAnimStateTreeTaskInstanceData),
		Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FContextualAnimStateTreeTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FContextualAnimStateTreeTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask;
class UScriptStruct* FContextualAnimStateTreeTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("ContextualAnimStateTreeTask"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FContextualAnimStateTreeTask>()
{
	return FContextualAnimStateTreeTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExitSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions" },
		{ "Comment", "/**\n * Builds context and creates GameplayTask that will control playback of a ContextualAnimScene\n */" },
		{ "DisplayName", "Contextual Anim Task" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
		{ "ToolTip", "Builds context and creates GameplayTask that will control playback of a ContextualAnimScene" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimStateTreeTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTask, Section), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_ExitSection_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_ExitSection = { "ExitSection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimStateTreeTask, ExitSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_ExitSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_ExitSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/ContextualAnimStateTreeTask.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FContextualAnimStateTreeTask*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContextualAnimStateTreeTask), &Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_ExitSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"ContextualAnimStateTreeTask",
		sizeof(FContextualAnimStateTreeTask),
		alignof(FContextualAnimStateTreeTask),
		Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStateTreeTask()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_ContextualAnimStateTreeTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_ContextualAnimStateTreeTask_h_Statics::ScriptStructInfo[] = {
		{ FContextualAnimStateTreeTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimStateTreeTaskInstanceData_Statics::NewStructOps, TEXT("ContextualAnimStateTreeTaskInstanceData"), &Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimStateTreeTaskInstanceData), 1162297156U) },
		{ FContextualAnimStateTreeTask::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimStateTreeTask_Statics::NewStructOps, TEXT("ContextualAnimStateTreeTask"), &Z_Registration_Info_UScriptStruct_ContextualAnimStateTreeTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimStateTreeTask), 186184705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_ContextualAnimStateTreeTask_h_697635154(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_ContextualAnimStateTreeTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_ContextualAnimStateTreeTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
