// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraphNode::StaticRegisterNativesUBehaviorTreeGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeGraphNode);
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister()
	{
		return UBehaviorTreeGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Decorators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Decorators;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Services_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Services;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInjectedNode_MetaData[];
#endif
		static void NewProp_bInjectedNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInjectedNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraphNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_Inner = { "Decorators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_MetaData[] = {
		{ "Comment", "/** only some of behavior tree nodes support decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
		{ "ToolTip", "only some of behavior tree nodes support decorators" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators = { "Decorators", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode, Decorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBehaviorTreeGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_MetaData[] = {
		{ "Comment", "/** only some of behavior tree nodes support services */" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
		{ "ToolTip", "only some of behavior tree nodes support services" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_MetaData[] = {
		{ "Comment", "/** if set, this node was injected from subtree and shouldn't be edited */" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode.h" },
		{ "ToolTip", "if set, this node was injected from subtree and shouldn't be edited" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_SetBit(void* Obj)
	{
		((UBehaviorTreeGraphNode*)Obj)->bInjectedNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode = { "bInjectedNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBehaviorTreeGraphNode), &Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Decorators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_Services,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::NewProp_bInjectedNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::ClassParams = {
		&UBehaviorTreeGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeGraphNode.OuterSingleton, Z_Construct_UClass_UBehaviorTreeGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeGraphNode.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode>()
	{
		return UBehaviorTreeGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode);
	UBehaviorTreeGraphNode::~UBehaviorTreeGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeGraphNode, UBehaviorTreeGraphNode::StaticClass, TEXT("UBehaviorTreeGraphNode"), &Z_Registration_Info_UClass_UBehaviorTreeGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeGraphNode), 3131963972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_3026054491(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
