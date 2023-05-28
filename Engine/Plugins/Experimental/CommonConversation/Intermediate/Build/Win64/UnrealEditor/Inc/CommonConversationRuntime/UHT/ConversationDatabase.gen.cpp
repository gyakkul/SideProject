// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationDatabase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationDatabase() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationDatabase();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationDatabase_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCommonDialogueBankParticipant();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationEntryList();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationEntryList;
class UScriptStruct* FConversationEntryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationEntryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationEntryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationEntryList, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationEntryList"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationEntryList.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationEntryList>()
{
	return FConversationEntryList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationEntryList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestinationList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationEntryList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * There may be multiple databases with the same entrypoint tag, this struct holds\n * all of those nodes with the same matching tag name, so that the entry point is\n * effectively randomized when there are multiple copies.\n */" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "There may be multiple databases with the same entrypoint tag, this struct holds\nall of those nodes with the same matching tag name, so that the entry point is\neffectively randomized when there are multiple copies." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationEntryList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_EntryTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_EntryTag = { "EntryTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationEntryList, EntryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_EntryTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_EntryTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList_Inner = { "DestinationList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList = { "DestinationList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationEntryList, DestinationList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationEntryList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_EntryTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewProp_DestinationList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationEntryList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationEntryList",
		sizeof(FConversationEntryList),
		alignof(FConversationEntryList),
		Z_Construct_UScriptStruct_FConversationEntryList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationEntryList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationEntryList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationEntryList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationEntryList()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationEntryList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationEntryList.InnerSingleton, Z_Construct_UScriptStruct_FConversationEntryList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationEntryList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant;
class UScriptStruct* FCommonDialogueBankParticipant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("CommonDialogueBankParticipant"));
	}
	return Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FCommonDialogueBankParticipant>()
{
	return FCommonDialogueBankParticipant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_FallbackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeTint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n//\n// This struct represents a logical participant in a conversation.\n//\n// In an active conversation, logical participants are mapped to actual participants\n// (e.g., mapping a logical Player to the current player pawn)\n//\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "/\n\n This struct represents a logical participant in a conversation.\n\n In an active conversation, logical participants are mapped to actual participants\n (e.g., mapping a logical Player to the current player pawn)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonDialogueBankParticipant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_FallbackName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_FallbackName = { "FallbackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonDialogueBankParticipant, FallbackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_FallbackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_FallbackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Categories", "Conversation.Participant" },
		{ "Category", "Identification" },
		{ "Comment", "/** Identifier represented by the component */" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Identifier represented by the component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonDialogueBankParticipant, ParticipantName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_ParticipantName_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_NodeTint_MetaData[] = {
		{ "Category", "Identification" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_NodeTint = { "NodeTint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonDialogueBankParticipant, NodeTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_NodeTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_NodeTint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_FallbackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_ParticipantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewProp_NodeTint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"CommonDialogueBankParticipant",
		sizeof(FCommonDialogueBankParticipant),
		alignof(FCommonDialogueBankParticipant),
		Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonDialogueBankParticipant()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant.InnerSingleton, Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant.InnerSingleton;
	}
	void UConversationDatabase::StaticRegisterNativesUConversationDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationDatabase);
	UClass* Z_Construct_UClass_UConversationDatabase_NoRegister()
	{
		return UConversationDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UConversationDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilerVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompilerVersion;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReachableNodeMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReachableNodeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachableNodeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReachableNodeMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EntryTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalNodeIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalNodeIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalNodeIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedToNodeIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedToNodeIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedToNodeIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speakers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FullNodeMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FullNodeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullNodeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FullNodeMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceGraphs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n// This is a database of conversation graphs and participants\n// It is an asset and never instanced.  The conversation registry is used\n// at runtime to actually run a conversation rather than referencing these\n// database fragments directly.\n" },
		{ "IncludePath", "ConversationDatabase.h" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "/\n This is a database of conversation graphs and participants\n It is an asset and never instanced.  The conversation registry is used\n at runtime to actually run a conversation rather than referencing these\n database fragments directly." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_CompilerVersion_MetaData[] = {
		{ "Comment", "// Compiled: Entry points\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Compiled: Entry points" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_CompilerVersion = { "CompilerVersion", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, CompilerVersion), METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_CompilerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_CompilerVersion_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_ValueProp = { "ReachableNodeMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UConversationNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_Key_KeyProp = { "ReachableNodeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_MetaData[] = {
		{ "Comment", "// Compiled: Reachable nodes\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Compiled: Reachable nodes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap = { "ReachableNodeMap", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, ReachableNodeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags_Inner = { "EntryTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationEntryList, METADATA_PARAMS(nullptr, 0) }; // 2912486838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags_MetaData[] = {
		{ "Comment", "// Compiled: Entry points\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Compiled: Entry points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags = { "EntryTags", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, EntryTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags_MetaData)) }; // 2912486838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ExitTags_MetaData[] = {
		{ "Comment", "// Compiled: \n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Compiled:" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ExitTags = { "ExitTags", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, ExitTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ExitTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ExitTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds_Inner = { "InternalNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds_MetaData[] = {
		{ "Comment", "// Compiled: \n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Compiled:" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds = { "InternalNodeIds", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, InternalNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds_Inner = { "LinkedToNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds_MetaData[] = {
		{ "Comment", "// Compiled: \n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Compiled:" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds = { "LinkedToNodeIds", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, LinkedToNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCommonDialogueBankParticipant, METADATA_PARAMS(nullptr, 0) }; // 3779486438
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers_MetaData[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// List of participant slots\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "List of participant slots" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers_MetaData)) }; // 3779486438
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_ValueProp = { "FullNodeMap", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UConversationNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_Key_KeyProp = { "FullNodeMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_MetaData[] = {
		{ "Comment", "// All nodes\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "All nodes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap = { "FullNodeMap", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, FullNodeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs_Inner = { "SourceGraphs", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs_MetaData[] = {
		{ "Comment", "// 'Source code' graphs (of type UConversationGraph)\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "'Source code' graphs (of type UConversationGraph)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs = { "SourceGraphs", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, SourceGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) }; // 4051615663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "// Info about the graphs we last edited\n" },
		{ "ModuleRelativePath", "Public/ConversationDatabase.h" },
		{ "ToolTip", "Info about the graphs we last edited" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationDatabase, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments_MetaData)) }; // 4051615663
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_CompilerVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ReachableNodeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_EntryTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_ExitTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_InternalNodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LinkedToNodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_Speakers,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_FullNodeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_SourceGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDatabase_Statics::NewProp_LastEditedDocuments,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationDatabase_Statics::ClassParams = {
		&UConversationDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationDatabase()
	{
		if (!Z_Registration_Info_UClass_UConversationDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationDatabase.OuterSingleton, Z_Construct_UClass_UConversationDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationDatabase.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationDatabase>()
	{
		return UConversationDatabase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationDatabase);
	UConversationDatabase::~UConversationDatabase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics::ScriptStructInfo[] = {
		{ FConversationEntryList::StaticStruct, Z_Construct_UScriptStruct_FConversationEntryList_Statics::NewStructOps, TEXT("ConversationEntryList"), &Z_Registration_Info_UScriptStruct_ConversationEntryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationEntryList), 2912486838U) },
		{ FCommonDialogueBankParticipant::StaticStruct, Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics::NewStructOps, TEXT("CommonDialogueBankParticipant"), &Z_Registration_Info_UScriptStruct_CommonDialogueBankParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonDialogueBankParticipant), 3779486438U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationDatabase, UConversationDatabase::StaticClass, TEXT("UConversationDatabase"), &Z_Registration_Info_UClass_UConversationDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationDatabase), 2038659261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_3937841692(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
