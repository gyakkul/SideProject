// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeDecoratorGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeDecoratorGraphNode() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeDecoratorGraphNode::StaticRegisterNativesUBehaviorTreeDecoratorGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeDecoratorGraphNode);
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister()
	{
		return UBehaviorTreeDecoratorGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeDecoratorGraphNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeDecoratorGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::ClassParams = {
		&UBehaviorTreeDecoratorGraphNode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode.OuterSingleton, Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeDecoratorGraphNode>()
	{
		return UBehaviorTreeDecoratorGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeDecoratorGraphNode);
	UBehaviorTreeDecoratorGraphNode::~UBehaviorTreeDecoratorGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode, UBehaviorTreeDecoratorGraphNode::StaticClass, TEXT("UBehaviorTreeDecoratorGraphNode"), &Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeDecoratorGraphNode), 503996879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_2834165237(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
