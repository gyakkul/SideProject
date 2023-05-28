// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicReplicationGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicReplicationGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UBasicReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UBasicReplicationGraph_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	REPLICATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair();
	UPackage* Z_Construct_UPackage__Script_ReplicationGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair;
class UScriptStruct* FConnectionAlwaysRelevantNodePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair, (UObject*)Z_Construct_UPackage__Script_ReplicationGraph(), TEXT("ConnectionAlwaysRelevantNodePair"));
	}
	return Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair.OuterSingleton;
}
template<> REPLICATIONGRAPH_API UScriptStruct* StaticStruct<FConnectionAlwaysRelevantNodePair>()
{
	return FConnectionAlwaysRelevantNodePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetConnection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionAlwaysRelevantNodePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection = { "NetConnection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConnectionAlwaysRelevantNodePair, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConnectionAlwaysRelevantNodePair, Node), Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_Node_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_NetConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewProp_Node,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
		nullptr,
		&NewStructOps,
		"ConnectionAlwaysRelevantNodePair",
		sizeof(FConnectionAlwaysRelevantNodePair),
		alignof(FConnectionAlwaysRelevantNodePair),
		Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair()
	{
		if (!Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair.InnerSingleton, Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair.InnerSingleton;
	}
	void UBasicReplicationGraph::StaticRegisterNativesUBasicReplicationGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicReplicationGraph);
	UClass* Z_Construct_UClass_UBasicReplicationGraph_NoRegister()
	{
		return UBasicReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UBasicReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlwaysRelevantNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlwaysRelevantForConnectionList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantForConnectionList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlwaysRelevantForConnectionList;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorsWithoutNetConnection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsWithoutNetConnection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsWithoutNetConnection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A basic implementation of replication graph. It only supports NetCullDistanceSquared, bAlwaysRelevant, bOnlyRelevantToOwner. These values cannot change per-actor at runtime. \n * This is meant to provide a simple example implementation. More robust implementations will be required for more complex games. ShootGame is another example to check out.\n * \n * To enable this via ini:\n * [/Script/OnlineSubsystemUtils.IpNetDriver]\n * ReplicationDriverClassName=\"/Script/ReplicationGraph.BasicReplicationGraph\"\n * \n **/" },
		{ "IncludePath", "BasicReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
		{ "ToolTip", "A basic implementation of replication graph. It only supports NetCullDistanceSquared, bAlwaysRelevant, bOnlyRelevantToOwner. These values cannot change per-actor at runtime.\nThis is meant to provide a simple example implementation. More robust implementations will be required for more complex games. ShootGame is another example to check out.\n\nTo enable this via ini:\n[/Script/OnlineSubsystemUtils.IpNetDriver]\nReplicationDriverClassName=\"/Script/ReplicationGraph.BasicReplicationGraph\"" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_GridNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_GridNode = { "GridNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicReplicationGraph, GridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_GridNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_GridNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { "AlwaysRelevantNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_Inner = { "AlwaysRelevantForConnectionList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair, METADATA_PARAMS(nullptr, 0) }; // 2292995403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList = { "AlwaysRelevantForConnectionList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicReplicationGraph, AlwaysRelevantForConnectionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_MetaData)) }; // 2292995403
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_Inner = { "ActorsWithoutNetConnection", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_MetaData[] = {
		{ "Comment", "/** Actors that are only supposed to replicate to their owning connection, but that did not have a connection on spawn */" },
		{ "ModuleRelativePath", "Public/BasicReplicationGraph.h" },
		{ "ToolTip", "Actors that are only supposed to replicate to their owning connection, but that did not have a connection on spawn" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection = { "ActorsWithoutNetConnection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicReplicationGraph, ActorsWithoutNetConnection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicReplicationGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_GridNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_AlwaysRelevantForConnectionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicReplicationGraph_Statics::NewProp_ActorsWithoutNetConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicReplicationGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicReplicationGraph_Statics::ClassParams = {
		&UBasicReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicReplicationGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicReplicationGraph_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UBasicReplicationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicReplicationGraph()
	{
		if (!Z_Registration_Info_UClass_UBasicReplicationGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicReplicationGraph.OuterSingleton, Z_Construct_UClass_UBasicReplicationGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicReplicationGraph.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UBasicReplicationGraph>()
	{
		return UBasicReplicationGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicReplicationGraph);
	UBasicReplicationGraph::~UBasicReplicationGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics::ScriptStructInfo[] = {
		{ FConnectionAlwaysRelevantNodePair::StaticStruct, Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics::NewStructOps, TEXT("ConnectionAlwaysRelevantNodePair"), &Z_Registration_Info_UScriptStruct_ConnectionAlwaysRelevantNodePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConnectionAlwaysRelevantNodePair), 2292995403U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicReplicationGraph, UBasicReplicationGraph::StaticClass, TEXT("UBasicReplicationGraph"), &Z_Registration_Info_UClass_UBasicReplicationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicReplicationGraph), 799427838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_1758945095(TEXT("/Script/ReplicationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
