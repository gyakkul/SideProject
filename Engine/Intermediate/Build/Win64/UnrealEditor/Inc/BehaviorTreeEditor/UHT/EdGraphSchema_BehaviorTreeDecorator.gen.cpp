// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_BehaviorTreeDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_BehaviorTreeDecorator() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister();
	BEHAVIORTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FDecoratorSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDecoratorSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode;
class UScriptStruct* FDecoratorSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("DecoratorSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode.OuterSingleton;
}
template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<FDecoratorSchemaAction_NewNode>()
{
	return FDecoratorSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDecoratorSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DecoratorSchemaAction_NewNode",
		sizeof(FDecoratorSchemaAction_NewNode),
		alignof(FDecoratorSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode.InnerSingleton;
	}
	void UEdGraphSchema_BehaviorTreeDecorator::StaticRegisterNativesUEdGraphSchema_BehaviorTreeDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_BehaviorTreeDecorator);
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_NoRegister()
	{
		return UEdGraphSchema_BehaviorTreeDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PC_Boolean_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PC_Boolean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_BehaviorTreeDecorator.h" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTreeDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean = { "PC_Boolean", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphSchema_BehaviorTreeDecorator, PC_Boolean), METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::NewProp_PC_Boolean,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_BehaviorTreeDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::ClassParams = {
		&UEdGraphSchema_BehaviorTreeDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTreeDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTreeDecorator.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTreeDecorator.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UEdGraphSchema_BehaviorTreeDecorator>()
	{
		return UEdGraphSchema_BehaviorTreeDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_BehaviorTreeDecorator);
	UEdGraphSchema_BehaviorTreeDecorator::~UEdGraphSchema_BehaviorTreeDecorator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics::ScriptStructInfo[] = {
		{ FDecoratorSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FDecoratorSchemaAction_NewNode_Statics::NewStructOps, TEXT("DecoratorSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_DecoratorSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorSchemaAction_NewNode), 2224029383U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_BehaviorTreeDecorator, UEdGraphSchema_BehaviorTreeDecorator::StaticClass, TEXT("UEdGraphSchema_BehaviorTreeDecorator"), &Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTreeDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_BehaviorTreeDecorator), 2735518341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_2766862478(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTreeDecorator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
