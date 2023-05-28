// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/Tasks/MassCrowdClaimWaitSlotTask.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "Tasks/MassZoneGraphPathFollowTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdClaimWaitSlotTask() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData;
class UScriptStruct* FMassCrowdClaimWaitSlotTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdClaimWaitSlotTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdClaimWaitSlotTaskInstanceData>()
{
	return FMassCrowdClaimWaitSlotTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitSlotLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaitSlotLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitingSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcquiredLane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AcquiredLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Claim wait slot and expose slot position for path follow.\n*/" },
		{ "ModuleRelativePath", "Public/Tasks/MassCrowdClaimWaitSlotTask.h" },
		{ "ToolTip", "Claim wait slot and expose slot position for path follow." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdClaimWaitSlotTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitSlotLocation_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/Tasks/MassCrowdClaimWaitSlotTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitSlotLocation = { "WaitSlotLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassCrowdClaimWaitSlotTaskInstanceData, WaitSlotLocation), Z_Construct_UScriptStruct_FMassZoneGraphTargetLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitSlotLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitSlotLocation_MetaData)) }; // 774941347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitingSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/MassCrowdClaimWaitSlotTask.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitingSlotIndex = { "WaitingSlotIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassCrowdClaimWaitSlotTaskInstanceData, WaitingSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitingSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitingSlotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_AcquiredLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/MassCrowdClaimWaitSlotTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_AcquiredLane = { "AcquiredLane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassCrowdClaimWaitSlotTaskInstanceData, AcquiredLane), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_AcquiredLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_AcquiredLane_MetaData)) }; // 439458847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitSlotLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_WaitingSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewProp_AcquiredLane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"MassCrowdClaimWaitSlotTaskInstanceData",
		sizeof(FMassCrowdClaimWaitSlotTaskInstanceData),
		alignof(FMassCrowdClaimWaitSlotTaskInstanceData),
		Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassCrowdClaimWaitSlotTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassCrowdClaimWaitSlotTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask;
class UScriptStruct* FMassCrowdClaimWaitSlotTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("MassCrowdClaimWaitSlotTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FMassCrowdClaimWaitSlotTask>()
{
	return FMassCrowdClaimWaitSlotTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Crowd Claim Wait Slot" },
		{ "ModuleRelativePath", "Public/Tasks/MassCrowdClaimWaitSlotTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCrowdClaimWaitSlotTask>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassCrowdClaimWaitSlotTask",
		sizeof(FMassCrowdClaimWaitSlotTask),
		alignof(FMassCrowdClaimWaitSlotTask),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask.InnerSingleton, Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassCrowdClaimWaitSlotTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassCrowdClaimWaitSlotTask_h_Statics::ScriptStructInfo[] = {
		{ FMassCrowdClaimWaitSlotTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTaskInstanceData_Statics::NewStructOps, TEXT("MassCrowdClaimWaitSlotTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdClaimWaitSlotTaskInstanceData), 3963295342U) },
		{ FMassCrowdClaimWaitSlotTask::StaticStruct, Z_Construct_UScriptStruct_FMassCrowdClaimWaitSlotTask_Statics::NewStructOps, TEXT("MassCrowdClaimWaitSlotTask"), &Z_Registration_Info_UScriptStruct_MassCrowdClaimWaitSlotTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCrowdClaimWaitSlotTask), 3545161097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassCrowdClaimWaitSlotTask_h_4278844717(TEXT("/Script/MassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassCrowdClaimWaitSlotTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_Tasks_MassCrowdClaimWaitSlotTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
