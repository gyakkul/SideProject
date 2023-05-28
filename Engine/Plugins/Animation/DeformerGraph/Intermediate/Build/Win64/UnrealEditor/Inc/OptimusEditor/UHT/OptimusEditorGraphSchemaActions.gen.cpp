// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusEditorGraphSchemaActions.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusEditorGraphSchemaActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource();
	OPTIMUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable();
	UPackage* Z_Construct_UPackage__Script_OptimusEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FOptimusGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode;
class UScriptStruct* FOptimusGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusGraphSchemaAction_NewNode>()
{
	return FOptimusGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// Action to add a new Optimus node to the graph\n" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
		{ "ToolTip", "Action to add a new Optimus node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphSchemaAction_NewNode, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewProp_NodeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewProp_NodeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusGraphSchemaAction_NewNode",
		sizeof(FOptimusGraphSchemaAction_NewNode),
		alignof(FOptimusGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusGraphSchemaAction_NewConstantValueNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusGraphSchemaAction_NewConstantValueNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode;
class UScriptStruct* FOptimusGraphSchemaAction_NewConstantValueNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusGraphSchemaAction_NewConstantValueNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusGraphSchemaAction_NewConstantValueNode>()
{
	return FOptimusGraphSchemaAction_NewConstantValueNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusGraphSchemaAction_NewConstantValueNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphSchemaAction_NewConstantValueNode, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewProp_DataType_MetaData)) }; // 2733180919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewProp_DataType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusGraphSchemaAction_NewConstantValueNode",
		sizeof(FOptimusGraphSchemaAction_NewConstantValueNode),
		alignof(FOptimusGraphSchemaAction_NewConstantValueNode),
		Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusGraphSchemaAction_NewDataInterfaceNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusGraphSchemaAction_NewDataInterfaceNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode;
class UScriptStruct* FOptimusGraphSchemaAction_NewDataInterfaceNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusGraphSchemaAction_NewDataInterfaceNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusGraphSchemaAction_NewDataInterfaceNode>()
{
	return FOptimusGraphSchemaAction_NewDataInterfaceNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataInterfaceClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusGraphSchemaAction_NewDataInterfaceNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewProp_DataInterfaceClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewProp_DataInterfaceClass = { "DataInterfaceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphSchemaAction_NewDataInterfaceNode, DataInterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewProp_DataInterfaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewProp_DataInterfaceClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewProp_DataInterfaceClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusGraphSchemaAction_NewDataInterfaceNode",
		sizeof(FOptimusGraphSchemaAction_NewDataInterfaceNode),
		alignof(FOptimusGraphSchemaAction_NewDataInterfaceNode),
		Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusSchemaAction_Graph>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusSchemaAction_Graph cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph;
class UScriptStruct* FOptimusSchemaAction_Graph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusSchemaAction_Graph"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusSchemaAction_Graph>()
{
	return FOptimusSchemaAction_Graph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// Reference to a UOptimusNodeGraph.\n" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
		{ "ToolTip", "Reference to a UOptimusNodeGraph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusSchemaAction_Graph>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusSchemaAction_Graph",
		sizeof(FOptimusSchemaAction_Graph),
		alignof(FOptimusSchemaAction_Graph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph.InnerSingleton, Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusSchemaAction_Binding>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusSchemaAction_Binding cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding;
class UScriptStruct* FOptimusSchemaAction_Binding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusSchemaAction_Binding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusSchemaAction_Binding>()
{
	return FOptimusSchemaAction_Binding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// Reference to a UOptimusComponentSourceBinding.\n" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
		{ "ToolTip", "Reference to a UOptimusComponentSourceBinding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusSchemaAction_Binding>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusSchemaAction_Binding",
		sizeof(FOptimusSchemaAction_Binding),
		alignof(FOptimusSchemaAction_Binding),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusSchemaAction_Resource>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusSchemaAction_Resource cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource;
class UScriptStruct* FOptimusSchemaAction_Resource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusSchemaAction_Resource"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusSchemaAction_Resource>()
{
	return FOptimusSchemaAction_Resource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// Reference to a UOptimusResourceDescription.\n" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
		{ "ToolTip", "Reference to a UOptimusResourceDescription." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusSchemaAction_Resource>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusSchemaAction_Resource",
		sizeof(FOptimusSchemaAction_Resource),
		alignof(FOptimusSchemaAction_Resource),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource.InnerSingleton, Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusSchemaAction_Variable>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FOptimusSchemaAction_Variable cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable;
class UScriptStruct* FOptimusSchemaAction_Variable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable, (UObject*)Z_Construct_UPackage__Script_OptimusEditor(), TEXT("OptimusSchemaAction_Variable"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable.OuterSingleton;
}
template<> OPTIMUSEDITOR_API UScriptStruct* StaticStruct<FOptimusSchemaAction_Variable>()
{
	return FOptimusSchemaAction_Variable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// Reference to a UOptimusVariableDescription.\n" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchemaActions.h" },
		{ "ToolTip", "Reference to a UOptimusVariableDescription." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusSchemaAction_Variable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"OptimusSchemaAction_Variable",
		sizeof(FOptimusSchemaAction_Variable),
		alignof(FOptimusSchemaAction_Variable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable.InnerSingleton, Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchemaActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchemaActions_h_Statics::ScriptStructInfo[] = {
		{ FOptimusGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("OptimusGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusGraphSchemaAction_NewNode), 2056133500U) },
		{ FOptimusGraphSchemaAction_NewConstantValueNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewConstantValueNode_Statics::NewStructOps, TEXT("OptimusGraphSchemaAction_NewConstantValueNode"), &Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewConstantValueNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusGraphSchemaAction_NewConstantValueNode), 1117056226U) },
		{ FOptimusGraphSchemaAction_NewDataInterfaceNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusGraphSchemaAction_NewDataInterfaceNode_Statics::NewStructOps, TEXT("OptimusGraphSchemaAction_NewDataInterfaceNode"), &Z_Registration_Info_UScriptStruct_OptimusGraphSchemaAction_NewDataInterfaceNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusGraphSchemaAction_NewDataInterfaceNode), 4083838895U) },
		{ FOptimusSchemaAction_Graph::StaticStruct, Z_Construct_UScriptStruct_FOptimusSchemaAction_Graph_Statics::NewStructOps, TEXT("OptimusSchemaAction_Graph"), &Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Graph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusSchemaAction_Graph), 2932094770U) },
		{ FOptimusSchemaAction_Binding::StaticStruct, Z_Construct_UScriptStruct_FOptimusSchemaAction_Binding_Statics::NewStructOps, TEXT("OptimusSchemaAction_Binding"), &Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Binding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusSchemaAction_Binding), 2541434010U) },
		{ FOptimusSchemaAction_Resource::StaticStruct, Z_Construct_UScriptStruct_FOptimusSchemaAction_Resource_Statics::NewStructOps, TEXT("OptimusSchemaAction_Resource"), &Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Resource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusSchemaAction_Resource), 2210776999U) },
		{ FOptimusSchemaAction_Variable::StaticStruct, Z_Construct_UScriptStruct_FOptimusSchemaAction_Variable_Statics::NewStructOps, TEXT("OptimusSchemaAction_Variable"), &Z_Registration_Info_UScriptStruct_OptimusSchemaAction_Variable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusSchemaAction_Variable), 1846253319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchemaActions_h_2910743551(TEXT("/Script/OptimusEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchemaActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
