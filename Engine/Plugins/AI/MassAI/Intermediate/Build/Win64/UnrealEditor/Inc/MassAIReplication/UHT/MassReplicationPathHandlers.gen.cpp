// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassAI/Source/MassAIReplication/Public/MassReplicationPathHandlers.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationTypes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassCommonTypes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationPathHandlers() {}
// Cross Module References
	MASSAIREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPathData();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Real();
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphShortPathRequest();
	UPackage* Z_Construct_UPackage__Script_MassAIReplication();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData;
class UScriptStruct* FReplicatedAgentPathData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedAgentPathData, (UObject*)Z_Construct_UPackage__Script_MassAIReplication(), TEXT("ReplicatedAgentPathData"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData.OuterSingleton;
}
template<> MASSAIREPLICATION_API UScriptStruct* StaticStruct<FReplicatedAgentPathData>()
{
	return FReplicatedAgentPathData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionServerStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ActionServerStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongLane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongLane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ActionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * To replicate path following make a member variable of this class in your FReplicatedAgentBase derived class. In the FReplicatedAgentBase derived class you must also provide an accessor function\n * FReplicatedAgentPathData& GetReplicatedPathDataMutable().\n */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "To replicate path following make a member variable of this class in your FReplicatedAgentBase derived class. In the FReplicatedAgentBase derived class you must also provide an accessor function\nFReplicatedAgentPathData& GetReplicatedPathDataMutable()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedAgentPathData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_PathRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_PathRequest = { "PathRequest", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, PathRequest), Z_Construct_UScriptStruct_FZoneGraphShortPathRequest, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_PathRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_PathRequest_MetaData)) }; // 391483634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneHandle_MetaData[] = {
		{ "Comment", "/** Handle to current lane. */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "Handle to current lane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneHandle = { "LaneHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, LaneHandle), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneHandle_MetaData)) }; // 439458847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionServerStartTime_MetaData[] = {
		{ "Comment", "/** Server time in seconds when the action started. */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "Server time in seconds when the action started." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionServerStartTime = { "ActionServerStartTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, ActionServerStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionServerStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionServerStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DistanceAlongLane_MetaData[] = {
		{ "Comment", "/** Distance along current lane. */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "Distance along current lane." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DistanceAlongLane = { "DistanceAlongLane", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, DistanceAlongLane), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DistanceAlongLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DistanceAlongLane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneLength_MetaData[] = {
		{ "Comment", "/** Cached lane length, used for clamping and testing if at end of lane. */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "Cached lane length, used for clamping and testing if at end of lane." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneLength = { "LaneLength", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, LaneLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DesiredSpeed_MetaData[] = {
		{ "Comment", "/** Requested movement speed. */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "Requested movement speed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DesiredSpeed = { "DesiredSpeed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, DesiredSpeed), Z_Construct_UScriptStruct_FMassInt16Real, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DesiredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DesiredSpeed_MetaData)) }; // 272813750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, ActionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action_MetaData[] = {
		{ "Comment", "/** Current movement action. */" },
		{ "ModuleRelativePath", "Public/MassReplicationPathHandlers.h" },
		{ "ToolTip", "Current movement action." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPathData, Action), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action_MetaData)) }; // 4189626115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_PathRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionServerStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DistanceAlongLane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_LaneLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_DesiredSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_ActionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewProp_Action,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIReplication,
		nullptr,
		&NewStructOps,
		"ReplicatedAgentPathData",
		sizeof(FReplicatedAgentPathData),
		alignof(FReplicatedAgentPathData),
		Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPathData()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIReplication_Public_MassReplicationPathHandlers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIReplication_Public_MassReplicationPathHandlers_h_Statics::ScriptStructInfo[] = {
		{ FReplicatedAgentPathData::StaticStruct, Z_Construct_UScriptStruct_FReplicatedAgentPathData_Statics::NewStructOps, TEXT("ReplicatedAgentPathData"), &Z_Registration_Info_UScriptStruct_ReplicatedAgentPathData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedAgentPathData), 290335078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIReplication_Public_MassReplicationPathHandlers_h_2442061750(TEXT("/Script/MassAIReplication"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIReplication_Public_MassReplicationPathHandlers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIReplication_Public_MassReplicationPathHandlers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
