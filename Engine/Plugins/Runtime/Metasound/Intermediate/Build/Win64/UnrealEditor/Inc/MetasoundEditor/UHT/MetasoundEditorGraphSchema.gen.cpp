// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEditorGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditorGraphSchema() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphSchema();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphSchema_NoRegister();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction;
class UScriptStruct* FMetasoundGraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction>()
{
	return FMetasoundGraphSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// namespace Metasound\n" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "namespace Metasound" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction",
		sizeof(FMetasoundGraphSchemaAction),
		alignof(FMetasoundGraphSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_NodeWithMultipleOutputs cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs;
class UScriptStruct* FMetasoundGraphSchemaAction_NodeWithMultipleOutputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NodeWithMultipleOutputs"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>()
{
	return FMetasoundGraphSchemaAction_NodeWithMultipleOutputs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is used to combine functionality for nodes that can have multiple outputs and should never be directly instantiated. */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "This is used to combine functionality for nodes that can have multiple outputs and should never be directly instantiated." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NodeWithMultipleOutputs",
		sizeof(FMetasoundGraphSchemaAction_NodeWithMultipleOutputs),
		alignof(FMetasoundGraphSchemaAction_NodeWithMultipleOutputs),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewInput>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>(), "USTRUCT FMetasoundGraphSchemaAction_NewInput cannot be polymorphic unless super FMetasoundGraphSchemaAction_NodeWithMultipleOutputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput;
class UScriptStruct* FMetasoundGraphSchemaAction_NewInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewInput"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewInput>()
{
	return FMetasoundGraphSchemaAction_NewInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add an input reference to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Action to add an input reference to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundGraphSchemaAction_NewInput, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewProp_NodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewProp_NodeID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewProp_NodeID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewInput",
		sizeof(FMetasoundGraphSchemaAction_NewInput),
		alignof(FMetasoundGraphSchemaAction_NewInput),
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_PromoteToInput>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>(), "USTRUCT FMetasoundGraphSchemaAction_PromoteToInput cannot be polymorphic unless super FMetasoundGraphSchemaAction_NodeWithMultipleOutputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput;
class UScriptStruct* FMetasoundGraphSchemaAction_PromoteToInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_PromoteToInput"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_PromoteToInput>()
{
	return FMetasoundGraphSchemaAction_PromoteToInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Promotes an input to a graph input, using its respective literal value as the default value */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Promotes an input to a graph input, using its respective literal value as the default value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_PromoteToInput>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs,
		&NewStructOps,
		"MetasoundGraphSchemaAction_PromoteToInput",
		sizeof(FMetasoundGraphSchemaAction_PromoteToInput),
		alignof(FMetasoundGraphSchemaAction_PromoteToInput),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewOutput>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_NewOutput cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput;
class UScriptStruct* FMetasoundGraphSchemaAction_NewOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewOutput"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewOutput>()
{
	return FMetasoundGraphSchemaAction_NewOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Adds an output to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Adds an output to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundGraphSchemaAction_NewOutput, NodeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewProp_NodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewProp_NodeID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewProp_NodeID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewOutput",
		sizeof(FMetasoundGraphSchemaAction_NewOutput),
		alignof(FMetasoundGraphSchemaAction_NewOutput),
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_PromoteToOutput>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_PromoteToOutput cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput;
class UScriptStruct* FMetasoundGraphSchemaAction_PromoteToOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_PromoteToOutput"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_PromoteToOutput>()
{
	return FMetasoundGraphSchemaAction_PromoteToOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Promotes a node output to a graph output */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Promotes a node output to a graph output" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_PromoteToOutput>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_PromoteToOutput",
		sizeof(FMetasoundGraphSchemaAction_PromoteToOutput),
		alignof(FMetasoundGraphSchemaAction_PromoteToOutput),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>(), "USTRUCT FMetasoundGraphSchemaAction_NewVariableNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NodeWithMultipleOutputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode;
class UScriptStruct* FMetasoundGraphSchemaAction_NewVariableNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewVariableNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewVariableNode>()
{
	return FMetasoundGraphSchemaAction_NewVariableNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Adds a variable node to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Adds a variable node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewVariableNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableID = { "VariableID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundGraphSchemaAction_NewVariableNode, VariableID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewProp_VariableID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewVariableNode",
		sizeof(FMetasoundGraphSchemaAction_NewVariableNode),
		alignof(FMetasoundGraphSchemaAction_NewVariableNode),
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableAccessorNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableNode>(), "USTRUCT FMetasoundGraphSchemaAction_NewVariableAccessorNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NewVariableNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode;
class UScriptStruct* FMetasoundGraphSchemaAction_NewVariableAccessorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewVariableAccessorNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewVariableAccessorNode>()
{
	return FMetasoundGraphSchemaAction_NewVariableAccessorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Adds a variable node to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Adds a variable node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewVariableAccessorNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewVariableAccessorNode",
		sizeof(FMetasoundGraphSchemaAction_NewVariableAccessorNode),
		alignof(FMetasoundGraphSchemaAction_NewVariableAccessorNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableNode>(), "USTRUCT FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NewVariableNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode;
class UScriptStruct* FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode>()
{
	return FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Adds a variable node to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Adds a variable node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode",
		sizeof(FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode),
		alignof(FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableMutatorNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NewVariableNode>(), "USTRUCT FMetasoundGraphSchemaAction_NewVariableMutatorNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NewVariableNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode;
class UScriptStruct* FMetasoundGraphSchemaAction_NewVariableMutatorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewVariableMutatorNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewVariableMutatorNode>()
{
	return FMetasoundGraphSchemaAction_NewVariableMutatorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Adds a variable node to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Adds a variable node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewVariableMutatorNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewVariableMutatorNode",
		sizeof(FMetasoundGraphSchemaAction_NewVariableMutatorNode),
		alignof(FMetasoundGraphSchemaAction_NewVariableMutatorNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>(), "USTRUCT FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NodeWithMultipleOutputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode;
class UScriptStruct* FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode>()
{
	return FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Promotes an input to a graph variable & respective getter node, using its respective literal value as the default value */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Promotes an input to a graph variable & respective getter node, using its respective literal value as the default value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs,
		&NewStructOps,
		"MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode",
		sizeof(FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode),
		alignof(FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode;
class UScriptStruct* FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode>()
{
	return FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Promotes an output to a graph variable & respective setter node, using its respective literal value as the default value */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Promotes an output to a graph variable & respective setter node, using its respective literal value as the default value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode",
		sizeof(FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode),
		alignof(FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>(), "USTRUCT FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NodeWithMultipleOutputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode;
class UScriptStruct* FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode>()
{
	return FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Promotes an input to a graph variable & respective deferred getter node, using its respective literal value as the default value */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Promotes an input to a graph variable & respective deferred getter node, using its respective literal value as the default value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs,
		&NewStructOps,
		"MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode",
		sizeof(FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode),
		alignof(FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewNode>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NodeWithMultipleOutputs>(), "USTRUCT FMetasoundGraphSchemaAction_NewNode cannot be polymorphic unless super FMetasoundGraphSchemaAction_NodeWithMultipleOutputs is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode;
class UScriptStruct* FMetasoundGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewNode>()
{
	return FMetasoundGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewNode",
		sizeof(FMetasoundGraphSchemaAction_NewNode),
		alignof(FMetasoundGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewFromSelected>() == std::is_polymorphic<FMetasoundGraphSchemaAction_NewNode>(), "USTRUCT FMetasoundGraphSchemaAction_NewFromSelected cannot be polymorphic unless super FMetasoundGraphSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected;
class UScriptStruct* FMetasoundGraphSchemaAction_NewFromSelected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewFromSelected"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewFromSelected>()
{
	return FMetasoundGraphSchemaAction_NewFromSelected::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add nodes to the graph based on selected objects*/" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewFromSelected>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewFromSelected",
		sizeof(FMetasoundGraphSchemaAction_NewFromSelected),
		alignof(FMetasoundGraphSchemaAction_NewFromSelected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewReroute>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_NewReroute cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute;
class UScriptStruct* FMetasoundGraphSchemaAction_NewReroute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewReroute"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewReroute>()
{
	return FMetasoundGraphSchemaAction_NewReroute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new reroute node */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Action to create new reroute node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewReroute>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewReroute",
		sizeof(FMetasoundGraphSchemaAction_NewReroute),
		alignof(FMetasoundGraphSchemaAction_NewReroute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_NewComment>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_NewComment cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment;
class UScriptStruct* FMetasoundGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_NewComment>()
{
	return FMetasoundGraphSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_NewComment",
		sizeof(FMetasoundGraphSchemaAction_NewComment),
		alignof(FMetasoundGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetasoundGraphSchemaAction_Paste>() == std::is_polymorphic<FMetasoundGraphSchemaAction>(), "USTRUCT FMetasoundGraphSchemaAction_Paste cannot be polymorphic unless super FMetasoundGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste;
class UScriptStruct* FMetasoundGraphSchemaAction_Paste::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundGraphSchemaAction_Paste"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundGraphSchemaAction_Paste>()
{
	return FMetasoundGraphSchemaAction_Paste::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundGraphSchemaAction_Paste>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction,
		&NewStructOps,
		"MetasoundGraphSchemaAction_Paste",
		sizeof(FMetasoundGraphSchemaAction_Paste),
		alignof(FMetasoundGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste.InnerSingleton;
	}
	void UMetasoundEditorGraphSchema::StaticRegisterNativesUMetasoundEditorGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphSchema);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphSchema_NoRegister()
	{
		return UMetasoundEditorGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphSchema.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::ClassParams = {
		&UMetasoundEditorGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphSchema.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphSchema.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphSchema>()
	{
		return UMetasoundEditorGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphSchema);
	UMetasoundEditorGraphSchema::~UMetasoundEditorGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FMetasoundGraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction), 2068510827U) },
		{ FMetasoundGraphSchemaAction_NodeWithMultipleOutputs::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NodeWithMultipleOutputs_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NodeWithMultipleOutputs"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NodeWithMultipleOutputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NodeWithMultipleOutputs), 2914727387U) },
		{ FMetasoundGraphSchemaAction_NewInput::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewInput_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewInput"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewInput), 2269140346U) },
		{ FMetasoundGraphSchemaAction_PromoteToInput::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToInput_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_PromoteToInput"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_PromoteToInput), 847353529U) },
		{ FMetasoundGraphSchemaAction_NewOutput::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewOutput_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewOutput"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewOutput), 3249735658U) },
		{ FMetasoundGraphSchemaAction_PromoteToOutput::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToOutput_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_PromoteToOutput"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_PromoteToOutput), 1485817144U) },
		{ FMetasoundGraphSchemaAction_NewVariableNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewVariableNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewVariableNode), 2346932444U) },
		{ FMetasoundGraphSchemaAction_NewVariableAccessorNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableAccessorNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewVariableAccessorNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableAccessorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewVariableAccessorNode), 1918487826U) },
		{ FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableDeferredAccessorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewVariableDeferredAccessorNode), 475880506U) },
		{ FMetasoundGraphSchemaAction_NewVariableMutatorNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewVariableMutatorNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewVariableMutatorNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewVariableMutatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewVariableMutatorNode), 3201376126U) },
		{ FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_AccessorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_PromoteToVariable_AccessorNode), 4161137833U) },
		{ FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_MutatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_PromoteToVariable_MutatorNode), 2277424134U) },
		{ FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_PromoteToVariable_DeferredAccessorNode), 225543349U) },
		{ FMetasoundGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewNode), 1959018892U) },
		{ FMetasoundGraphSchemaAction_NewFromSelected::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewFromSelected_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewFromSelected"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewFromSelected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewFromSelected), 301542272U) },
		{ FMetasoundGraphSchemaAction_NewReroute::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewReroute_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewReroute"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewReroute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewReroute), 3093650051U) },
		{ FMetasoundGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_NewComment), 2983542715U) },
		{ FMetasoundGraphSchemaAction_Paste::StaticStruct, Z_Construct_UScriptStruct_FMetasoundGraphSchemaAction_Paste_Statics::NewStructOps, TEXT("MetasoundGraphSchemaAction_Paste"), &Z_Registration_Info_UScriptStruct_MetasoundGraphSchemaAction_Paste, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundGraphSchemaAction_Paste), 380890421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorGraphSchema, UMetasoundEditorGraphSchema::StaticClass, TEXT("UMetasoundEditorGraphSchema"), &Z_Registration_Info_UClass_UMetasoundEditorGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphSchema), 669385370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_2332454785(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
