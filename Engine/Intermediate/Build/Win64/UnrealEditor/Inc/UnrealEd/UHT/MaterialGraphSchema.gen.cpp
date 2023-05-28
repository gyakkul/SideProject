// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphSchema();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphSchema_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References

static_assert(std::is_polymorphic<FMaterialGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMaterialGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode;
class UScriptStruct* FMaterialGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewNode>()
{
	return FMaterialGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_MaterialExpressionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add an expression node to the graph */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add an expression node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass_MetaData[] = {
		{ "Comment", "/** Class of expression we want to create */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Class of expression we want to create" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass = { "MaterialExpressionClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialGraphSchemaAction_NewNode, MaterialExpressionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewProp_MaterialExpressionClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewNode",
		sizeof(FMaterialGraphSchemaAction_NewNode),
		alignof(FMaterialGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialGraphSchemaAction_NewFunctionCall>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMaterialGraphSchemaAction_NewFunctionCall cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall;
class UScriptStruct* FMaterialGraphSchemaAction_NewFunctionCall::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewFunctionCall"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewFunctionCall>()
{
	return FMaterialGraphSchemaAction_NewFunctionCall::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a Material Function call to the graph */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add a Material Function call to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewFunctionCall>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath_MetaData[] = {
		{ "Comment", "/** Path to function that we want to call */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Path to function that we want to call" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath = { "FunctionPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialGraphSchemaAction_NewFunctionCall, FunctionPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewProp_FunctionPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewFunctionCall",
		sizeof(FMaterialGraphSchemaAction_NewFunctionCall),
		alignof(FMaterialGraphSchemaAction_NewFunctionCall),
		Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialGraphSchemaAction_NewComposite>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMaterialGraphSchemaAction_NewComposite cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite;
class UScriptStruct* FMaterialGraphSchemaAction_NewComposite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewComposite"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewComposite>()
{
	return FMaterialGraphSchemaAction_NewComposite::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a composite node to the graph */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add a composite node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewComposite>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewComposite",
		sizeof(FMaterialGraphSchemaAction_NewComposite),
		alignof(FMaterialGraphSchemaAction_NewComposite),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMaterialGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment;
class UScriptStruct* FMaterialGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewComment>()
{
	return FMaterialGraphSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a comment node to the graph */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add a comment node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewComment",
		sizeof(FMaterialGraphSchemaAction_NewComment),
		alignof(FMaterialGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialGraphSchemaAction_NewNamedRerouteUsage>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMaterialGraphSchemaAction_NewNamedRerouteUsage cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage;
class UScriptStruct* FMaterialGraphSchemaAction_NewNamedRerouteUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_NewNamedRerouteUsage"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_NewNamedRerouteUsage>()
{
	return FMaterialGraphSchemaAction_NewNamedRerouteUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Declaration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a local variable usage to the graph */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to add a local variable usage to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_NewNamedRerouteUsage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "Comment", "// Declaration that we want to add an usage of\n" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Declaration that we want to add an usage of" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialGraphSchemaAction_NewNamedRerouteUsage, Declaration), Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewProp_Declaration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewProp_Declaration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_NewNamedRerouteUsage",
		sizeof(FMaterialGraphSchemaAction_NewNamedRerouteUsage),
		alignof(FMaterialGraphSchemaAction_NewNamedRerouteUsage),
		Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialGraphSchemaAction_Paste>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMaterialGraphSchemaAction_Paste cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste;
class UScriptStruct* FMaterialGraphSchemaAction_Paste::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("MaterialGraphSchemaAction_Paste"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FMaterialGraphSchemaAction_Paste>()
{
	return FMaterialGraphSchemaAction_Paste::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialGraphSchemaAction_Paste>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MaterialGraphSchemaAction_Paste",
		sizeof(FMaterialGraphSchemaAction_Paste),
		alignof(FMaterialGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste.InnerSingleton, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste.InnerSingleton;
	}
	void UMaterialGraphSchema::StaticRegisterNativesUMaterialGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphSchema);
	UClass* Z_Construct_UClass_UMaterialGraphSchema_NoRegister()
	{
		return UMaterialGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphSchema_Statics::ClassParams = {
		&UMaterialGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphSchema.OuterSingleton, Z_Construct_UClass_UMaterialGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphSchema.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphSchema>()
	{
		return UMaterialGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphSchema);
	UMaterialGraphSchema::~UMaterialGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FMaterialGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("MaterialGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGraphSchemaAction_NewNode), 21206828U) },
		{ FMaterialGraphSchemaAction_NewFunctionCall::StaticStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics::NewStructOps, TEXT("MaterialGraphSchemaAction_NewFunctionCall"), &Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewFunctionCall, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGraphSchemaAction_NewFunctionCall), 1681402859U) },
		{ FMaterialGraphSchemaAction_NewComposite::StaticStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics::NewStructOps, TEXT("MaterialGraphSchemaAction_NewComposite"), &Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComposite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGraphSchemaAction_NewComposite), 311038313U) },
		{ FMaterialGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("MaterialGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGraphSchemaAction_NewComment), 138081465U) },
		{ FMaterialGraphSchemaAction_NewNamedRerouteUsage::StaticStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics::NewStructOps, TEXT("MaterialGraphSchemaAction_NewNamedRerouteUsage"), &Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_NewNamedRerouteUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGraphSchemaAction_NewNamedRerouteUsage), 1570348898U) },
		{ FMaterialGraphSchemaAction_Paste::StaticStruct, Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics::NewStructOps, TEXT("MaterialGraphSchemaAction_Paste"), &Z_Registration_Info_UScriptStruct_MaterialGraphSchemaAction_Paste, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialGraphSchemaAction_Paste), 2343379155U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphSchema, UMaterialGraphSchema::StaticClass, TEXT("UMaterialGraphSchema"), &Z_Registration_Info_UClass_UMaterialGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphSchema), 3621953465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_1254473486(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
