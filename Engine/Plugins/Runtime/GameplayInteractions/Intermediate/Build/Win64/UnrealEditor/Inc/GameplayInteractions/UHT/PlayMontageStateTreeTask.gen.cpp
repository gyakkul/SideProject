// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/PlayMontageStateTreeTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayMontageStateTreeTask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayMontageStateTreeTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData;
class UScriptStruct* FPlayMontageStateTreeTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("PlayMontageStateTreeTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FPlayMontageStateTreeTaskInstanceData>()
{
	return FPlayMontageStateTreeTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputedDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComputedDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/PlayMontageStateTreeTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayMontageStateTreeTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Private/StateTree/PlayMontageStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayMontageStateTreeTaskInstanceData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTree/PlayMontageStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_ComputedDuration = { "ComputedDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayMontageStateTreeTaskInstanceData, ComputedDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Accumulated time used to stop task if a montage is set */" },
		{ "ModuleRelativePath", "Private/StateTree/PlayMontageStateTreeTask.h" },
		{ "ToolTip", "Accumulated time used to stop task if a montage is set" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayMontageStateTreeTaskInstanceData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_ComputedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"PlayMontageStateTreeTaskInstanceData",
		sizeof(FPlayMontageStateTreeTaskInstanceData),
		alignof(FPlayMontageStateTreeTaskInstanceData),
		Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlayMontageStateTreeTask>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FPlayMontageStateTreeTask cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask;
class UScriptStruct* FPlayMontageStateTreeTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayMontageStateTreeTask, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("PlayMontageStateTreeTask"));
	}
	return Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FPlayMontageStateTreeTask>()
{
	return FPlayMontageStateTreeTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions" },
		{ "DisplayName", "Play Anim Montage" },
		{ "ModuleRelativePath", "Private/StateTree/PlayMontageStateTreeTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayMontageStateTreeTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTree/PlayMontageStateTreeTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayMontageStateTreeTask, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewProp_Montage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"PlayMontageStateTreeTask",
		sizeof(FPlayMontageStateTreeTask),
		alignof(FPlayMontageStateTreeTask),
		Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayMontageStateTreeTask()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask.InnerSingleton, Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_PlayMontageStateTreeTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_PlayMontageStateTreeTask_h_Statics::ScriptStructInfo[] = {
		{ FPlayMontageStateTreeTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FPlayMontageStateTreeTaskInstanceData_Statics::NewStructOps, TEXT("PlayMontageStateTreeTaskInstanceData"), &Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayMontageStateTreeTaskInstanceData), 1877151858U) },
		{ FPlayMontageStateTreeTask::StaticStruct, Z_Construct_UScriptStruct_FPlayMontageStateTreeTask_Statics::NewStructOps, TEXT("PlayMontageStateTreeTask"), &Z_Registration_Info_UScriptStruct_PlayMontageStateTreeTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayMontageStateTreeTask), 1704250787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_PlayMontageStateTreeTask_h_579990908(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_PlayMontageStateTreeTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_PlayMontageStateTreeTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
