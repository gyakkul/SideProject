// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/EdGraphSchema_CustomizableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_CustomizableObject() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_CustomizableObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_CustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FCustomizableObjectSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FCustomizableObjectSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode;
class UScriptStruct* FCustomizableObjectSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectSchemaAction_NewNode>()
{
	return FCustomizableObjectSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/MuCOE/EdGraphSchema_CustomizableObject.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Classes/MuCOE/EdGraphSchema_CustomizableObject.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"CustomizableObjectSchemaAction_NewNode",
		sizeof(FCustomizableObjectSchemaAction_NewNode),
		alignof(FCustomizableObjectSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCustomizableObjectSchemaAction_Paste>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FCustomizableObjectSchemaAction_Paste cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste;
class UScriptStruct* FCustomizableObjectSchemaAction_Paste::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectSchemaAction_Paste"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectSchemaAction_Paste>()
{
	return FCustomizableObjectSchemaAction_Paste::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Classes/MuCOE/EdGraphSchema_CustomizableObject.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectSchemaAction_Paste>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"CustomizableObjectSchemaAction_Paste",
		sizeof(FCustomizableObjectSchemaAction_Paste),
		alignof(FCustomizableObjectSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste.InnerSingleton;
	}
	void UEdGraphSchema_CustomizableObject::StaticRegisterNativesUEdGraphSchema_CustomizableObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_CustomizableObject);
	UClass* Z_Construct_UClass_UEdGraphSchema_CustomizableObject_NoRegister()
	{
		return UEdGraphSchema_CustomizableObject::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/EdGraphSchema_CustomizableObject.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/EdGraphSchema_CustomizableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_CustomizableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::ClassParams = {
		&UEdGraphSchema_CustomizableObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_CustomizableObject()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_CustomizableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_CustomizableObject.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_CustomizableObject.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UEdGraphSchema_CustomizableObject>()
	{
		return UEdGraphSchema_CustomizableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_CustomizableObject);
	UEdGraphSchema_CustomizableObject::~UEdGraphSchema_CustomizableObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_NewNode_Statics::NewStructOps, TEXT("CustomizableObjectSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectSchemaAction_NewNode), 338289438U) },
		{ FCustomizableObjectSchemaAction_Paste::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectSchemaAction_Paste_Statics::NewStructOps, TEXT("CustomizableObjectSchemaAction_Paste"), &Z_Registration_Info_UScriptStruct_CustomizableObjectSchemaAction_Paste, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectSchemaAction_Paste), 2809552401U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_CustomizableObject, UEdGraphSchema_CustomizableObject::StaticClass, TEXT("UEdGraphSchema_CustomizableObject"), &Z_Registration_Info_UClass_UEdGraphSchema_CustomizableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_CustomizableObject), 49520209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_1456515204(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_EdGraphSchema_CustomizableObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
