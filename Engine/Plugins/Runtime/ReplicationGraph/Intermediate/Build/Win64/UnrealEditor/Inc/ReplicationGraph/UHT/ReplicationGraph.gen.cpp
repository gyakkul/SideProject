// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationConnectionDriver();
	ENGINE_API UClass* Z_Construct_UClass_UReplicationDriver();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_AReplicationGraphDebugActor();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_AReplicationGraphDebugActor_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UNetReplicationGraphConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DormancyNode();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DormancyNode_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridCell();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridCell_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_NoRegister();
	REPLICATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo();
	REPLICATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FLastLocationGatherInfo();
	REPLICATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FTearOffActorInfo();
	UPackage* Z_Construct_UPackage__Script_ReplicationGraph();
// End Cross Module References
	void UReplicationGraphNode::StaticRegisterNativesUReplicationGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode);
	UClass* Z_Construct_UClass_UReplicationGraphNode_NoRegister()
	{
		return UReplicationGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllChildNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllChildNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllChildNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes_Inner = { "AllChildNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UReplicationGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes = { "AllChildNodes", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraphNode, AllChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_Statics::NewProp_AllChildNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_Statics::ClassParams = {
		&UReplicationGraphNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode>()
	{
		return UReplicationGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode);
	UReplicationGraphNode::~UReplicationGraphNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode)
	void UReplicationGraphNode_ActorList::StaticRegisterNativesUReplicationGraphNode_ActorList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_ActorList);
	UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister()
	{
		return UReplicationGraphNode_ActorList::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A Node that contains ReplicateActorLists. This contains 1 \"base\" list and a TArray of lists that are conditioned on a streaming level being loaded. */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "A Node that contains ReplicateActorLists. This contains 1 \"base\" list and a TArray of lists that are conditioned on a streaming level being loaded." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_ActorList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::ClassParams = {
		&UReplicationGraphNode_ActorList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_ActorList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_ActorList.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_ActorList.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_ActorList>()
	{
		return UReplicationGraphNode_ActorList::StaticClass();
	}
	UReplicationGraphNode_ActorList::UReplicationGraphNode_ActorList() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_ActorList);
	UReplicationGraphNode_ActorList::~UReplicationGraphNode_ActorList() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_ActorList)
	void UReplicationGraphNode_ActorListFrequencyBuckets::StaticRegisterNativesUReplicationGraphNode_ActorListFrequencyBuckets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_ActorListFrequencyBuckets);
	UClass* Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_NoRegister()
	{
		return UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A Node that contains ReplicateActorLists. This contains multiple buckets for non streaming level actors and will pull from each bucket on alternating frames. It is a way to broadly load balance. */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "A Node that contains ReplicateActorLists. This contains multiple buckets for non streaming level actors and will pull from each bucket on alternating frames. It is a way to broadly load balance." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_ActorListFrequencyBuckets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::ClassParams = {
		&UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_ActorListFrequencyBuckets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_ActorListFrequencyBuckets.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_ActorListFrequencyBuckets.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_ActorListFrequencyBuckets>()
	{
		return UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_ActorListFrequencyBuckets);
	UReplicationGraphNode_ActorListFrequencyBuckets::~UReplicationGraphNode_ActorListFrequencyBuckets() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_ActorListFrequencyBuckets)
	void UReplicationGraphNode_DynamicSpatialFrequency::StaticRegisterNativesUReplicationGraphNode_DynamicSpatialFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_DynamicSpatialFrequency);
	UClass* Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister()
	{
		return UReplicationGraphNode_DynamicSpatialFrequency::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_ActorList,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node intended for dynamic (moving) actors where replication frequency is based on distance to the connection's view location */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "A node intended for dynamic (moving) actors where replication frequency is based on distance to the connection's view location" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_DynamicSpatialFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::ClassParams = {
		&UReplicationGraphNode_DynamicSpatialFrequency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_DynamicSpatialFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_DynamicSpatialFrequency.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_DynamicSpatialFrequency.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_DynamicSpatialFrequency>()
	{
		return UReplicationGraphNode_DynamicSpatialFrequency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_DynamicSpatialFrequency);
	UReplicationGraphNode_DynamicSpatialFrequency::~UReplicationGraphNode_DynamicSpatialFrequency() {}
	void UReplicationGraphNode_ConnectionDormancyNode::StaticRegisterNativesUReplicationGraphNode_ConnectionDormancyNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_ConnectionDormancyNode);
	UClass* Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_NoRegister()
	{
		return UReplicationGraphNode_ConnectionDormancyNode::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_ActorList,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Removes dormant (on connection) actors from its rep lists */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Removes dormant (on connection) actors from its rep lists" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_ConnectionDormancyNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::ClassParams = {
		&UReplicationGraphNode_ConnectionDormancyNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_ConnectionDormancyNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_ConnectionDormancyNode.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_ConnectionDormancyNode.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_ConnectionDormancyNode>()
	{
		return UReplicationGraphNode_ConnectionDormancyNode::StaticClass();
	}
	UReplicationGraphNode_ConnectionDormancyNode::UReplicationGraphNode_ConnectionDormancyNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_ConnectionDormancyNode);
	UReplicationGraphNode_ConnectionDormancyNode::~UReplicationGraphNode_ConnectionDormancyNode() {}
	void UReplicationGraphNode_DormancyNode::StaticRegisterNativesUReplicationGraphNode_DormancyNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_DormancyNode);
	UClass* Z_Construct_UClass_UReplicationGraphNode_DormancyNode_NoRegister()
	{
		return UReplicationGraphNode_DormancyNode::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_ActorList,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Stores per-connection copies of a main actor list. Skips and removes elements from per connection list that are fully dormant */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Stores per-connection copies of a main actor list. Skips and removes elements from per connection list that are fully dormant" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_DormancyNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::ClassParams = {
		&UReplicationGraphNode_DormancyNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_DormancyNode()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_DormancyNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_DormancyNode.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_DormancyNode.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_DormancyNode>()
	{
		return UReplicationGraphNode_DormancyNode::StaticClass();
	}
	UReplicationGraphNode_DormancyNode::UReplicationGraphNode_DormancyNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_DormancyNode);
	UReplicationGraphNode_DormancyNode::~UReplicationGraphNode_DormancyNode() {}
	void UReplicationGraphNode_GridCell::StaticRegisterNativesUReplicationGraphNode_GridCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_GridCell);
	UClass* Z_Construct_UClass_UReplicationGraphNode_GridCell_NoRegister()
	{
		return UReplicationGraphNode_GridCell::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DormancyNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DormancyNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_ActorList,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DynamicNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DynamicNode = { "DynamicNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraphNode_GridCell, DynamicNode), Z_Construct_UClass_UReplicationGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DynamicNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DynamicNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DormancyNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DormancyNode = { "DormancyNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraphNode_GridCell, DormancyNode), Z_Construct_UClass_UReplicationGraphNode_DormancyNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DormancyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DormancyNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DynamicNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::NewProp_DormancyNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_GridCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::ClassParams = {
		&UReplicationGraphNode_GridCell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_GridCell()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_GridCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_GridCell.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_GridCell.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_GridCell>()
	{
		return UReplicationGraphNode_GridCell::StaticClass();
	}
	UReplicationGraphNode_GridCell::UReplicationGraphNode_GridCell() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_GridCell);
	UReplicationGraphNode_GridCell::~UReplicationGraphNode_GridCell() {}
	void UReplicationGraphNode_GridSpatialization2D::StaticRegisterNativesUReplicationGraphNode_GridSpatialization2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_GridSpatialization2D);
	UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister()
	{
		return UReplicationGraphNode_GridSpatialization2D::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -----------------------------------\n" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_GridSpatialization2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::ClassParams = {
		&UReplicationGraphNode_GridSpatialization2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_GridSpatialization2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_GridSpatialization2D.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_GridSpatialization2D.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_GridSpatialization2D>()
	{
		return UReplicationGraphNode_GridSpatialization2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_GridSpatialization2D);
	UReplicationGraphNode_GridSpatialization2D::~UReplicationGraphNode_GridSpatialization2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_GridSpatialization2D)
	void UReplicationGraphNode_AlwaysRelevant::StaticRegisterNativesUReplicationGraphNode_AlwaysRelevant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_AlwaysRelevant);
	UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_NoRegister()
	{
		return UReplicationGraphNode_AlwaysRelevant::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -----------------------------------\n" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::NewProp_ChildNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraphNode_AlwaysRelevant, ChildNode), Z_Construct_UClass_UReplicationGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::NewProp_ChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::NewProp_ChildNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::NewProp_ChildNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_AlwaysRelevant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::ClassParams = {
		&UReplicationGraphNode_AlwaysRelevant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_AlwaysRelevant>()
	{
		return UReplicationGraphNode_AlwaysRelevant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_AlwaysRelevant);
	UReplicationGraphNode_AlwaysRelevant::~UReplicationGraphNode_AlwaysRelevant() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo;
class UScriptStruct* FAlwaysRelevantActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo, (UObject*)Z_Construct_UPackage__Script_ReplicationGraph(), TEXT("AlwaysRelevantActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo.OuterSingleton;
}
template<> REPLICATIONGRAPH_API UScriptStruct* StaticStruct<FAlwaysRelevantActorInfo>()
{
	return FAlwaysRelevantActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastViewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// -----------------------------------\n" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlwaysRelevantActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlwaysRelevantActorInfo, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_Connection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewer = { "LastViewer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlwaysRelevantActorInfo, LastViewer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewTarget = { "LastViewTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlwaysRelevantActorInfo, LastViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewProp_LastViewTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
		nullptr,
		&NewStructOps,
		"AlwaysRelevantActorInfo",
		sizeof(FAlwaysRelevantActorInfo),
		alignof(FAlwaysRelevantActorInfo),
		Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo.InnerSingleton;
	}
	void UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesUReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_AlwaysRelevant_ForConnection);
	UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
	{
		return UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PastRelevantActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PastRelevantActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PastRelevantActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_ActorList,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Adds actors that are always relevant for a connection. This engine version just adds the PlayerController and ViewTarget (usually the pawn) */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Adds actors that are always relevant for a connection. This engine version just adds the PlayerController and ViewTarget (usually the pawn)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_Inner = { "PastRelevantActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo, METADATA_PARAMS(nullptr, 0) }; // 869449041
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors = { "PastRelevantActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_MetaData)) }; // 869449041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_PastRelevantActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
		&UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_AlwaysRelevant_ForConnection>()
	{
		return UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	UReplicationGraphNode_AlwaysRelevant_ForConnection::UReplicationGraphNode_AlwaysRelevant_ForConnection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_AlwaysRelevant_ForConnection);
	UReplicationGraphNode_AlwaysRelevant_ForConnection::~UReplicationGraphNode_AlwaysRelevant_ForConnection() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TearOffActorInfo;
class UScriptStruct* FTearOffActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TearOffActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TearOffActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTearOffActorInfo, (UObject*)Z_Construct_UPackage__Script_ReplicationGraph(), TEXT("TearOffActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TearOffActorInfo.OuterSingleton;
}
template<> REPLICATIONGRAPH_API UScriptStruct* StaticStruct<FTearOffActorInfo>()
{
	return FTearOffActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTearOffActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// -----------------------------------\n" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTearOffActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTearOffActorInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewProp_Actor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
		nullptr,
		&NewStructOps,
		"TearOffActorInfo",
		sizeof(FTearOffActorInfo),
		alignof(FTearOffActorInfo),
		Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTearOffActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TearOffActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TearOffActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TearOffActorInfo.InnerSingleton;
	}
	void UReplicationGraphNode_TearOff_ForConnection::StaticRegisterNativesUReplicationGraphNode_TearOff_ForConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraphNode_TearOff_ForConnection);
	UClass* Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_NoRegister()
	{
		return UReplicationGraphNode_TearOff_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TearOffActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TearOffActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TearOffActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Manages actors that are Tear Off. We will try to replicate these actors one last time to each connection. */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Manages actors that are Tear Off. We will try to replicate these actors one last time to each connection." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors_Inner = { "TearOffActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTearOffActorInfo, METADATA_PARAMS(nullptr, 0) }; // 1892522424
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors_MetaData[] = {
		{ "Comment", "// Fixme: not safe to have persistent FActorRepListrefViews yet, so need a uproperty based list to hold the persistent items.\n" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Fixme: not safe to have persistent FActorRepListrefViews yet, so need a uproperty based list to hold the persistent items." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors = { "TearOffActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraphNode_TearOff_ForConnection, TearOffActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors_MetaData)) }; // 1892522424
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::NewProp_TearOffActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraphNode_TearOff_ForConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::ClassParams = {
		&UReplicationGraphNode_TearOff_ForConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraphNode_TearOff_ForConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraphNode_TearOff_ForConnection.OuterSingleton, Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraphNode_TearOff_ForConnection.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraphNode_TearOff_ForConnection>()
	{
		return UReplicationGraphNode_TearOff_ForConnection::StaticClass();
	}
	UReplicationGraphNode_TearOff_ForConnection::UReplicationGraphNode_TearOff_ForConnection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraphNode_TearOff_ForConnection);
	UReplicationGraphNode_TearOff_ForConnection::~UReplicationGraphNode_TearOff_ForConnection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_TearOff_ForConnection)
	void UReplicationGraph::StaticRegisterNativesUReplicationGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationGraph);
	UClass* Z_Construct_UClass_UReplicationGraph_NoRegister()
	{
		return UReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationConnectionManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReplicationConnectionManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetDriver;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PendingConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingConnections;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalGraphNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGraphNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalGraphNodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrepareForReplicationNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrepareForReplicationNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrepareForReplicationNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Manages actor replication for an entire world / net driver */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Manages actor replication for an entire world / net driver" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::NewProp_ReplicationConnectionManagerClass_MetaData[] = {
		{ "Comment", "/** The per-connection manager class to instantiate. This will be read off the instantiated UNetReplicationManager. */" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "The per-connection manager class to instantiate. This will be read off the instantiated UNetReplicationManager." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_ReplicationConnectionManagerClass = { "ReplicationConnectionManagerClass", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraph, ReplicationConnectionManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_ReplicationConnectionManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_ReplicationConnectionManagerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::NewProp_NetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraph, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_NetDriver_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections_MetaData[] = {
		{ "Comment", "/** List of connection managers. This list is not sorted and not stable. */" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "List of connection managers. This list is not sorted and not stable." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraph, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections_Inner = { "PendingConnections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections_MetaData[] = {
		{ "Comment", "/** ConnectionManagers that we have created but haven't officially been added to the net driver's ClientConnection list. This is a  hack for silly order of initialization issues. */" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "ConnectionManagers that we have created but haven't officially been added to the net driver's ClientConnection list. This is a  hack for silly order of initialization issues." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections = { "PendingConnections", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraph, PendingConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes_Inner = { "GlobalGraphNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UReplicationGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes_MetaData[] = {
		{ "Comment", "/** A list of nodes that can add actors to all connections. They don't necessarily *have to* add actors to each connection, but they will get a chance to. These are added via ::AddGlobalGraphNode  */" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "A list of nodes that can add actors to all connections. They don't necessarily *have to* add actors to each connection, but they will get a chance to. These are added via ::AddGlobalGraphNode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes = { "GlobalGraphNodes", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraph, GlobalGraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes_Inner = { "PrepareForReplicationNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UReplicationGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes_MetaData[] = {
		{ "Comment", "/** A list of nodes that want PrepareForReplication() to be called on them at the top of the replication frame. */" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "A list of nodes that want PrepareForReplication() to be called on them at the top of the replication frame." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes = { "PrepareForReplicationNodes", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationGraph, PrepareForReplicationNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_ReplicationConnectionManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_NetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PendingConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_GlobalGraphNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationGraph_Statics::NewProp_PrepareForReplicationNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationGraph_Statics::ClassParams = {
		&UReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationGraph()
	{
		if (!Z_Registration_Info_UClass_UReplicationGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationGraph.OuterSingleton, Z_Construct_UClass_UReplicationGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationGraph.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UReplicationGraph>()
	{
		return UReplicationGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationGraph);
	UReplicationGraph::~UReplicationGraph() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraph)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LastLocationGatherInfo;
class UScriptStruct* FLastLocationGatherInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LastLocationGatherInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LastLocationGatherInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLastLocationGatherInfo, (UObject*)Z_Construct_UPackage__Script_ReplicationGraph(), TEXT("LastLocationGatherInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LastLocationGatherInfo.OuterSingleton;
}
template<> REPLICATIONGRAPH_API UScriptStruct* StaticStruct<FLastLocationGatherInfo>()
{
	return FLastLocationGatherInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOutOfRangeLocationCheck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastOutOfRangeLocationCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// --------------------------------------------------------------------------------------------------------------------------------------------\n// --------------------------------------------------------------------------------------------------------------------------------------------\n// --------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLastLocationGatherInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLastLocationGatherInfo, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_Connection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastLocation = { "LastLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLastLocationGatherInfo, LastLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastOutOfRangeLocationCheck_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastOutOfRangeLocationCheck = { "LastOutOfRangeLocationCheck", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLastLocationGatherInfo, LastOutOfRangeLocationCheck), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastOutOfRangeLocationCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastOutOfRangeLocationCheck_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewProp_LastOutOfRangeLocationCheck,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
		nullptr,
		&NewStructOps,
		"LastLocationGatherInfo",
		sizeof(FLastLocationGatherInfo),
		alignof(FLastLocationGatherInfo),
		Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLastLocationGatherInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LastLocationGatherInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LastLocationGatherInfo.InnerSingleton, Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LastLocationGatherInfo.InnerSingleton;
	}
	void UNetReplicationGraphConnection::StaticRegisterNativesUNetReplicationGraphConnection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetReplicationGraphConnection);
	UClass* Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister()
	{
		return UNetReplicationGraphConnection::StaticClass();
	}
	struct Z_Construct_UClass_UNetReplicationGraphConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetConnection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DebugActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastGatherLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGatherLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastGatherLocations;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConnectionGraphNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionGraphNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectionGraphNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TearOffNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TearOffNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetReplicationGraphConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationConnectionDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetReplicationGraphConnection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Manages actor replication for a specific connection */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Manages actor replication for a specific connection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_NetConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_NetConnection = { "NetConnection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetReplicationGraphConnection, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_NetConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_NetConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_DebugActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_DebugActor = { "DebugActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetReplicationGraphConnection, DebugActor), Z_Construct_UClass_AReplicationGraphDebugActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_DebugActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_DebugActor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations_Inner = { "LastGatherLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLastLocationGatherInfo, METADATA_PARAMS(nullptr, 0) }; // 1925060433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations = { "LastGatherLocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetReplicationGraphConnection, LastGatherLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations_MetaData)) }; // 1925060433
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes_Inner = { "ConnectionGraphNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UReplicationGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes = { "ConnectionGraphNodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetReplicationGraphConnection, ConnectionGraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_TearOffNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_TearOffNode = { "TearOffNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetReplicationGraphConnection, TearOffNode), Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_TearOffNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_TearOffNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetReplicationGraphConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_NetConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_DebugActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_LastGatherLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_ConnectionGraphNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetReplicationGraphConnection_Statics::NewProp_TearOffNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetReplicationGraphConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetReplicationGraphConnection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetReplicationGraphConnection_Statics::ClassParams = {
		&UNetReplicationGraphConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetReplicationGraphConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetReplicationGraphConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetReplicationGraphConnection()
	{
		if (!Z_Registration_Info_UClass_UNetReplicationGraphConnection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetReplicationGraphConnection.OuterSingleton, Z_Construct_UClass_UNetReplicationGraphConnection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetReplicationGraphConnection.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<UNetReplicationGraphConnection>()
	{
		return UNetReplicationGraphConnection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetReplicationGraphConnection);
	UNetReplicationGraphConnection::~UNetReplicationGraphConnection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetReplicationGraphConnection)
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execClientCellInfo)
	{
		P_GET_STRUCT(FVector,Z_Param_CellLocation);
		P_GET_STRUCT(FVector,Z_Param_CellExtent);
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCellInfo_Implementation(Z_Param_CellLocation,Z_Param_CellExtent,Z_Param_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerPrintCullDistances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPrintCullDistances_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerSetConditionalActorBreakpoint)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetConditionalActorBreakpoint_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerSetPeriodFrameForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FIntProperty,Z_Param_PeriodFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPeriodFrameForClass_Implementation(Z_Param_Class,Z_Param_PeriodFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerSetCullDistanceForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CullDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetCullDistanceForClass_Implementation(Z_Param_Class,Z_Param_CullDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerPrintAllActorInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPrintAllActorInfo_Implementation(Z_Param_Str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerCellInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCellInfo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerStopDebugging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStopDebugging_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationGraphDebugActor::execServerStartDebugging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartDebugging_Implementation();
		P_NATIVE_END;
	}
	struct ReplicationGraphDebugActor_eventClientCellInfo_Parms
	{
		FVector CellLocation;
		FVector CellExtent;
		TArray<AActor*> Actors;
	};
	struct ReplicationGraphDebugActor_eventServerPrintAllActorInfo_Parms
	{
		FString Str;
	};
	struct ReplicationGraphDebugActor_eventServerSetConditionalActorBreakpoint_Parms
	{
		AActor* Actor;
	};
	struct ReplicationGraphDebugActor_eventServerSetCullDistanceForClass_Parms
	{
		UClass* Class;
		float CullDistance;
	};
	struct ReplicationGraphDebugActor_eventServerSetPeriodFrameForClass_Parms
	{
		UClass* Class;
		int32 PeriodFrame;
	};
	static FName NAME_AReplicationGraphDebugActor_ClientCellInfo = FName(TEXT("ClientCellInfo"));
	void AReplicationGraphDebugActor::ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> const& Actors)
	{
		ReplicationGraphDebugActor_eventClientCellInfo_Parms Parms;
		Parms.CellLocation=CellLocation;
		Parms.CellExtent=CellExtent;
		Parms.Actors=Actors;
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ClientCellInfo),&Parms);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerCellInfo = FName(TEXT("ServerCellInfo"));
	void AReplicationGraphDebugActor::ServerCellInfo()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerCellInfo),NULL);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerPrintAllActorInfo = FName(TEXT("ServerPrintAllActorInfo"));
	void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const FString& Str)
	{
		ReplicationGraphDebugActor_eventServerPrintAllActorInfo_Parms Parms;
		Parms.Str=Str;
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerPrintAllActorInfo),&Parms);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerPrintCullDistances = FName(TEXT("ServerPrintCullDistances"));
	void AReplicationGraphDebugActor::ServerPrintCullDistances()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerPrintCullDistances),NULL);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint = FName(TEXT("ServerSetConditionalActorBreakpoint"));
	void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(AActor* Actor)
	{
		ReplicationGraphDebugActor_eventServerSetConditionalActorBreakpoint_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint),&Parms);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerSetCullDistanceForClass = FName(TEXT("ServerSetCullDistanceForClass"));
	void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(UClass* Class, float CullDistance)
	{
		ReplicationGraphDebugActor_eventServerSetCullDistanceForClass_Parms Parms;
		Parms.Class=Class;
		Parms.CullDistance=CullDistance;
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerSetCullDistanceForClass),&Parms);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass = FName(TEXT("ServerSetPeriodFrameForClass"));
	void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(UClass* Class, int32 PeriodFrame)
	{
		ReplicationGraphDebugActor_eventServerSetPeriodFrameForClass_Parms Parms;
		Parms.Class=Class;
		Parms.PeriodFrame=PeriodFrame;
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass),&Parms);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerStartDebugging = FName(TEXT("ServerStartDebugging"));
	void AReplicationGraphDebugActor::ServerStartDebugging()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerStartDebugging),NULL);
	}
	static FName NAME_AReplicationGraphDebugActor_ServerStopDebugging = FName(TEXT("ServerStopDebugging"));
	void AReplicationGraphDebugActor::ServerStopDebugging()
	{
		ProcessEvent(FindFunctionChecked(NAME_AReplicationGraphDebugActor_ServerStopDebugging),NULL);
	}
	void AReplicationGraphDebugActor::StaticRegisterNativesAReplicationGraphDebugActor()
	{
		UClass* Class = AReplicationGraphDebugActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientCellInfo", &AReplicationGraphDebugActor::execClientCellInfo },
			{ "ServerCellInfo", &AReplicationGraphDebugActor::execServerCellInfo },
			{ "ServerPrintAllActorInfo", &AReplicationGraphDebugActor::execServerPrintAllActorInfo },
			{ "ServerPrintCullDistances", &AReplicationGraphDebugActor::execServerPrintCullDistances },
			{ "ServerSetConditionalActorBreakpoint", &AReplicationGraphDebugActor::execServerSetConditionalActorBreakpoint },
			{ "ServerSetCullDistanceForClass", &AReplicationGraphDebugActor::execServerSetCullDistanceForClass },
			{ "ServerSetPeriodFrameForClass", &AReplicationGraphDebugActor::execServerSetPeriodFrameForClass },
			{ "ServerStartDebugging", &AReplicationGraphDebugActor::execServerStartDebugging },
			{ "ServerStopDebugging", &AReplicationGraphDebugActor::execServerStopDebugging },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellExtent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_CellLocation = { "CellLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventClientCellInfo_Parms, CellLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_CellExtent = { "CellExtent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventClientCellInfo_Parms, CellExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventClientCellInfo_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_CellLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_CellExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ClientCellInfo", nullptr, nullptr, sizeof(ReplicationGraphDebugActor_eventClientCellInfo_Parms), Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerCellInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventServerPrintAllActorInfo_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::NewProp_Str_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::NewProp_Str,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerPrintAllActorInfo", nullptr, nullptr, sizeof(ReplicationGraphDebugActor_eventServerPrintAllActorInfo_Parms), Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerPrintCullDistances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventServerSetConditionalActorBreakpoint_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerSetConditionalActorBreakpoint", nullptr, nullptr, sizeof(ReplicationGraphDebugActor_eventServerSetConditionalActorBreakpoint_Parms), Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventServerSetCullDistanceForClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventServerSetCullDistanceForClass_Parms, CullDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::NewProp_CullDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerSetCullDistanceForClass", nullptr, nullptr, sizeof(ReplicationGraphDebugActor_eventServerSetCullDistanceForClass_Parms), Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PeriodFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventServerSetPeriodFrameForClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::NewProp_PeriodFrame = { "PeriodFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationGraphDebugActor_eventServerSetPeriodFrameForClass_Parms, PeriodFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::NewProp_PeriodFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerSetPeriodFrameForClass", nullptr, nullptr, sizeof(ReplicationGraphDebugActor_eventServerSetPeriodFrameForClass_Parms), Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerStartDebugging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationGraphDebugActor, nullptr, "ServerStopDebugging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReplicationGraphDebugActor);
	UClass* Z_Construct_UClass_AReplicationGraphDebugActor_NoRegister()
	{
		return AReplicationGraphDebugActor::StaticClass();
	}
	struct Z_Construct_UClass_AReplicationGraphDebugActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConnectionManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicationGraphDebugActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReplicationGraphDebugActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ClientCellInfo, "ClientCellInfo" }, // 3952202532
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerCellInfo, "ServerCellInfo" }, // 3567164487
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintAllActorInfo, "ServerPrintAllActorInfo" }, // 1962231893
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerPrintCullDistances, "ServerPrintCullDistances" }, // 2344536697
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint, "ServerSetConditionalActorBreakpoint" }, // 2923858311
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetCullDistanceForClass, "ServerSetCullDistanceForClass" }, // 3879776959
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerSetPeriodFrameForClass, "ServerSetPeriodFrameForClass" }, // 1732262654
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStartDebugging, "ServerStartDebugging" }, // 455796555
		{ &Z_Construct_UFunction_AReplicationGraphDebugActor_ServerStopDebugging, "ServerStopDebugging" }, // 3796620278
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationGraphDebugActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Specialized actor for replicating debug information about replication to specific connections. This actor is never spawned in shipping builds and never counts towards bandwidth limits */" },
		{ "IncludePath", "ReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
		{ "ToolTip", "Specialized actor for replicating debug information about replication to specific connections. This actor is never spawned in shipping builds and never counts towards bandwidth limits" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ReplicationGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ReplicationGraph = { "ReplicationGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationGraphDebugActor, ReplicationGraph), Z_Construct_UClass_UReplicationGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ReplicationGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ReplicationGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ConnectionManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ConnectionManager = { "ConnectionManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationGraphDebugActor, ConnectionManager), Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ConnectionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ConnectionManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReplicationGraphDebugActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ReplicationGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationGraphDebugActor_Statics::NewProp_ConnectionManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicationGraphDebugActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicationGraphDebugActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplicationGraphDebugActor_Statics::ClassParams = {
		&AReplicationGraphDebugActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReplicationGraphDebugActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationGraphDebugActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicationGraphDebugActor()
	{
		if (!Z_Registration_Info_UClass_AReplicationGraphDebugActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplicationGraphDebugActor.OuterSingleton, Z_Construct_UClass_AReplicationGraphDebugActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReplicationGraphDebugActor.OuterSingleton;
	}
	template<> REPLICATIONGRAPH_API UClass* StaticClass<AReplicationGraphDebugActor>()
	{
		return AReplicationGraphDebugActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicationGraphDebugActor);
	AReplicationGraphDebugActor::~AReplicationGraphDebugActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics::ScriptStructInfo[] = {
		{ FAlwaysRelevantActorInfo::StaticStruct, Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics::NewStructOps, TEXT("AlwaysRelevantActorInfo"), &Z_Registration_Info_UScriptStruct_AlwaysRelevantActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlwaysRelevantActorInfo), 869449041U) },
		{ FTearOffActorInfo::StaticStruct, Z_Construct_UScriptStruct_FTearOffActorInfo_Statics::NewStructOps, TEXT("TearOffActorInfo"), &Z_Registration_Info_UScriptStruct_TearOffActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTearOffActorInfo), 1892522424U) },
		{ FLastLocationGatherInfo::StaticStruct, Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics::NewStructOps, TEXT("LastLocationGatherInfo"), &Z_Registration_Info_UScriptStruct_LastLocationGatherInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLastLocationGatherInfo), 1925060433U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationGraphNode, UReplicationGraphNode::StaticClass, TEXT("UReplicationGraphNode"), &Z_Registration_Info_UClass_UReplicationGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode), 2761008304U) },
		{ Z_Construct_UClass_UReplicationGraphNode_ActorList, UReplicationGraphNode_ActorList::StaticClass, TEXT("UReplicationGraphNode_ActorList"), &Z_Registration_Info_UClass_UReplicationGraphNode_ActorList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_ActorList), 127310438U) },
		{ Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets, UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass, TEXT("UReplicationGraphNode_ActorListFrequencyBuckets"), &Z_Registration_Info_UClass_UReplicationGraphNode_ActorListFrequencyBuckets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_ActorListFrequencyBuckets), 233204053U) },
		{ Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency, UReplicationGraphNode_DynamicSpatialFrequency::StaticClass, TEXT("UReplicationGraphNode_DynamicSpatialFrequency"), &Z_Registration_Info_UClass_UReplicationGraphNode_DynamicSpatialFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_DynamicSpatialFrequency), 795693938U) },
		{ Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode, UReplicationGraphNode_ConnectionDormancyNode::StaticClass, TEXT("UReplicationGraphNode_ConnectionDormancyNode"), &Z_Registration_Info_UClass_UReplicationGraphNode_ConnectionDormancyNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_ConnectionDormancyNode), 3951031541U) },
		{ Z_Construct_UClass_UReplicationGraphNode_DormancyNode, UReplicationGraphNode_DormancyNode::StaticClass, TEXT("UReplicationGraphNode_DormancyNode"), &Z_Registration_Info_UClass_UReplicationGraphNode_DormancyNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_DormancyNode), 2134468615U) },
		{ Z_Construct_UClass_UReplicationGraphNode_GridCell, UReplicationGraphNode_GridCell::StaticClass, TEXT("UReplicationGraphNode_GridCell"), &Z_Registration_Info_UClass_UReplicationGraphNode_GridCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_GridCell), 2481302288U) },
		{ Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D, UReplicationGraphNode_GridSpatialization2D::StaticClass, TEXT("UReplicationGraphNode_GridSpatialization2D"), &Z_Registration_Info_UClass_UReplicationGraphNode_GridSpatialization2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_GridSpatialization2D), 826457548U) },
		{ Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant, UReplicationGraphNode_AlwaysRelevant::StaticClass, TEXT("UReplicationGraphNode_AlwaysRelevant"), &Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_AlwaysRelevant), 4078515984U) },
		{ Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection, UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("UReplicationGraphNode_AlwaysRelevant_ForConnection"), &Z_Registration_Info_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection), 598656020U) },
		{ Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection, UReplicationGraphNode_TearOff_ForConnection::StaticClass, TEXT("UReplicationGraphNode_TearOff_ForConnection"), &Z_Registration_Info_UClass_UReplicationGraphNode_TearOff_ForConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraphNode_TearOff_ForConnection), 1973096127U) },
		{ Z_Construct_UClass_UReplicationGraph, UReplicationGraph::StaticClass, TEXT("UReplicationGraph"), &Z_Registration_Info_UClass_UReplicationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationGraph), 1859050685U) },
		{ Z_Construct_UClass_UNetReplicationGraphConnection, UNetReplicationGraphConnection::StaticClass, TEXT("UNetReplicationGraphConnection"), &Z_Registration_Info_UClass_UNetReplicationGraphConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetReplicationGraphConnection), 3373064580U) },
		{ Z_Construct_UClass_AReplicationGraphDebugActor, AReplicationGraphDebugActor::StaticClass, TEXT("AReplicationGraphDebugActor"), &Z_Registration_Info_UClass_AReplicationGraphDebugActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplicationGraphDebugActor), 2338408655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_3213915413(TEXT("/Script/ReplicationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
