// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationStateMachineSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateMachineSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineSchema();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FEdGraphSchemaAction_NewStateNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_NewStateNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode;
class UScriptStruct* FEdGraphSchemaAction_NewStateNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EdGraphSchemaAction_NewStateNode"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_NewStateNode>()
{
	return FEdGraphSchemaAction_NewStateNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewStateNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_NewStateNode",
		sizeof(FEdGraphSchemaAction_NewStateNode),
		alignof(FEdGraphSchemaAction_NewStateNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_NewStateComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_NewStateComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment;
class UScriptStruct* FEdGraphSchemaAction_NewStateComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EdGraphSchemaAction_NewStateComment"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_NewStateComment>()
{
	return FEdGraphSchemaAction_NewStateComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewStateComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_NewStateComment",
		sizeof(FEdGraphSchemaAction_NewStateComment),
		alignof(FEdGraphSchemaAction_NewStateComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment.InnerSingleton;
	}
	void UAnimationStateMachineSchema::StaticRegisterNativesUAnimationStateMachineSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationStateMachineSchema);
	UClass* Z_Construct_UClass_UAnimationStateMachineSchema_NoRegister()
	{
		return UAnimationStateMachineSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationStateMachineSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationStateMachineSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationStateMachineSchema.h" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationStateMachineSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateMachineSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateMachineSchema_Statics::ClassParams = {
		&UAnimationStateMachineSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationStateMachineSchema()
	{
		if (!Z_Registration_Info_UClass_UAnimationStateMachineSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationStateMachineSchema.OuterSingleton, Z_Construct_UClass_UAnimationStateMachineSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationStateMachineSchema.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationStateMachineSchema>()
	{
		return UAnimationStateMachineSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateMachineSchema);
	UAnimationStateMachineSchema::~UAnimationStateMachineSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics::ScriptStructInfo[] = {
		{ FEdGraphSchemaAction_NewStateNode::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateNode_Statics::NewStructOps, TEXT("EdGraphSchemaAction_NewStateNode"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_NewStateNode), 3400630943U) },
		{ FEdGraphSchemaAction_NewStateComment::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewStateComment_Statics::NewStructOps, TEXT("EdGraphSchemaAction_NewStateComment"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_NewStateComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_NewStateComment), 3883598730U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationStateMachineSchema, UAnimationStateMachineSchema::StaticClass, TEXT("UAnimationStateMachineSchema"), &Z_Registration_Info_UClass_UAnimationStateMachineSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationStateMachineSchema), 1447981949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_4098298176(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
