// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraphSchema() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode_NoRegister();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema_NoRegister();
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_AddComment();
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewNode();
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FAISchemaAction_AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAISchemaAction_AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment;
class UScriptStruct* FAISchemaAction_AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISchemaAction_AddComment, (UObject*)Z_Construct_UPackage__Script_AIGraph(), TEXT("AISchemaAction_AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment.OuterSingleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FAISchemaAction_AddComment>()
{
	return FAISchemaAction_AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a comment to the graph */" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Action to add a comment to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISchemaAction_AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AISchemaAction_AddComment",
		sizeof(FAISchemaAction_AddComment),
		alignof(FAISchemaAction_AddComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment.InnerSingleton, Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAISchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAISchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode;
class UScriptStruct* FAISchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_AIGraph(), TEXT("AISchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode.OuterSingleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FAISchemaAction_NewNode>()
{
	return FAISchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAISchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AISchemaAction_NewNode",
		sizeof(FAISchemaAction_NewNode),
		alignof(FAISchemaAction_NewNode),
		Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAISchemaAction_NewSubNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAISchemaAction_NewSubNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode;
class UScriptStruct* FAISchemaAction_NewSubNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode, (UObject*)Z_Construct_UPackage__Script_AIGraph(), TEXT("AISchemaAction_NewSubNode"));
	}
	return Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode.OuterSingleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FAISchemaAction_NewSubNode>()
{
	return FAISchemaAction_NewSubNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a subnode to the selected node */" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Action to add a subnode to the selected node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISchemaAction_NewSubNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAISchemaAction_NewSubNode, NodeTemplate), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "Comment", "/** parent node */" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
		{ "ToolTip", "parent node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAISchemaAction_NewSubNode, ParentNode), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_NodeTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewProp_ParentNode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AISchemaAction_NewSubNode",
		sizeof(FAISchemaAction_NewSubNode),
		alignof(FAISchemaAction_NewSubNode),
		Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode.InnerSingleton, Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode.InnerSingleton;
	}
	void UAIGraphSchema::StaticRegisterNativesUAIGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIGraphSchema);
	UClass* Z_Construct_UClass_UAIGraphSchema_NoRegister()
	{
		return UAIGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAIGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/AIGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIGraphSchema_Statics::ClassParams = {
		&UAIGraphSchema::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UAIGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIGraphSchema.OuterSingleton, Z_Construct_UClass_UAIGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIGraphSchema.OuterSingleton;
	}
	template<> AIGRAPH_API UClass* StaticClass<UAIGraphSchema>()
	{
		return UAIGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIGraphSchema);
	UAIGraphSchema::~UAIGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FAISchemaAction_AddComment::StaticStruct, Z_Construct_UScriptStruct_FAISchemaAction_AddComment_Statics::NewStructOps, TEXT("AISchemaAction_AddComment"), &Z_Registration_Info_UScriptStruct_AISchemaAction_AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISchemaAction_AddComment), 1222527218U) },
		{ FAISchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FAISchemaAction_NewNode_Statics::NewStructOps, TEXT("AISchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_AISchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISchemaAction_NewNode), 926291211U) },
		{ FAISchemaAction_NewSubNode::StaticStruct, Z_Construct_UScriptStruct_FAISchemaAction_NewSubNode_Statics::NewStructOps, TEXT("AISchemaAction_NewSubNode"), &Z_Registration_Info_UScriptStruct_AISchemaAction_NewSubNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISchemaAction_NewSubNode), 2187003575U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIGraphSchema, UAIGraphSchema::StaticClass, TEXT("UAIGraphSchema"), &Z_Registration_Info_UClass_UAIGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIGraphSchema), 3404626353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_1495593171(TEXT("/Script/AIGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
