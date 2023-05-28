// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationContext.h"
#include "ConversationNode.h"
#include "ConversationTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationContext() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationContextHelpers();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationContextHelpers_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationParticipantComponent_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRegistry_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationTaskNode_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAdvanceConversationRequest();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessage();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationContext();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeHandle();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationTaskResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConversationTaskResultType;
	static UEnum* EConversationTaskResultType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConversationTaskResultType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConversationTaskResultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("EConversationTaskResultType"));
		}
		return Z_Registration_Info_UEnum_EConversationTaskResultType.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UEnum* StaticEnum<EConversationTaskResultType>()
	{
		return EConversationTaskResultType_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::Enumerators[] = {
		{ "EConversationTaskResultType::Invalid", (int64)EConversationTaskResultType::Invalid },
		{ "EConversationTaskResultType::AbortConversation", (int64)EConversationTaskResultType::AbortConversation },
		{ "EConversationTaskResultType::AdvanceConversation", (int64)EConversationTaskResultType::AdvanceConversation },
		{ "EConversationTaskResultType::AdvanceConversationWithChoice", (int64)EConversationTaskResultType::AdvanceConversationWithChoice },
		{ "EConversationTaskResultType::PauseConversationAndSendClientChoices", (int64)EConversationTaskResultType::PauseConversationAndSendClientChoices },
		{ "EConversationTaskResultType::ReturnToLastClientChoice", (int64)EConversationTaskResultType::ReturnToLastClientChoice },
		{ "EConversationTaskResultType::ReturnToCurrentClientChoice", (int64)EConversationTaskResultType::ReturnToCurrentClientChoice },
		{ "EConversationTaskResultType::ReturnToConversationStart", (int64)EConversationTaskResultType::ReturnToConversationStart },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::Enum_MetaDataParams[] = {
		{ "AbortConversation.Comment", "/** Aborts the conversation. */" },
		{ "AbortConversation.Name", "EConversationTaskResultType::AbortConversation" },
		{ "AbortConversation.ToolTip", "Aborts the conversation." },
		{ "AdvanceConversation.Comment", "/** Advances the conversation to the next task, or a random one if there are multiple. */" },
		{ "AdvanceConversation.Name", "EConversationTaskResultType::AdvanceConversation" },
		{ "AdvanceConversation.ToolTip", "Advances the conversation to the next task, or a random one if there are multiple." },
		{ "AdvanceConversationWithChoice.Comment", "/**\n\x09 * Advances the conversation to a choice, this choice does not have to be one that would normally come next.\n\x09 * Consider using this in advanced situations where you want to potentially dynamically jump to any node in\n\x09 * existence.\n\x09 */" },
		{ "AdvanceConversationWithChoice.Name", "EConversationTaskResultType::AdvanceConversationWithChoice" },
		{ "AdvanceConversationWithChoice.ToolTip", "Advances the conversation to a choice, this choice does not have to be one that would normally come next.\nConsider using this in advanced situations where you want to potentially dynamically jump to any node in\nexistence." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The conversation task result type gives the conversation system the instruction it needs\n * after running a task.  Should we continue to the next task? or stop and give the player\n * the choice of moving forward?\n */" },
		{ "Invalid.Name", "EConversationTaskResultType::Invalid" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "PauseConversationAndSendClientChoices.Comment", "/**\n\x09 * Stops the conversation flow and notifies the client that there are choices, with a payload of anything\n\x09 * the NPC needs to say along with whatever choices the user has.\n\x09 */" },
		{ "PauseConversationAndSendClientChoices.Name", "EConversationTaskResultType::PauseConversationAndSendClientChoices" },
		{ "PauseConversationAndSendClientChoices.ToolTip", "Stops the conversation flow and notifies the client that there are choices, with a payload of anything\nthe NPC needs to say along with whatever choices the user has." },
		{ "ReturnToConversationStart.Comment", "/**\n\x09 * Allows jumping back to the beginning of the entire conversation tree, so that you can effectively, return\n\x09 * to the 'main menu'.\n\x09 */" },
		{ "ReturnToConversationStart.Name", "EConversationTaskResultType::ReturnToConversationStart" },
		{ "ReturnToConversationStart.ToolTip", "Allows jumping back to the beginning of the entire conversation tree, so that you can effectively, return\nto the 'main menu'." },
		{ "ReturnToCurrentClientChoice.Comment", "/**\n\x09 * Does not advance the conversation, just refreshes the current choices again. \n\x09 * This option is really useful if you need to have the user make a choice and then\n\x09 * make the same choice again, ex. User clicks an option to buy an item, and you want\n\x09 * them to be able to repeat that action.\n\x09 */" },
		{ "ReturnToCurrentClientChoice.Name", "EConversationTaskResultType::ReturnToCurrentClientChoice" },
		{ "ReturnToCurrentClientChoice.ToolTip", "Does not advance the conversation, just refreshes the current choices again.\nThis option is really useful if you need to have the user make a choice and then\nmake the same choice again, ex. User clicks an option to buy an item, and you want\nthem to be able to repeat that action." },
		{ "ReturnToLastClientChoice.Comment", "/**\n\x09 * Dynamically allows jumping 'back' one step in the conversation.  This does not go back one Task, but\n\x09 * to the last time in the conversation flow we paused conversation and sent the client choices.\n\x09 */" },
		{ "ReturnToLastClientChoice.Name", "EConversationTaskResultType::ReturnToLastClientChoice" },
		{ "ReturnToLastClientChoice.ToolTip", "Dynamically allows jumping 'back' one step in the conversation.  This does not go back one Task, but\nto the last time in the conversation flow we paused conversation and sent the client choices." },
		{ "ToolTip", "The conversation task result type gives the conversation system the instruction it needs\nafter running a task.  Should we continue to the next task? or stop and give the player\nthe choice of moving forward?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		"EConversationTaskResultType",
		"EConversationTaskResultType",
		Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType()
	{
		if (!Z_Registration_Info_UEnum_EConversationTaskResultType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConversationTaskResultType.InnerSingleton, Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConversationTaskResultType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationTaskResult;
class UScriptStruct* FConversationTaskResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationTaskResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationTaskResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationTaskResult, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationTaskResult"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationTaskResult.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationTaskResult>()
{
	return FConversationTaskResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationTaskResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvanceToChoice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvanceToChoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationTaskResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The FConversationTaskResult encompasses the type of result along with any extra data we need for\n * that kind of result, for example if we're giving the player a message and giving them a choice, what\n * what message do we need to send.\n */" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "The FConversationTaskResult encompasses the type of result along with any extra data we need for\nthat kind of result, for example if we're giving the player a message and giving them a choice, what\nwhat message do we need to send." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationTaskResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationTaskResult, Type), Z_Construct_UEnum_CommonConversationRuntime_EConversationTaskResultType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type_MetaData)) }; // 2553836205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_AdvanceToChoice_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_AdvanceToChoice = { "AdvanceToChoice", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationTaskResult, AdvanceToChoice), Z_Construct_UScriptStruct_FAdvanceConversationRequest, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_AdvanceToChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_AdvanceToChoice_MetaData)) }; // 714291252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationTaskResult, Message), Z_Construct_UScriptStruct_FClientConversationMessage, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Message_MetaData)) }; // 1141337253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationTaskResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_AdvanceToChoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationTaskResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationTaskResult",
		sizeof(FConversationTaskResult),
		alignof(FConversationTaskResult),
		Z_Construct_UScriptStruct_FConversationTaskResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationTaskResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationTaskResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationTaskResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationTaskResult.InnerSingleton, Z_Construct_UScriptStruct_FConversationTaskResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationTaskResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationContext;
class UScriptStruct* FConversationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationContext, (UObject*)Z_Construct_UPackage__Script_CommonConversationRuntime(), TEXT("ConversationContext"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationContext.OuterSingleton;
}
template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<FConversationContext>()
{
	return FConversationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConversationRegistry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveConversation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveConversation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClientParticipant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskBeingConsidered_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TaskBeingConsidered;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnScopeStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnScopeStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnScopeStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServer_MetaData[];
#endif
		static void NewProp_bServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Information about a currently active conversation\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Information about a currently active conversation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ConversationRegistry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ConversationRegistry = { "ConversationRegistry", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationContext, ConversationRegistry), Z_Construct_UClass_UConversationRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ConversationRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ConversationRegistry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ActiveConversation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ActiveConversation = { "ActiveConversation", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationContext, ActiveConversation), Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ActiveConversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ActiveConversation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ClientParticipant_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ClientParticipant = { "ClientParticipant", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationContext, ClientParticipant), Z_Construct_UClass_UConversationParticipantComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ClientParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ClientParticipant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_TaskBeingConsidered_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_TaskBeingConsidered = { "TaskBeingConsidered", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationContext, TaskBeingConsidered), Z_Construct_UClass_UConversationTaskNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_TaskBeingConsidered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_TaskBeingConsidered_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack_Inner = { "ReturnScopeStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(nullptr, 0) }; // 2347894001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack = { "ReturnScopeStack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConversationContext, ReturnScopeStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack_MetaData)) }; // 2347894001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer_SetBit(void* Obj)
	{
		((FConversationContext*)Obj)->bServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer = { "bServer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConversationContext), &Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ConversationRegistry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ActiveConversation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ClientParticipant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_TaskBeingConsidered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_ReturnScopeStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationContext_Statics::NewProp_bServer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
		nullptr,
		&NewStructOps,
		"ConversationContext",
		sizeof(FConversationContext),
		alignof(FConversationContext),
		Z_Construct_UScriptStruct_FConversationContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationContext.InnerSingleton, Z_Construct_UScriptStruct_FConversationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationContext.InnerSingleton;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execFindConversationComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConversationParticipantComponent**)Z_Param__Result=UConversationContextHelpers::FindConversationComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execGetConversationParticipantActor)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_STRUCT(FGameplayTag,Z_Param_ParticipantTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UConversationContextHelpers::GetConversationParticipantActor(Z_Param_Out_Context,Z_Param_ParticipantTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execGetConversationParticipant)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_STRUCT(FGameplayTag,Z_Param_ParticipantTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConversationParticipantComponent**)Z_Param__Result=UConversationContextHelpers::GetConversationParticipant(Z_Param_Out_Context,Z_Param_ParticipantTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execCanConversationContinue)
	{
		P_GET_STRUCT_REF(FConversationTaskResult,Z_Param_Out_ConversationTasResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationContextHelpers::CanConversationContinue(Z_Param_Out_ConversationTasResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execAbortConversation)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::AbortConversation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execReturnToConversationStart)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::ReturnToConversationStart(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execReturnToCurrentClientChoice)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::ReturnToCurrentClientChoice(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execReturnToLastClientChoice)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::ReturnToLastClientChoice(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execPauseConversationAndSendClientChoices)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FClientConversationMessage,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::PauseConversationAndSendClientChoices(Z_Param_Out_Context,Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execAdvanceConversationWithChoice)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FAdvanceConversationRequest,Z_Param_Out_Choice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::AdvanceConversationWithChoice(Z_Param_Out_Context,Z_Param_Out_Choice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execAdvanceConversation)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationTaskResult*)Z_Param__Result=UConversationContextHelpers::AdvanceConversation(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execMakeConversationParticipant)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_GET_OBJECT(AActor,Z_Param_ParticipantActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_ParticipantTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationContextHelpers::MakeConversationParticipant(Z_Param_Out_Context,Z_Param_ParticipantActor,Z_Param_ParticipantTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execGetCurrentConversationNodeHandle)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationNodeHandle*)Z_Param__Result=UConversationContextHelpers::GetCurrentConversationNodeHandle(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationContextHelpers::execGetConversationInstance)
	{
		P_GET_STRUCT_REF(FConversationContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConversationInstance**)Z_Param__Result=UConversationContextHelpers::GetConversationInstance(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	void UConversationContextHelpers::StaticRegisterNativesUConversationContextHelpers()
	{
		UClass* Class = UConversationContextHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortConversation", &UConversationContextHelpers::execAbortConversation },
			{ "AdvanceConversation", &UConversationContextHelpers::execAdvanceConversation },
			{ "AdvanceConversationWithChoice", &UConversationContextHelpers::execAdvanceConversationWithChoice },
			{ "CanConversationContinue", &UConversationContextHelpers::execCanConversationContinue },
			{ "FindConversationComponent", &UConversationContextHelpers::execFindConversationComponent },
			{ "GetConversationInstance", &UConversationContextHelpers::execGetConversationInstance },
			{ "GetConversationParticipant", &UConversationContextHelpers::execGetConversationParticipant },
			{ "GetConversationParticipantActor", &UConversationContextHelpers::execGetConversationParticipantActor },
			{ "GetCurrentConversationNodeHandle", &UConversationContextHelpers::execGetCurrentConversationNodeHandle },
			{ "MakeConversationParticipant", &UConversationContextHelpers::execMakeConversationParticipant },
			{ "PauseConversationAndSendClientChoices", &UConversationContextHelpers::execPauseConversationAndSendClientChoices },
			{ "ReturnToConversationStart", &UConversationContextHelpers::execReturnToConversationStart },
			{ "ReturnToCurrentClientChoice", &UConversationContextHelpers::execReturnToCurrentClientChoice },
			{ "ReturnToLastClientChoice", &UConversationContextHelpers::execReturnToLastClientChoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics
	{
		struct ConversationContextHelpers_eventAbortConversation_Parms
		{
			FConversationContext Context;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAbortConversation_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAbortConversation_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::AbortConversation\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::AbortConversation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "AbortConversation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::ConversationContextHelpers_eventAbortConversation_Parms), Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_AbortConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_AbortConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics
	{
		struct ConversationContextHelpers_eventAdvanceConversation_Parms
		{
			FConversationContext Context;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAdvanceConversation_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAdvanceConversation_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::AdvanceConversation\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::AdvanceConversation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "AdvanceConversation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::ConversationContextHelpers_eventAdvanceConversation_Parms), Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics
	{
		struct ConversationContextHelpers_eventAdvanceConversationWithChoice_Parms
		{
			FConversationContext Context;
			FAdvanceConversationRequest Choice;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Choice;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAdvanceConversationWithChoice_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Context_MetaData)) }; // 3817681265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Choice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAdvanceConversationWithChoice_Parms, Choice), Z_Construct_UScriptStruct_FAdvanceConversationRequest, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Choice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Choice_MetaData)) }; // 714291252
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventAdvanceConversationWithChoice_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_Choice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Choice" },
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::AdvanceConversationWithChoice\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::AdvanceConversationWithChoice" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "AdvanceConversationWithChoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::ConversationContextHelpers_eventAdvanceConversationWithChoice_Parms), Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics
	{
		struct ConversationContextHelpers_eventCanConversationContinue_Parms
		{
			FConversationTaskResult ConversationTasResult;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationTasResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversationTasResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ConversationTasResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ConversationTasResult = { "ConversationTasResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventCanConversationContinue_Parms, ConversationTasResult), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ConversationTasResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ConversationTasResult_MetaData)) }; // 3685988545
	void Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationContextHelpers_eventCanConversationContinue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConversationContextHelpers_eventCanConversationContinue_Parms), &Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ConversationTasResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/** \n\x09 * Checks the provided task result against any which would end the conversation e.g. EConversationTaskResultType::Invalid \n\x09 * or EConversationTaskResultType::AbortConversation \n\x09 */" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Checks the provided task result against any which would end the conversation e.g. EConversationTaskResultType::Invalid\nor EConversationTaskResultType::AbortConversation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "CanConversationContinue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::ConversationContextHelpers_eventCanConversationContinue_Parms), Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics
	{
		struct ConversationContextHelpers_eventFindConversationComponent_Parms
		{
			AActor* Actor;
			UConversationParticipantComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventFindConversationComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventFindConversationComponent_Parms, ReturnValue), Z_Construct_UClass_UConversationParticipantComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Wrapper to find and return any UConversationParticipantComponent belonging to the provided parameter actor\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Wrapper to find and return any UConversationParticipantComponent belonging to the provided parameter actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "FindConversationComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::ConversationContextHelpers_eventFindConversationComponent_Parms), Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics
	{
		struct ConversationContextHelpers_eventGetConversationInstance_Parms
		{
			FConversationContext Context;
			UConversationInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationInstance_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationInstance_Parms, ReturnValue), Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Returns the conversation instance object associated with the conversation context provided, or nullptr if not valid\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Returns the conversation instance object associated with the conversation context provided, or nullptr if not valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "GetConversationInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::ConversationContextHelpers_eventGetConversationInstance_Parms), Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics
	{
		struct ConversationContextHelpers_eventGetConversationParticipant_Parms
		{
			FConversationContext Context;
			FGameplayTag ParticipantTag;
			UConversationParticipantComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationParticipant_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ParticipantTag = { "ParticipantTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationParticipant_Parms, ParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationParticipant_Parms, ReturnValue), Z_Construct_UClass_UConversationParticipantComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ParticipantTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Returns the conversation participant component belonging to the participant indicated by 'ParticipantTag', or nullptr if not found\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Returns the conversation participant component belonging to the participant indicated by 'ParticipantTag', or nullptr if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "GetConversationParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::ConversationContextHelpers_eventGetConversationParticipant_Parms), Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics
	{
		struct ConversationContextHelpers_eventGetConversationParticipantActor_Parms
		{
			FConversationContext Context;
			FGameplayTag ParticipantTag;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationParticipantActor_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_ParticipantTag = { "ParticipantTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationParticipantActor_Parms, ParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetConversationParticipantActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_ParticipantTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Returns the conversation participant actor indicated by 'ParticipantTag', or nullptr if not found\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Returns the conversation participant actor indicated by 'ParticipantTag', or nullptr if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "GetConversationParticipantActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::ConversationContextHelpers_eventGetConversationParticipantActor_Parms), Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics
	{
		struct ConversationContextHelpers_eventGetCurrentConversationNodeHandle_Parms
		{
			FConversationContext Context;
			FConversationNodeHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetCurrentConversationNodeHandle_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventGetCurrentConversationNodeHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(nullptr, 0) }; // 2347894001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Returns the FConversationNodeHandle of the conversation instance associated with this context, or a handle with an invalid FGuid if not possible\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Returns the FConversationNodeHandle of the conversation instance associated with this context, or a handle with an invalid FGuid if not possible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "GetCurrentConversationNodeHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::ConversationContextHelpers_eventGetCurrentConversationNodeHandle_Parms), Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics
	{
		struct ConversationContextHelpers_eventMakeConversationParticipant_Parms
		{
			FConversationContext Context;
			AActor* ParticipantActor;
			FGameplayTag ParticipantTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventMakeConversationParticipant_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_ParticipantActor = { "ParticipantActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventMakeConversationParticipant_Parms, ParticipantActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_ParticipantTag = { "ParticipantTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventMakeConversationParticipant_Parms, ParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_ParticipantActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::NewProp_ParticipantTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "/**\n\x09 * Registers an actor as part of the conversation, that actor doesn't need to have the UConversationParticipantComponent\n\x09 * it won't be added though.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Registers an actor as part of the conversation, that actor doesn't need to have the UConversationParticipantComponent\nit won't be added though." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "MakeConversationParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::ConversationContextHelpers_eventMakeConversationParticipant_Parms), Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics
	{
		struct ConversationContextHelpers_eventPauseConversationAndSendClientChoices_Parms
		{
			FConversationContext Context;
			FClientConversationMessage Message;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventPauseConversationAndSendClientChoices_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Context_MetaData)) }; // 3817681265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventPauseConversationAndSendClientChoices_Parms, Message), Z_Construct_UScriptStruct_FClientConversationMessage, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Message_MetaData)) }; // 1141337253
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventPauseConversationAndSendClientChoices_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::PauseConversationAndSendClientChoices\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::PauseConversationAndSendClientChoices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "PauseConversationAndSendClientChoices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::ConversationContextHelpers_eventPauseConversationAndSendClientChoices_Parms), Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics
	{
		struct ConversationContextHelpers_eventReturnToConversationStart_Parms
		{
			FConversationContext Context;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventReturnToConversationStart_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventReturnToConversationStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::ReturnToConversationStart\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::ReturnToConversationStart" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "ReturnToConversationStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::ConversationContextHelpers_eventReturnToConversationStart_Parms), Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics
	{
		struct ConversationContextHelpers_eventReturnToCurrentClientChoice_Parms
		{
			FConversationContext Context;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventReturnToCurrentClientChoice_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventReturnToCurrentClientChoice_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::ReturnToCurrentClientChoice\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::ReturnToCurrentClientChoice" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "ReturnToCurrentClientChoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::ConversationContextHelpers_eventReturnToCurrentClientChoice_Parms), Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics
	{
		struct ConversationContextHelpers_eventReturnToLastClientChoice_Parms
		{
			FConversationContext Context;
			FConversationTaskResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventReturnToLastClientChoice_Parms, Context), Z_Construct_UScriptStruct_FConversationContext, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_Context_MetaData)) }; // 3817681265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationContextHelpers_eventReturnToLastClientChoice_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationTaskResult, METADATA_PARAMS(nullptr, 0) }; // 3685988545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "Comment", "// Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::ReturnToLastClientChoice\n" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Constructs and returns a FConversationTaskResult configured with EConversationTaskResultType::ReturnToLastClientChoice" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationContextHelpers, nullptr, "ReturnToLastClientChoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::ConversationContextHelpers_eventReturnToLastClientChoice_Parms), Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationContextHelpers);
	UClass* Z_Construct_UClass_UConversationContextHelpers_NoRegister()
	{
		return UConversationContextHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UConversationContextHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationContextHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationContextHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationContextHelpers_AbortConversation, "AbortConversation" }, // 3629291553
		{ &Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversation, "AdvanceConversation" }, // 1416934888
		{ &Z_Construct_UFunction_UConversationContextHelpers_AdvanceConversationWithChoice, "AdvanceConversationWithChoice" }, // 3277519635
		{ &Z_Construct_UFunction_UConversationContextHelpers_CanConversationContinue, "CanConversationContinue" }, // 1959262327
		{ &Z_Construct_UFunction_UConversationContextHelpers_FindConversationComponent, "FindConversationComponent" }, // 3385548945
		{ &Z_Construct_UFunction_UConversationContextHelpers_GetConversationInstance, "GetConversationInstance" }, // 3575348506
		{ &Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipant, "GetConversationParticipant" }, // 877748381
		{ &Z_Construct_UFunction_UConversationContextHelpers_GetConversationParticipantActor, "GetConversationParticipantActor" }, // 2618044256
		{ &Z_Construct_UFunction_UConversationContextHelpers_GetCurrentConversationNodeHandle, "GetCurrentConversationNodeHandle" }, // 480643959
		{ &Z_Construct_UFunction_UConversationContextHelpers_MakeConversationParticipant, "MakeConversationParticipant" }, // 767807205
		{ &Z_Construct_UFunction_UConversationContextHelpers_PauseConversationAndSendClientChoices, "PauseConversationAndSendClientChoices" }, // 1299381128
		{ &Z_Construct_UFunction_UConversationContextHelpers_ReturnToConversationStart, "ReturnToConversationStart" }, // 3986054847
		{ &Z_Construct_UFunction_UConversationContextHelpers_ReturnToCurrentClientChoice, "ReturnToCurrentClientChoice" }, // 630532076
		{ &Z_Construct_UFunction_UConversationContextHelpers_ReturnToLastClientChoice, "ReturnToLastClientChoice" }, // 3601045131
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationContextHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Wrapper methods from FConversationContext\n" },
		{ "IncludePath", "ConversationContext.h" },
		{ "ModuleRelativePath", "Public/ConversationContext.h" },
		{ "ToolTip", "Wrapper methods from FConversationContext" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationContextHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationContextHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationContextHelpers_Statics::ClassParams = {
		&UConversationContextHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationContextHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationContextHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationContextHelpers()
	{
		if (!Z_Registration_Info_UClass_UConversationContextHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationContextHelpers.OuterSingleton, Z_Construct_UClass_UConversationContextHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationContextHelpers.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationContextHelpers>()
	{
		return UConversationContextHelpers::StaticClass();
	}
	UConversationContextHelpers::UConversationContextHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationContextHelpers);
	UConversationContextHelpers::~UConversationContextHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::EnumInfo[] = {
		{ EConversationTaskResultType_StaticEnum, TEXT("EConversationTaskResultType"), &Z_Registration_Info_UEnum_EConversationTaskResultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2553836205U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::ScriptStructInfo[] = {
		{ FConversationTaskResult::StaticStruct, Z_Construct_UScriptStruct_FConversationTaskResult_Statics::NewStructOps, TEXT("ConversationTaskResult"), &Z_Registration_Info_UScriptStruct_ConversationTaskResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationTaskResult), 3685988545U) },
		{ FConversationContext::StaticStruct, Z_Construct_UScriptStruct_FConversationContext_Statics::NewStructOps, TEXT("ConversationContext"), &Z_Registration_Info_UScriptStruct_ConversationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationContext), 3817681265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationContextHelpers, UConversationContextHelpers::StaticClass, TEXT("UConversationContextHelpers"), &Z_Registration_Info_UClass_UConversationContextHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationContextHelpers), 3968243057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_3121513005(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
