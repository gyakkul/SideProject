// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "../../AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTree() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBehaviorTree::StaticRegisterNativesUBehaviorTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTree);
	UClass* Z_Construct_UClass_UBehaviorTree_NoRegister()
	{
		return UBehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BTGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BTGraph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardAsset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootDecorators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootDecorators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootDecorators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootDecoratorOps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootDecoratorOps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootDecoratorOps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/BehaviorTree.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** root node of loaded tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "root node of loaded tree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTree, RootNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph_MetaData[] = {
		{ "Comment", "/** Graph for Behavior Tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "Graph for Behavior Tree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph = { "BTGraph", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTree, BTGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) }; // 4051615663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "/** Info about the graphs we last edited */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "Info about the graphs we last edited" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTree, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_MetaData)) }; // 4051615663
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "Comment", "/** blackboard asset for this tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "blackboard asset for this tree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTree, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_Inner = { "RootDecorators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_MetaData[] = {
		{ "Comment", "/** root level decorators, used by subtrees */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "root level decorators, used by subtrees" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators = { "RootDecorators", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTree, RootDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_Inner = { "RootDecoratorOps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(nullptr, 0) }; // 2871809495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_MetaData[] = {
		{ "Comment", "/** logic operators for root level decorators, used by subtrees  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "logic operators for root level decorators, used by subtrees" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps = { "RootDecoratorOps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTree, RootDecoratorOps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_MetaData)) }; // 2871809495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBehaviorTree_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlackboardAssetProvider_NoRegister, (int32)VTABLE_OFFSET(UBehaviorTree, IBlackboardAssetProvider), false },  // 2264754034
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTree_Statics::ClassParams = {
		&UBehaviorTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTree_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTree()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton, Z_Construct_UClass_UBehaviorTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTree>()
	{
		return UBehaviorTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTree);
	UBehaviorTree::~UBehaviorTree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTree, UBehaviorTree::StaticClass, TEXT("UBehaviorTree"), &Z_Registration_Info_UClass_UBehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTree), 1132366161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_2930163828(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
