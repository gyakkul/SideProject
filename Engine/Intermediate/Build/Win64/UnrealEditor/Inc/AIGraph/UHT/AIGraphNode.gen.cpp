// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraphNode.h"
#include "AIGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraphNode() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode_NoRegister();
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphNodeClassData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
// End Cross Module References
	void UAIGraphNode::StaticRegisterNativesUAIGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIGraphNode);
	UClass* Z_Construct_UClass_UAIGraphNode_NoRegister()
	{
		return UAIGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UAIGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentNode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopySubNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CopySubNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSubNode_MetaData[];
#endif
		static void NewProp_bIsSubNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSubNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIGraphNode.h" },
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ClassData_MetaData[] = {
		{ "Comment", "/** instance class */" },
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
		{ "ToolTip", "instance class" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ClassData = { "ClassData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraphNode, ClassData), Z_Construct_UScriptStruct_FGraphNodeClassData, METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ClassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ClassData_MetaData)) }; // 1802589264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_NodeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_NodeInstance = { "NodeInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraphNode, NodeInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_NodeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_NodeInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraphNode, ParentNode), Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ParentNode_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes_Inner = { "SubNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAIGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes = { "SubNodes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraphNode, SubNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_CopySubNodeIndex_MetaData[] = {
		{ "Comment", "/** subnode index assigned during copy operation to connect nodes again on paste */" },
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
		{ "ToolTip", "subnode index assigned during copy operation to connect nodes again on paste" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_CopySubNodeIndex = { "CopySubNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraphNode, CopySubNodeIndex), METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_CopySubNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_CopySubNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Comment", "/** if set, all modifications (including delete/cut) are disabled */" },
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
		{ "ToolTip", "if set, all modifications (including delete/cut) are disabled" },
	};
#endif
	void Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UAIGraphNode*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAIGraphNode), &Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode_MetaData[] = {
		{ "Comment", "/** if set, this node will be always considered as subnode */" },
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
		{ "ToolTip", "if set, this node will be always considered as subnode" },
	};
#endif
	void Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode_SetBit(void* Obj)
	{
		((UAIGraphNode*)Obj)->bIsSubNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode = { "bIsSubNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAIGraphNode), &Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Comment", "/** error message for node */" },
		{ "ModuleRelativePath", "Classes/AIGraphNode.h" },
		{ "ToolTip", "error message for node" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraphNode, ErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ClassData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_NodeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_SubNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_CopySubNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_bIsSubNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraphNode_Statics::NewProp_ErrorMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIGraphNode_Statics::ClassParams = {
		&UAIGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIGraphNode()
	{
		if (!Z_Registration_Info_UClass_UAIGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIGraphNode.OuterSingleton, Z_Construct_UClass_UAIGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIGraphNode.OuterSingleton;
	}
	template<> AIGRAPH_API UClass* StaticClass<UAIGraphNode>()
	{
		return UAIGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIGraphNode);
	UAIGraphNode::~UAIGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIGraphNode, UAIGraphNode::StaticClass, TEXT("UAIGraphNode"), &Z_Registration_Info_UClass_UAIGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIGraphNode), 390799482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_2147677644(TEXT("/Script/AIGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
