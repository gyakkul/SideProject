// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationTransformHandlers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationTransformHandlers() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData;
class UScriptStruct* FReplicatedAgentPositionYawData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("ReplicatedAgentPositionYawData"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FReplicatedAgentPositionYawData>()
{
	return FReplicatedAgentPositionYawData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * To replicate position and yaw make a member variable of this class in your FReplicatedAgentBase derived class. In the FReplicatedAgentBase derived class you must also provide an accessor function\n * FReplicatedAgentPathData& GetReplicatedPositionYawDataMutable().\n */" },
		{ "ModuleRelativePath", "Public/MassReplicationTransformHandlers.h" },
		{ "ToolTip", "To replicate position and yaw make a member variable of this class in your FReplicatedAgentBase derived class. In the FReplicatedAgentBase derived class you must also provide an accessor function\nFReplicatedAgentPathData& GetReplicatedPositionYawDataMutable()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedAgentPositionYawData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationTransformHandlers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPositionYawData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Yaw_MetaData[] = {
		{ "Comment", "/** Yaw in radians */" },
		{ "ModuleRelativePath", "Public/MassReplicationTransformHandlers.h" },
		{ "ToolTip", "Yaw in radians" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentPositionYawData, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Yaw_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewProp_Yaw,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		nullptr,
		&NewStructOps,
		"ReplicatedAgentPositionYawData",
		sizeof(FReplicatedAgentPositionYawData),
		alignof(FReplicatedAgentPositionYawData),
		Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTransformHandlers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTransformHandlers_h_Statics::ScriptStructInfo[] = {
		{ FReplicatedAgentPositionYawData::StaticStruct, Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData_Statics::NewStructOps, TEXT("ReplicatedAgentPositionYawData"), &Z_Registration_Info_UScriptStruct_ReplicatedAgentPositionYawData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedAgentPositionYawData), 1897896353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTransformHandlers_h_1476473622(TEXT("/Script/MassReplication"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTransformHandlers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTransformHandlers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
