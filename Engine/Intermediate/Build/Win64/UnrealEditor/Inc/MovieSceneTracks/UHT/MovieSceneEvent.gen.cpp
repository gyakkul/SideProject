// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable;
class UScriptStruct* FMovieSceneEventPayloadVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventPayloadVariable"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventPayloadVariable>()
{
	return FMovieSceneEventPayloadVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Value definition for any type-agnostic variable (exported as text) */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Value definition for any type-agnostic variable (exported as text)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventPayloadVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Sequencer|Event" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventPayloadVariable, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventPayloadVariable",
		sizeof(FMovieSceneEventPayloadVariable),
		alignof(FMovieSceneEventPayloadVariable),
		Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs;
class UScriptStruct* FMovieSceneEventPtrs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventPtrs, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventPtrs"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventPtrs>()
{
	return FMovieSceneEventPtrs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjectProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_BoundObjectProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Compiled reflection pointers for the event function and parameters */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Compiled reflection pointers for the event function and parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventPtrs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventPtrs, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty = { "BoundObjectProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventPtrs, BoundObjectProperty), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewProp_BoundObjectProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventPtrs",
		sizeof(FMovieSceneEventPtrs),
		alignof(FMovieSceneEventPtrs),
		Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventPtrs()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvent;
class UScriptStruct* FMovieSceneEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvent, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvent.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEvent>()
{
	return FMovieSceneEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ptrs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ptrs;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadVariables_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PayloadVariables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadVariables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PayloadVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompiledFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjectPinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundObjectPinName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionEntry_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FunctionEntry;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs_MetaData[] = {
		{ "Comment", "/**\n\x09 * The function that should be called to invoke this event.\n\x09 * Functions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "The function that should be called to invoke this event.\nFunctions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs = { "Ptrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, Ptrs), Z_Construct_UScriptStruct_FMovieSceneEventPtrs, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs_MetaData)) }; // 3110520864
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_ValueProp = { "PayloadVariables", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable, METADATA_PARAMS(nullptr, 0) }; // 4029131142
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_Key_KeyProp = { "PayloadVariables_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_MetaData[] = {
		{ "Category", "Sequencer|Event" },
		{ "Comment", "/** Array of payload variables to be added to the generated function */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Array of payload variables to be added to the generated function" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables = { "PayloadVariables", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, PayloadVariables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_MetaData)) }; // 4029131142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName = { "CompiledFunctionName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, CompiledFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName_MetaData[] = {
		{ "Category", "Sequencer|Event" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName = { "BoundObjectPinName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, BoundObjectPinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakEndpoint_MetaData[] = {
		{ "Category", "Sequencer|Event" },
		{ "Comment", "/** Serialized weak pointer to the function entry (UK2Node_FunctionEntry) or custom event node (UK2Node_CustomEvent) within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Serialized weak pointer to the function entry (UK2Node_FunctionEntry) or custom event node (UK2Node_CustomEvent) within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakEndpoint = { "WeakEndpoint", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, WeakEndpoint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "Comment", "/** (deprecated) The UEdGraph::GraphGuid property that relates the graph within which our endpoint lives. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "(deprecated) The UEdGraph::GraphGuid property that relates the graph within which our endpoint lives." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, GraphGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** (deprecated) When valid, relates to the The UEdGraphNode::NodeGuid for a custom event node that defines our event endpoint. When invalid, we must be bound to a UBlueprint::FunctionGraphs graph. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "(deprecated) When valid, relates to the The UEdGraphNode::NodeGuid for a custom event node that defines our event endpoint. When invalid, we must be bound to a UBlueprint::FunctionGraphs graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, NodeGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData[] = {
		{ "Comment", "/** Deprecated weak pointer to the function entry to call - no longer serialized but cached on load. Predates GraphGuid and NodeGuid */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Deprecated weak pointer to the function entry to call - no longer serialized but cached on load. Predates GraphGuid and NodeGuid" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry = { "FunctionEntry", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvent, FunctionEntry_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_Ptrs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_PayloadVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CompiledFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_BoundObjectPinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_WeakEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_NodeGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEvent",
		sizeof(FMovieSceneEvent),
		alignof(FMovieSceneEvent),
		Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvent.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEvent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEvent_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEventPayloadVariable::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventPayloadVariable_Statics::NewStructOps, TEXT("MovieSceneEventPayloadVariable"), &Z_Registration_Info_UScriptStruct_MovieSceneEventPayloadVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventPayloadVariable), 4029131142U) },
		{ FMovieSceneEventPtrs::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventPtrs_Statics::NewStructOps, TEXT("MovieSceneEventPtrs"), &Z_Registration_Info_UScriptStruct_MovieSceneEventPtrs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventPtrs), 3110520864U) },
		{ FMovieSceneEvent::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewStructOps, TEXT("MovieSceneEvent"), &Z_Registration_Info_UScriptStruct_MovieSceneEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvent), 3632963668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEvent_h_3589123846(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEvent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
