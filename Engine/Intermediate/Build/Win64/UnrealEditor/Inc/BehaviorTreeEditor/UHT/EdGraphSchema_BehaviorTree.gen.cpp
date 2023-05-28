// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_BehaviorTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_BehaviorTree() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister();
	BEHAVIORTREEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FBehaviorTreeSchemaAction_AutoArrange>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FBehaviorTreeSchemaAction_AutoArrange cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange;
class UScriptStruct* FBehaviorTreeSchemaAction_AutoArrange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange, (UObject*)Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("BehaviorTreeSchemaAction_AutoArrange"));
	}
	return Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange.OuterSingleton;
}
template<> BEHAVIORTREEEDITOR_API UScriptStruct* StaticStruct<FBehaviorTreeSchemaAction_AutoArrange>()
{
	return FBehaviorTreeSchemaAction_AutoArrange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to auto arrange the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTree.h" },
		{ "ToolTip", "Action to auto arrange the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorTreeSchemaAction_AutoArrange>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BehaviorTreeSchemaAction_AutoArrange",
		sizeof(FBehaviorTreeSchemaAction_AutoArrange),
		alignof(FBehaviorTreeSchemaAction_AutoArrange),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange()
	{
		if (!Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange.InnerSingleton, Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange.InnerSingleton;
	}
	void UEdGraphSchema_BehaviorTree::StaticRegisterNativesUEdGraphSchema_BehaviorTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_BehaviorTree);
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree_NoRegister()
	{
		return UEdGraphSchema_BehaviorTree::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_BehaviorTree.h" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_BehaviorTree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_BehaviorTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::ClassParams = {
		&UEdGraphSchema_BehaviorTree::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_BehaviorTree()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTree.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_BehaviorTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTree.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UEdGraphSchema_BehaviorTree>()
	{
		return UEdGraphSchema_BehaviorTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_BehaviorTree);
	UEdGraphSchema_BehaviorTree::~UEdGraphSchema_BehaviorTree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics::ScriptStructInfo[] = {
		{ FBehaviorTreeSchemaAction_AutoArrange::StaticStruct, Z_Construct_UScriptStruct_FBehaviorTreeSchemaAction_AutoArrange_Statics::NewStructOps, TEXT("BehaviorTreeSchemaAction_AutoArrange"), &Z_Registration_Info_UScriptStruct_BehaviorTreeSchemaAction_AutoArrange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBehaviorTreeSchemaAction_AutoArrange), 1687873311U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_BehaviorTree, UEdGraphSchema_BehaviorTree::StaticClass, TEXT("UEdGraphSchema_BehaviorTree"), &Z_Registration_Info_UClass_UEdGraphSchema_BehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_BehaviorTree), 1428046168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_4273728006(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_EdGraphSchema_BehaviorTree_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
