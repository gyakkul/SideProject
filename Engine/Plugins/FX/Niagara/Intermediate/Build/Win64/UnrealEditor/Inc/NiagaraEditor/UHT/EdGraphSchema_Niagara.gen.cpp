// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_Niagara.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_Niagara() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Niagara();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Niagara_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FNiagaraSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode;
class UScriptStruct* FNiagaraSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraSchemaAction_NewNode>()
{
	return FNiagaraSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InternalName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/EdGraphSchema_Niagara.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Public/EdGraphSchema_Niagara.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_InternalName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraphSchema_Niagara.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_InternalName = { "InternalName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSchemaAction_NewNode, InternalName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_InternalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_InternalName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewProp_InternalName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraSchemaAction_NewNode",
		sizeof(FNiagaraSchemaAction_NewNode),
		alignof(FNiagaraSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment;
class UScriptStruct* FNiagaraSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraSchemaAction_NewComment>()
{
	return FNiagaraSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EdGraphSchema_Niagara.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraSchemaAction_NewComment",
		sizeof(FNiagaraSchemaAction_NewComment),
		alignof(FNiagaraSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment.InnerSingleton;
	}
	void UEdGraphSchema_Niagara::StaticRegisterNativesUEdGraphSchema_Niagara()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_Niagara);
	UClass* Z_Construct_UClass_UEdGraphSchema_Niagara_NoRegister()
	{
		return UEdGraphSchema_Niagara::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_Niagara_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_Niagara.h" },
		{ "ModuleRelativePath", "Public/EdGraphSchema_Niagara.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_Niagara>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::ClassParams = {
		&UEdGraphSchema_Niagara::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_Niagara()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_Niagara.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_Niagara.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_Niagara_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_Niagara.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UEdGraphSchema_Niagara>()
	{
		return UEdGraphSchema_Niagara::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_Niagara);
	UEdGraphSchema_Niagara::~UEdGraphSchema_Niagara() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewNode_Statics::NewStructOps, TEXT("NiagaraSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSchemaAction_NewNode), 2839362532U) },
		{ FNiagaraSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSchemaAction_NewComment_Statics::NewStructOps, TEXT("NiagaraSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_NiagaraSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSchemaAction_NewComment), 2033609032U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_Niagara, UEdGraphSchema_Niagara::StaticClass, TEXT("UEdGraphSchema_Niagara"), &Z_Registration_Info_UClass_UEdGraphSchema_Niagara, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_Niagara), 3024115572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_4249618785(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_EdGraphSchema_Niagara_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
