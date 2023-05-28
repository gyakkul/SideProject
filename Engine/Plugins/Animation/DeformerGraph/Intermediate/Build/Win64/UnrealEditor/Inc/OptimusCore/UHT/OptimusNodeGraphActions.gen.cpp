// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Actions/OptimusNodeGraphActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeGraphActions() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddGraph>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddGraph cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph;
class UScriptStruct* FOptimusNodeGraphAction_AddGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddGraph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddGraph>()
{
	return FOptimusNodeGraphAction_AddGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddGraph>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_AddGraph",
		sizeof(FOptimusNodeGraphAction_AddGraph),
		alignof(FOptimusNodeGraphAction_AddGraph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveGraph>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_RemoveGraph cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph;
class UScriptStruct* FOptimusNodeGraphAction_RemoveGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveGraph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveGraph>()
{
	return FOptimusNodeGraphAction_RemoveGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveGraph>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_RemoveGraph",
		sizeof(FOptimusNodeGraphAction_RemoveGraph),
		alignof(FOptimusNodeGraphAction_RemoveGraph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RenameGraph>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_RenameGraph cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph;
class UScriptStruct* FOptimusNodeGraphAction_RenameGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RenameGraph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RenameGraph>()
{
	return FOptimusNodeGraphAction_RenameGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RenameGraph>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_RenameGraph",
		sizeof(FOptimusNodeGraphAction_RenameGraph),
		alignof(FOptimusNodeGraphAction_RenameGraph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddNode cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode;
class UScriptStruct* FOptimusNodeGraphAction_AddNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddNode>()
{
	return FOptimusNodeGraphAction_AddNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_AddNode",
		sizeof(FOptimusNodeGraphAction_AddNode),
		alignof(FOptimusNodeGraphAction_AddNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_DuplicateNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_DuplicateNode cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode;
class UScriptStruct* FOptimusNodeGraphAction_DuplicateNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_DuplicateNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_DuplicateNode>()
{
	return FOptimusNodeGraphAction_DuplicateNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_DuplicateNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_DuplicateNode",
		sizeof(FOptimusNodeGraphAction_DuplicateNode),
		alignof(FOptimusNodeGraphAction_DuplicateNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_RemoveNode cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode;
class UScriptStruct* FOptimusNodeGraphAction_RemoveNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveNode>()
{
	return FOptimusNodeGraphAction_RemoveNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_RemoveNode",
		sizeof(FOptimusNodeGraphAction_RemoveNode),
		alignof(FOptimusNodeGraphAction_RemoveNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_AddRemoveLink cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink;
class UScriptStruct* FOptimusNodeGraphAction_AddRemoveLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddRemoveLink"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddRemoveLink>()
{
	return FOptimusNodeGraphAction_AddRemoveLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A base action for adding/removing nodes.\n" },
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
		{ "ToolTip", "A base action for adding/removing nodes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddRemoveLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_AddRemoveLink",
		sizeof(FOptimusNodeGraphAction_AddRemoveLink),
		alignof(FOptimusNodeGraphAction_AddRemoveLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_AddLink>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>(), "USTRUCT FOptimusNodeGraphAction_AddLink cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveLink is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink;
class UScriptStruct* FOptimusNodeGraphAction_AddLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_AddLink"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_AddLink>()
{
	return FOptimusNodeGraphAction_AddLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_AddLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink,
		&NewStructOps,
		"OptimusNodeGraphAction_AddLink",
		sizeof(FOptimusNodeGraphAction_AddLink),
		alignof(FOptimusNodeGraphAction_AddLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_RemoveLink>() == std::is_polymorphic<FOptimusNodeGraphAction_AddRemoveLink>(), "USTRUCT FOptimusNodeGraphAction_RemoveLink cannot be polymorphic unless super FOptimusNodeGraphAction_AddRemoveLink is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink;
class UScriptStruct* FOptimusNodeGraphAction_RemoveLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_RemoveLink"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_RemoveLink>()
{
	return FOptimusNodeGraphAction_RemoveLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_RemoveLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink,
		&NewStructOps,
		"OptimusNodeGraphAction_RemoveLink",
		sizeof(FOptimusNodeGraphAction_RemoveLink),
		alignof(FOptimusNodeGraphAction_RemoveLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_PackageKernelFunction>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_PackageKernelFunction cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction;
class UScriptStruct* FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_PackageKernelFunction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_PackageKernelFunction>()
{
	return FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_PackageKernelFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_PackageKernelFunction",
		sizeof(FOptimusNodeGraphAction_PackageKernelFunction),
		alignof(FOptimusNodeGraphAction_PackageKernelFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeGraphAction_UnpackageKernelFunction>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeGraphAction_UnpackageKernelFunction cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction;
class UScriptStruct* FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeGraphAction_UnpackageKernelFunction"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeGraphAction_UnpackageKernelFunction>()
{
	return FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeGraphActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeGraphAction_UnpackageKernelFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeGraphAction_UnpackageKernelFunction",
		sizeof(FOptimusNodeGraphAction_UnpackageKernelFunction),
		alignof(FOptimusNodeGraphAction_UnpackageKernelFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics::ScriptStructInfo[] = {
		{ FOptimusNodeGraphAction_AddGraph::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddGraph"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddGraph), 3863839581U) },
		{ FOptimusNodeGraphAction_RemoveGraph::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveGraph"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveGraph), 1929795487U) },
		{ FOptimusNodeGraphAction_RenameGraph::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RenameGraph"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RenameGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RenameGraph), 2114975009U) },
		{ FOptimusNodeGraphAction_AddNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddNode), 2498722369U) },
		{ FOptimusNodeGraphAction_DuplicateNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_DuplicateNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_DuplicateNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_DuplicateNode), 134174177U) },
		{ FOptimusNodeGraphAction_RemoveNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveNode), 224997329U) },
		{ FOptimusNodeGraphAction_AddRemoveLink::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddRemoveLink"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddRemoveLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddRemoveLink), 1084103531U) },
		{ FOptimusNodeGraphAction_AddLink::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddLink_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_AddLink"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_AddLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_AddLink), 295583579U) },
		{ FOptimusNodeGraphAction_RemoveLink::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_RemoveLink"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_RemoveLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_RemoveLink), 255278801U) },
		{ FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_PackageKernelFunction"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_PackageKernelFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_PackageKernelFunction), 4282563989U) },
		{ FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction_Statics::NewStructOps, TEXT("OptimusNodeGraphAction_UnpackageKernelFunction"), &Z_Registration_Info_UScriptStruct_OptimusNodeGraphAction_UnpackageKernelFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeGraphAction_UnpackageKernelFunction), 1882367585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_3580534544(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeGraphActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
