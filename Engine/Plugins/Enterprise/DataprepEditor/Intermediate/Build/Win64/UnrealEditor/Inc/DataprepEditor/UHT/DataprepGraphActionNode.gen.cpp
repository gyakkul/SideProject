// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepGraph/DataprepGraphActionNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepGraphActionNode() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAsset_NoRegister();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphActionGroupNode();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphActionGroupNode_NoRegister();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphActionNode();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphActionNode_NoRegister();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphActionStepNode();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphActionStepNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DataprepEditor();
// End Cross Module References
	void UDataprepGraphActionStepNode::StaticRegisterNativesUDataprepGraphActionStepNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepGraphActionStepNode);
	UClass* Z_Construct_UClass_UDataprepGraphActionStepNode_NoRegister()
	{
		return UDataprepGraphActionStepNode::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepGraphActionStepNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepActionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataprepActionAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UDataprepGraphActionStepNode class is used as the UEdGraphNode associated\n * to an SGraphNode in order to display the action's steps in a SDataprepGraphEditor.\n */" },
		{ "IncludePath", "DataprepGraph/DataprepGraphActionNode.h" },
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
		{ "ToolTip", "The UDataprepGraphActionStepNode class is used as the UEdGraphNode associated\nto an SGraphNode in order to display the action's steps in a SDataprepGraphEditor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_DataprepActionAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_DataprepActionAsset = { "DataprepActionAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionStepNode, DataprepActionAsset), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_DataprepActionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_DataprepActionAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_StepIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionStepNode, StepIndex), METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_StepIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_StepIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_DataprepActionAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::NewProp_StepIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepGraphActionStepNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::ClassParams = {
		&UDataprepGraphActionStepNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepGraphActionStepNode()
	{
		if (!Z_Registration_Info_UClass_UDataprepGraphActionStepNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepGraphActionStepNode.OuterSingleton, Z_Construct_UClass_UDataprepGraphActionStepNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepGraphActionStepNode.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDataprepGraphActionStepNode>()
	{
		return UDataprepGraphActionStepNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepGraphActionStepNode);
	UDataprepGraphActionStepNode::~UDataprepGraphActionStepNode() {}
	void UDataprepGraphActionNode::StaticRegisterNativesUDataprepGraphActionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepGraphActionNode);
	UClass* Z_Construct_UClass_UDataprepGraphActionNode_NoRegister()
	{
		return UDataprepGraphActionNode::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepGraphActionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepActionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataprepActionAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepAssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DataprepAssetPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepGraphActionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UDataprepGraphActionNode class is used as the UEdGraphNode associated\n * to an SGraphNode in order to display actions in a SDataprepGraphEditor.\n */" },
		{ "IncludePath", "DataprepGraph/DataprepGraphActionNode.h" },
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
		{ "ToolTip", "The UDataprepGraphActionNode class is used as the UEdGraphNode associated\nto an SGraphNode in order to display actions in a SDataprepGraphEditor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ActionTitle_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ActionTitle = { "ActionTitle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionNode, ActionTitle), METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ActionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ActionTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepActionAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepActionAsset = { "DataprepActionAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionNode, DataprepActionAsset), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepActionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepActionAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepAssetPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepAssetPtr = { "DataprepAssetPtr", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionNode, DataprepAssetPtr), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepAssetPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ExecutionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ExecutionOrder = { "ExecutionOrder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionNode, ExecutionOrder), METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ExecutionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ExecutionOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepGraphActionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ActionTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepActionAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_DataprepAssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionNode_Statics::NewProp_ExecutionOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepGraphActionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepGraphActionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepGraphActionNode_Statics::ClassParams = {
		&UDataprepGraphActionNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepGraphActionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepGraphActionNode()
	{
		if (!Z_Registration_Info_UClass_UDataprepGraphActionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepGraphActionNode.OuterSingleton, Z_Construct_UClass_UDataprepGraphActionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepGraphActionNode.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDataprepGraphActionNode>()
	{
		return UDataprepGraphActionNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepGraphActionNode);
	UDataprepGraphActionNode::~UDataprepGraphActionNode() {}
	void UDataprepGraphActionGroupNode::StaticRegisterNativesUDataprepGraphActionGroupNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepGraphActionGroupNode);
	UClass* Z_Construct_UClass_UDataprepGraphActionGroupNode_NoRegister()
	{
		return UDataprepGraphActionGroupNode::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeTitle;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepAssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DataprepAssetPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataprepGraph/DataprepGraphActionNode.h" },
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_ExecutionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_ExecutionOrder = { "ExecutionOrder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionGroupNode, ExecutionOrder), METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_ExecutionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_ExecutionOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionGroupNode, NodeTitle), METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_NodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_NodeTitle_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionGroupNode, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_DataprepAssetPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphActionNode.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_DataprepAssetPtr = { "DataprepAssetPtr", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepGraphActionGroupNode, DataprepAssetPtr), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_DataprepAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_DataprepAssetPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_ExecutionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_NodeTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::NewProp_DataprepAssetPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepGraphActionGroupNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::ClassParams = {
		&UDataprepGraphActionGroupNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepGraphActionGroupNode()
	{
		if (!Z_Registration_Info_UClass_UDataprepGraphActionGroupNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepGraphActionGroupNode.OuterSingleton, Z_Construct_UClass_UDataprepGraphActionGroupNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepGraphActionGroupNode.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDataprepGraphActionGroupNode>()
	{
		return UDataprepGraphActionGroupNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepGraphActionGroupNode);
	UDataprepGraphActionGroupNode::~UDataprepGraphActionGroupNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphActionNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphActionNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepGraphActionStepNode, UDataprepGraphActionStepNode::StaticClass, TEXT("UDataprepGraphActionStepNode"), &Z_Registration_Info_UClass_UDataprepGraphActionStepNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepGraphActionStepNode), 1543725586U) },
		{ Z_Construct_UClass_UDataprepGraphActionNode, UDataprepGraphActionNode::StaticClass, TEXT("UDataprepGraphActionNode"), &Z_Registration_Info_UClass_UDataprepGraphActionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepGraphActionNode), 112849033U) },
		{ Z_Construct_UClass_UDataprepGraphActionGroupNode, UDataprepGraphActionGroupNode::StaticClass, TEXT("UDataprepGraphActionGroupNode"), &Z_Registration_Info_UClass_UDataprepGraphActionGroupNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepGraphActionGroupNode), 1736919554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphActionNode_h_664291721(TEXT("/Script/DataprepEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphActionNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphActionNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
