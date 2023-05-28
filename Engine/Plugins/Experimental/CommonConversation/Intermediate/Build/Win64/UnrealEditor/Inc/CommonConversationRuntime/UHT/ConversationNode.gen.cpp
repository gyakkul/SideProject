// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationNode.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationNode() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNode();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNodeWithLinks();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNodeWithLinks_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationNodeHandle;
class UScriptStruct* FConversationNodeHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationNodeHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationNodeHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationNodeHandle, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationNodeHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationNodeHandle.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationNodeHandle>()
{
	return FConversationNodeHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationNodeHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationNodeHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationNodeHandle, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewProp_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewProp_NodeGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewProp_NodeGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationNodeHandle",
		sizeof(FConversationNodeHandle),
		alignof(FConversationNodeHandle),
		Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationNodeHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationNodeHandle.InnerSingleton, Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationNodeHandle.InnerSingleton;
	}
	DEFINE_FUNCTION(UConversationNode::execGetDebugParticipantColor)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ParticipantID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetDebugParticipantColor(Z_Param_ParticipantID);
		P_NATIVE_END;
	}
	void UConversationNode::StaticRegisterNativesUConversationNode()
	{
		UClass* Class = UConversationNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugParticipantColor", &UConversationNode::execGetDebugParticipantColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics
	{
		struct ConversationNode_eventGetDebugParticipantColor_Parms
		{
			FGameplayTag ParticipantID;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::NewProp_ParticipantID = { "ParticipantID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationNode_eventGetDebugParticipantColor_Parms, ParticipantID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationNode_eventGetDebugParticipantColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::NewProp_ParticipantID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationNode, nullptr, "GetDebugParticipantColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::ConversationNode_eventGetDebugParticipantColor_Parms), Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationNode);
	UClass* Z_Construct_UClass_UConversationNode_NoRegister()
	{
		return UConversationNode::StaticClass();
	}
	struct Z_Construct_UClass_UConversationNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalWorldContextObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EvalWorldContextObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compiled_NodeGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Compiled_NodeGUID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[];
#endif
		static void NewProp_bShowPropertyDetails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyEditors_MetaData[];
#endif
		static void NewProp_bShowPropertyEditors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyEditors;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationNode_GetDebugParticipantColor, "GetDebugParticipantColor" }, // 676367230
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Represents a single runtime node in the conversation database.\n" },
		{ "IncludePath", "ConversationNode.h" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
		{ "ToolTip", "Represents a single runtime node in the conversation database." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::NewProp_EvalWorldContextObj_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationNode_Statics::NewProp_EvalWorldContextObj = { "EvalWorldContextObj", nullptr, (EPropertyFlags)0x0014000000202010, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationNode, EvalWorldContextObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::NewProp_EvalWorldContextObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::NewProp_EvalWorldContextObj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** node name */" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
		{ "ToolTip", "node name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConversationNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x00200c0000000011, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationNode, NodeName), METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::NewProp_Compiled_NodeGUID_MetaData[] = {
		{ "Comment", "/**\n\x09 * The node's unique ID.  This value is set during compilation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
		{ "ToolTip", "The node's unique ID.  This value is set during compilation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationNode_Statics::NewProp_Compiled_NodeGUID = { "Compiled_NodeGUID", nullptr, (EPropertyFlags)0x0020080000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationNode, Compiled_NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::NewProp_Compiled_NodeGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::NewProp_Compiled_NodeGUID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** show detailed information about properties */" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
#endif
	void Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails_SetBit(void* Obj)
	{
		((UConversationNode*)Obj)->bShowPropertyDetails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails = { "bShowPropertyDetails", nullptr, (EPropertyFlags)0x00200c0800000811, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UConversationNode), &Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** show detailed information about properties */" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
#endif
	void Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors_SetBit(void* Obj)
	{
		((UConversationNode*)Obj)->bShowPropertyEditors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors = { "bShowPropertyEditors", nullptr, (EPropertyFlags)0x00200c0800000811, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UConversationNode), &Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "Comment", "/** parent node */" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
		{ "ToolTip", "parent node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0044000000000010, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationNode, ParentNode), Z_Construct_UClass_UConversationNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::NewProp_ParentNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNode_Statics::NewProp_EvalWorldContextObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNode_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNode_Statics::NewProp_Compiled_NodeGUID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNode_Statics::NewProp_bShowPropertyEditors,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNode_Statics::NewProp_ParentNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationNode_Statics::ClassParams = {
		&UConversationNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConversationNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::PropPointers),
		0,
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationNode()
	{
		if (!Z_Registration_Info_UClass_UConversationNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationNode.OuterSingleton, Z_Construct_UClass_UConversationNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationNode.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationNode>()
	{
		return UConversationNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationNode);
	UConversationNode::~UConversationNode() {}
	void UConversationNodeWithLinks::StaticRegisterNativesUConversationNodeWithLinks()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationNodeWithLinks);
	UClass* Z_Construct_UClass_UConversationNodeWithLinks_NoRegister()
	{
		return UConversationNodeWithLinks::StaticClass();
	}
	struct Z_Construct_UClass_UConversationNodeWithLinks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputConnections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationNodeWithLinks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNodeWithLinks_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "ConversationNode.h" },
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections_Inner = { "OutputConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections = { "OutputConnections", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationNodeWithLinks, OutputConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationNodeWithLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationNodeWithLinks_Statics::NewProp_OutputConnections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationNodeWithLinks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationNodeWithLinks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationNodeWithLinks_Statics::ClassParams = {
		&UConversationNodeWithLinks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationNodeWithLinks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNodeWithLinks_Statics::PropPointers),
		0,
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationNodeWithLinks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationNodeWithLinks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationNodeWithLinks()
	{
		if (!Z_Registration_Info_UClass_UConversationNodeWithLinks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationNodeWithLinks.OuterSingleton, Z_Construct_UClass_UConversationNodeWithLinks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationNodeWithLinks.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationNodeWithLinks>()
	{
		return UConversationNodeWithLinks::StaticClass();
	}
	UConversationNodeWithLinks::UConversationNodeWithLinks(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationNodeWithLinks);
	UConversationNodeWithLinks::~UConversationNodeWithLinks() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics::ScriptStructInfo[] = {
		{ FConversationNodeHandle::StaticStruct, Z_Construct_UScriptStruct_FConversationNodeHandle_Statics::NewStructOps, TEXT("ConversationNodeHandle"), &Z_Registration_Info_UScriptStruct_ConversationNodeHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationNodeHandle), 2347894001U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationNode, UConversationNode::StaticClass, TEXT("UConversationNode"), &Z_Registration_Info_UClass_UConversationNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationNode), 2541910635U) },
		{ Z_Construct_UClass_UConversationNodeWithLinks, UConversationNodeWithLinks::StaticClass, TEXT("UConversationNodeWithLinks"), &Z_Registration_Info_UClass_UConversationNodeWithLinks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationNodeWithLinks), 1971308908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_566442537(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
