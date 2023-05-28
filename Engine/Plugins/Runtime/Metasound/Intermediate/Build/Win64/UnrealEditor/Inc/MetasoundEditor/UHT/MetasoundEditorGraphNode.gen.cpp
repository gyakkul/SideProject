// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEditorGraphNode.h"
#include "MetasoundFrontendDocument.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditorGraphNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphExternalNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphExternalNode_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberNode_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphNode_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphOutput_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphOutputNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphOutputNode_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphVariable_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphVariableNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphVariableNode_NoRegister();
	METASOUNDFRONTEND_API UEnum* Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType();
	METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	void UMetasoundEditorGraphNode::StaticRegisterNativesUMetasoundEditorGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphNode);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphNode_NoRegister()
	{
		return UMetasoundEditorGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace Metasound\n" },
		{ "IncludePath", "MetasoundEditorGraphNode.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "namespace Metasound" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::ClassParams = {
		&UMetasoundEditorGraphNode::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphNode()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphNode.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphNode.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphNode>()
	{
		return UMetasoundEditorGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphNode);
	UMetasoundEditorGraphNode::~UMetasoundEditorGraphNode() {}
	void UMetasoundEditorGraphMemberNode::StaticRegisterNativesUMetasoundEditorGraphMemberNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphMemberNode);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberNode_NoRegister()
	{
		return UMetasoundEditorGraphMemberNode::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Node that represents a graph member */" },
		{ "IncludePath", "MetasoundEditorGraphNode.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Node that represents a graph member" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphMemberNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::ClassParams = {
		&UMetasoundEditorGraphMemberNode::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberNode()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphMemberNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphMemberNode.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphMemberNode.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphMemberNode>()
	{
		return UMetasoundEditorGraphMemberNode::StaticClass();
	}
	UMetasoundEditorGraphMemberNode::UMetasoundEditorGraphMemberNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphMemberNode);
	UMetasoundEditorGraphMemberNode::~UMetasoundEditorGraphMemberNode() {}
	void UMetasoundEditorGraphOutputNode::StaticRegisterNativesUMetasoundEditorGraphOutputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphOutputNode);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphOutputNode_NoRegister()
	{
		return UMetasoundEditorGraphOutputNode::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Node that represents a graph output */" },
		{ "IncludePath", "MetasoundEditorGraphNode.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Node that represents a graph output" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphOutputNode, Output), Z_Construct_UClass_UMetasoundEditorGraphOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::NewProp_Output,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphOutputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::ClassParams = {
		&UMetasoundEditorGraphOutputNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphOutputNode()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphOutputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphOutputNode.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphOutputNode.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphOutputNode>()
	{
		return UMetasoundEditorGraphOutputNode::StaticClass();
	}
	UMetasoundEditorGraphOutputNode::UMetasoundEditorGraphOutputNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphOutputNode);
	UMetasoundEditorGraphOutputNode::~UMetasoundEditorGraphOutputNode() {}
	void UMetasoundEditorGraphExternalNode::StaticRegisterNativesUMetasoundEditorGraphExternalNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphExternalNode);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphExternalNode_NoRegister()
	{
		return UMetasoundEditorGraphExternalNode::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsClassNative_MetaData[];
#endif
		static void NewProp_bIsClassNative_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClassNative;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphNode.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphExternalNode, ClassName), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_ClassName_MetaData)) }; // 2447492296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphExternalNode, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_NodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_NodeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative_MetaData[] = {
		{ "Comment", "// Whether or not the referenced class is natively defined\n// (false if defined in another asset). Cached from node\n// implementation for fast access when validated.\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Whether or not the referenced class is natively defined\n(false if defined in another asset). Cached from node\nimplementation for fast access when validated." },
	};
#endif
	void Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative_SetBit(void* Obj)
	{
		((UMetasoundEditorGraphExternalNode*)Obj)->bIsClassNative = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative = { "bIsClassNative", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetasoundEditorGraphExternalNode), &Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::NewProp_bIsClassNative,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphExternalNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::ClassParams = {
		&UMetasoundEditorGraphExternalNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphExternalNode()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphExternalNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphExternalNode.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphExternalNode.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphExternalNode>()
	{
		return UMetasoundEditorGraphExternalNode::StaticClass();
	}
	UMetasoundEditorGraphExternalNode::UMetasoundEditorGraphExternalNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphExternalNode);
	UMetasoundEditorGraphExternalNode::~UMetasoundEditorGraphExternalNode() {}
	void UMetasoundEditorGraphVariableNode::StaticRegisterNativesUMetasoundEditorGraphVariableNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphVariableNode);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphVariableNode_NoRegister()
	{
		return UMetasoundEditorGraphVariableNode::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClassType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Represents any of the several variable node types (Accessor, DeferredAccessor, Mutator). */" },
		{ "IncludePath", "MetasoundEditorGraphNode.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Represents any of the several variable node types (Accessor, DeferredAccessor, Mutator)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType_MetaData[] = {
		{ "Comment", "// Class type of the frontend node (Accessor, DeferredAccessor or Mutator)\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Class type of the frontend node (Accessor, DeferredAccessor or Mutator)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphVariableNode, ClassType), Z_Construct_UEnum_MetasoundFrontend_EMetasoundFrontendClassType, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType_MetaData)) }; // 3871696150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "// Class name of the frontend node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Class name of the frontend node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphVariableNode, ClassName), Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassName_MetaData)) }; // 2447492296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_NodeID_MetaData[] = {
		{ "Comment", "// ID of the frontend node.\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "ID of the frontend node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphVariableNode, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_NodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_NodeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_Variable_MetaData[] = {
		{ "Comment", "// Associated graph variable.\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphNode.h" },
		{ "ToolTip", "Associated graph variable." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphVariableNode, Variable), Z_Construct_UClass_UMetasoundEditorGraphVariable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_Variable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_NodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::NewProp_Variable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphVariableNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::ClassParams = {
		&UMetasoundEditorGraphVariableNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphVariableNode()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphVariableNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphVariableNode.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphVariableNode.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphVariableNode>()
	{
		return UMetasoundEditorGraphVariableNode::StaticClass();
	}
	UMetasoundEditorGraphVariableNode::UMetasoundEditorGraphVariableNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphVariableNode);
	UMetasoundEditorGraphVariableNode::~UMetasoundEditorGraphVariableNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorGraphNode, UMetasoundEditorGraphNode::StaticClass, TEXT("UMetasoundEditorGraphNode"), &Z_Registration_Info_UClass_UMetasoundEditorGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphNode), 4024298534U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphMemberNode, UMetasoundEditorGraphMemberNode::StaticClass, TEXT("UMetasoundEditorGraphMemberNode"), &Z_Registration_Info_UClass_UMetasoundEditorGraphMemberNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphMemberNode), 3487007034U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphOutputNode, UMetasoundEditorGraphOutputNode::StaticClass, TEXT("UMetasoundEditorGraphOutputNode"), &Z_Registration_Info_UClass_UMetasoundEditorGraphOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphOutputNode), 3002131878U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphExternalNode, UMetasoundEditorGraphExternalNode::StaticClass, TEXT("UMetasoundEditorGraphExternalNode"), &Z_Registration_Info_UClass_UMetasoundEditorGraphExternalNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphExternalNode), 434913284U) },
		{ Z_Construct_UClass_UMetasoundEditorGraphVariableNode, UMetasoundEditorGraphVariableNode::StaticClass, TEXT("UMetasoundEditorGraphVariableNode"), &Z_Registration_Info_UClass_UMetasoundEditorGraphVariableNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphVariableNode), 2054679722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_2747672017(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
