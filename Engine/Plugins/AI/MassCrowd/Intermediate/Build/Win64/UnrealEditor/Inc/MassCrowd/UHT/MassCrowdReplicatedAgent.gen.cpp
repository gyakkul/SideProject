// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdReplicatedAgent.h"
#include "../../../../Plugins/AI/MassAI/Source/MassAIReplication/Public/MassReplicationPathHandlers.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationTransformHandlers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdReplicatedAgent() {}
// Cross Module References
	MASSAIREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPathData();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdFastArrayItem();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedCrowdAgent();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassFastArrayItemBase();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentBase();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References

static_assert(std::is_polymorphic<FReplicatedCrowdAgent>() == std::is_polymorphic<FReplicatedAgentBase>(), "USTRUCT FReplicatedCrowdAgent cannot be polymorphic unless super FReplicatedAgentBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent;
class UScriptStruct* FReplicatedCrowdAgent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedCrowdAgent, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("ReplicatedCrowdAgent"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FReplicatedCrowdAgent>()
{
	return FReplicatedCrowdAgent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionYaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionYaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The data that is replicated specific to each Crowd agent */" },
		{ "ModuleRelativePath", "Public/MassCrowdReplicatedAgent.h" },
		{ "ToolTip", "The data that is replicated specific to each Crowd agent" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedCrowdAgent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdReplicatedAgent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedCrowdAgent, Path), Z_Construct_UScriptStruct_FReplicatedAgentPathData, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_Path_MetaData)) }; // 290335078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_PositionYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdReplicatedAgent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_PositionYaw = { "PositionYaw", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedCrowdAgent, PositionYaw), Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_PositionYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_PositionYaw_MetaData)) }; // 1897896353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewProp_PositionYaw,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FReplicatedAgentBase,
		&NewStructOps,
		"ReplicatedCrowdAgent",
		sizeof(FReplicatedCrowdAgent),
		alignof(FReplicatedCrowdAgent),
		Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedCrowdAgent()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCrowdFastArrayItem>() == std::is_polymorphic<FMassFastArrayItemBase>(), "USTRUCT FCrowdFastArrayItem cannot be polymorphic unless super FMassFastArrayItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdFastArrayItem;
class UScriptStruct* FCrowdFastArrayItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdFastArrayItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdFastArrayItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdFastArrayItem, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("CrowdFastArrayItem"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdFastArrayItem.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FCrowdFastArrayItem>()
{
	return FCrowdFastArrayItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Agent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Fast array item for efficient agent replication. Remember to make this dirty if any FReplicatedCrowdAgent member variables are modified */" },
		{ "ModuleRelativePath", "Public/MassCrowdReplicatedAgent.h" },
		{ "ToolTip", "Fast array item for efficient agent replication. Remember to make this dirty if any FReplicatedCrowdAgent member variables are modified" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdFastArrayItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewProp_Agent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdReplicatedAgent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCrowdFastArrayItem, Agent), Z_Construct_UScriptStruct_FReplicatedCrowdAgent, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewProp_Agent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewProp_Agent_MetaData)) }; // 2197067849
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewProp_Agent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		Z_Construct_UScriptStruct_FMassFastArrayItemBase,
		&NewStructOps,
		"CrowdFastArrayItem",
		sizeof(FCrowdFastArrayItem),
		alignof(FCrowdFastArrayItem),
		Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdFastArrayItem()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdFastArrayItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdFastArrayItem.InnerSingleton, Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdFastArrayItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicatedAgent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicatedAgent_h_Statics::ScriptStructInfo[] = {
		{ FReplicatedCrowdAgent::StaticStruct, Z_Construct_UScriptStruct_FReplicatedCrowdAgent_Statics::NewStructOps, TEXT("ReplicatedCrowdAgent"), &Z_Registration_Info_UScriptStruct_ReplicatedCrowdAgent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedCrowdAgent), 2197067849U) },
		{ FCrowdFastArrayItem::StaticStruct, Z_Construct_UScriptStruct_FCrowdFastArrayItem_Statics::NewStructOps, TEXT("CrowdFastArrayItem"), &Z_Registration_Info_UScriptStruct_CrowdFastArrayItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdFastArrayItem), 171788687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicatedAgent_h_662099149(TEXT("/Script/MassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicatedAgent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdReplicatedAgent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
