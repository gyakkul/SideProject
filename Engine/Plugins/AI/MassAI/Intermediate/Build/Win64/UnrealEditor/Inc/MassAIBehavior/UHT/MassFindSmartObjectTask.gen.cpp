// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/MassFindSmartObjectTask.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectRequest.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassFindSmartObjectTask() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassFindSmartObjectTask();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectRequestID();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData;
class UScriptStruct* FMassFindSmartObjectTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassFindSmartObjectTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassFindSmartObjectTaskInstanceData>()
{
	return FMassFindSmartObjectTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoundCandidateSlots_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundCandidateSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCandidateSlots_MetaData[];
#endif
		static void NewProp_bHasCandidateSlots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCandidateSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRequestID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchRequestID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NextUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassFindSmartObjectTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_FoundCandidateSlots_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Result of the candidates search request */" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "Result of the candidates search request" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_FoundCandidateSlots = { "FoundCandidateSlots", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassFindSmartObjectTaskInstanceData, FoundCandidateSlots), Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_FoundCandidateSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_FoundCandidateSlots_MetaData)) }; // 1054470490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// @todo: Should turn this in a StateTree result/value.\n" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "@todo: Should turn this in a StateTree result/value." },
	};
#endif
	void Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots_SetBit(void* Obj)
	{
		((FMassFindSmartObjectTaskInstanceData*)Obj)->bHasCandidateSlots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots = { "bHasCandidateSlots", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassFindSmartObjectTaskInstanceData), &Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_SearchRequestID_MetaData[] = {
		{ "Comment", "/** The identifier of the search request send by the task to find candidates */" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "The identifier of the search request send by the task to find candidates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_SearchRequestID = { "SearchRequestID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassFindSmartObjectTaskInstanceData, SearchRequestID), Z_Construct_UScriptStruct_FMassSmartObjectRequestID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_SearchRequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_SearchRequestID_MetaData)) }; // 262356520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_NextUpdate_MetaData[] = {
		{ "Comment", "/** Next update time; task will not do anything when Tick gets called before that time */" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "Next update time; task will not do anything when Tick gets called before that time" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_NextUpdate = { "NextUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassFindSmartObjectTaskInstanceData, NextUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_NextUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_NextUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_LastLane_MetaData[] = {
		{ "Comment", "/** Last lane where the smart objects were searched. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "Last lane where the smart objects were searched." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_LastLane = { "LastLane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassFindSmartObjectTaskInstanceData, LastLane), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_LastLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_LastLane_MetaData)) }; // 439458847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_FoundCandidateSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_bHasCandidateSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_SearchRequestID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_NextUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewProp_LastLane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassFindSmartObjectTaskInstanceData",
		sizeof(FMassFindSmartObjectTaskInstanceData),
		alignof(FMassFindSmartObjectTaskInstanceData),
		Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassFindSmartObjectTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassFindSmartObjectTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask;
class UScriptStruct* FMassFindSmartObjectTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassFindSmartObjectTask, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassFindSmartObjectTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassFindSmartObjectTask>()
{
	return FMassFindSmartObjectTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Find Smart Object" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassFindSmartObjectTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_ActivityRequirements_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Gameplay tag query for finding matching smart objects. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "Gameplay tag query for finding matching smart objects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_ActivityRequirements = { "ActivityRequirements", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassFindSmartObjectTask, ActivityRequirements), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_ActivityRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_ActivityRequirements_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_SearchInterval_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** How frequently to search for new candidates. */" },
		{ "ModuleRelativePath", "Public/Tasks/MassFindSmartObjectTask.h" },
		{ "ToolTip", "How frequently to search for new candidates." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_SearchInterval = { "SearchInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassFindSmartObjectTask, SearchInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_SearchInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_SearchInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_ActivityRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewProp_SearchInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassFindSmartObjectTask",
		sizeof(FMassFindSmartObjectTask),
		alignof(FMassFindSmartObjectTask),
		Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassFindSmartObjectTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask.InnerSingleton, Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassFindSmartObjectTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassFindSmartObjectTask_h_Statics::ScriptStructInfo[] = {
		{ FMassFindSmartObjectTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassFindSmartObjectTaskInstanceData_Statics::NewStructOps, TEXT("MassFindSmartObjectTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassFindSmartObjectTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassFindSmartObjectTaskInstanceData), 26139177U) },
		{ FMassFindSmartObjectTask::StaticStruct, Z_Construct_UScriptStruct_FMassFindSmartObjectTask_Statics::NewStructOps, TEXT("MassFindSmartObjectTask"), &Z_Registration_Info_UScriptStruct_MassFindSmartObjectTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassFindSmartObjectTask), 1771139201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassFindSmartObjectTask_h_2819730530(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassFindSmartObjectTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Tasks_MassFindSmartObjectTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
