// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationParticipantComponent.h"
#include "ConversationNode.h"
#include "ConversationTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationParticipantComponent() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationParticipantComponent();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationParticipantComponent_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UFunction* Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAdvanceConversationRequest();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationMessagePayload();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClientConversationOptionEntry();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNodeHandle();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationParticipants();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics
	{
		struct _Script_CommonConversationRuntime_eventOnConversationStatusChanged_Parms
		{
			bool bIsInConversation;
		};
		static void NewProp_bIsInConversation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInConversation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::NewProp_bIsInConversation_SetBit(void* Obj)
	{
		((_Script_CommonConversationRuntime_eventOnConversationStatusChanged_Parms*)Obj)->bIsInConversation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::NewProp_bIsInConversation = { "bIsInConversation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CommonConversationRuntime_eventOnConversationStatusChanged_Parms), &Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::NewProp_bIsInConversation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::NewProp_bIsInConversation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonConversationRuntime, nullptr, "OnConversationStatusChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::_Script_CommonConversationRuntime_eventOnConversationStatusChanged_Parms), Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonConversationRuntime_OnConversationStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConversationStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConversationStatusChanged, bool bIsInConversation)
{
	struct _Script_CommonConversationRuntime_eventOnConversationStatusChanged_Parms
	{
		bool bIsInConversation;
	};
	_Script_CommonConversationRuntime_eventOnConversationStatusChanged_Parms Parms;
	Parms.bIsInConversation=bIsInConversation ? true : false;
	OnConversationStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UConversationParticipantComponent::execOnRep_ConversationsActive)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldConversationsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ConversationsActive(Z_Param_OldConversationsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execClientStartConversation)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AsParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartConversation_Implementation(Z_Param_AsParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execClientUpdateConversations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InConversationsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateConversations_Implementation(Z_Param_InConversationsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execClientUpdateConversationTaskChoiceData)
	{
		P_GET_STRUCT(FConversationNodeHandle,Z_Param_Handle);
		P_GET_STRUCT(FClientConversationOptionEntry,Z_Param_OptionEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateConversationTaskChoiceData_Implementation(Z_Param_Handle,Z_Param_OptionEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execClientUpdateConversation)
	{
		P_GET_STRUCT(FClientConversationMessagePayload,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateConversation_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execClientExecuteTaskAndSideEffects)
	{
		P_GET_STRUCT(FConversationNodeHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientExecuteTaskAndSideEffects_Implementation(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execClientUpdateParticipants)
	{
		P_GET_STRUCT(FConversationParticipants,Z_Param_InParticipants);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateParticipants_Implementation(Z_Param_InParticipants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execServerAdvanceConversation)
	{
		P_GET_STRUCT(FAdvanceConversationRequest,Z_Param_InChoicePicked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAdvanceConversation_Implementation(Z_Param_InChoicePicked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execIsInActiveConversation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInActiveConversation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execGetParticipantDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetParticipantDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationParticipantComponent::execRequestServerAdvanceConversation)
	{
		P_GET_STRUCT_REF(FAdvanceConversationRequest,Z_Param_Out_InChoicePicked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestServerAdvanceConversation(Z_Param_Out_InChoicePicked);
		P_NATIVE_END;
	}
	struct ConversationParticipantComponent_eventClientExecuteTaskAndSideEffects_Parms
	{
		FConversationNodeHandle Handle;
	};
	struct ConversationParticipantComponent_eventClientStartConversation_Parms
	{
		FGameplayTag AsParticipant;
	};
	struct ConversationParticipantComponent_eventClientUpdateConversation_Parms
	{
		FClientConversationMessagePayload Message;
	};
	struct ConversationParticipantComponent_eventClientUpdateConversations_Parms
	{
		int32 InConversationsActive;
	};
	struct ConversationParticipantComponent_eventClientUpdateConversationTaskChoiceData_Parms
	{
		FConversationNodeHandle Handle;
		FClientConversationOptionEntry OptionEntry;
	};
	struct ConversationParticipantComponent_eventClientUpdateParticipants_Parms
	{
		FConversationParticipants InParticipants;
	};
	struct ConversationParticipantComponent_eventServerAdvanceConversation_Parms
	{
		FAdvanceConversationRequest InChoicePicked;
	};
	static FName NAME_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects = FName(TEXT("ClientExecuteTaskAndSideEffects"));
	void UConversationParticipantComponent::ClientExecuteTaskAndSideEffects(FConversationNodeHandle Handle)
	{
		ConversationParticipantComponent_eventClientExecuteTaskAndSideEffects_Parms Parms;
		Parms.Handle=Handle;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects),&Parms);
	}
	static FName NAME_UConversationParticipantComponent_ClientStartConversation = FName(TEXT("ClientStartConversation"));
	void UConversationParticipantComponent::ClientStartConversation(const FGameplayTag AsParticipant)
	{
		ConversationParticipantComponent_eventClientStartConversation_Parms Parms;
		Parms.AsParticipant=AsParticipant;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ClientStartConversation),&Parms);
	}
	static FName NAME_UConversationParticipantComponent_ClientUpdateConversation = FName(TEXT("ClientUpdateConversation"));
	void UConversationParticipantComponent::ClientUpdateConversation(FClientConversationMessagePayload const& Message)
	{
		ConversationParticipantComponent_eventClientUpdateConversation_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ClientUpdateConversation),&Parms);
	}
	static FName NAME_UConversationParticipantComponent_ClientUpdateConversations = FName(TEXT("ClientUpdateConversations"));
	void UConversationParticipantComponent::ClientUpdateConversations(int32 InConversationsActive)
	{
		ConversationParticipantComponent_eventClientUpdateConversations_Parms Parms;
		Parms.InConversationsActive=InConversationsActive;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ClientUpdateConversations),&Parms);
	}
	static FName NAME_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData = FName(TEXT("ClientUpdateConversationTaskChoiceData"));
	void UConversationParticipantComponent::ClientUpdateConversationTaskChoiceData(FConversationNodeHandle Handle, FClientConversationOptionEntry const& OptionEntry)
	{
		ConversationParticipantComponent_eventClientUpdateConversationTaskChoiceData_Parms Parms;
		Parms.Handle=Handle;
		Parms.OptionEntry=OptionEntry;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData),&Parms);
	}
	static FName NAME_UConversationParticipantComponent_ClientUpdateParticipants = FName(TEXT("ClientUpdateParticipants"));
	void UConversationParticipantComponent::ClientUpdateParticipants(FConversationParticipants const& InParticipants)
	{
		ConversationParticipantComponent_eventClientUpdateParticipants_Parms Parms;
		Parms.InParticipants=InParticipants;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ClientUpdateParticipants),&Parms);
	}
	static FName NAME_UConversationParticipantComponent_ServerAdvanceConversation = FName(TEXT("ServerAdvanceConversation"));
	void UConversationParticipantComponent::ServerAdvanceConversation(FAdvanceConversationRequest const& InChoicePicked)
	{
		ConversationParticipantComponent_eventServerAdvanceConversation_Parms Parms;
		Parms.InChoicePicked=InChoicePicked;
		ProcessEvent(FindFunctionChecked(NAME_UConversationParticipantComponent_ServerAdvanceConversation),&Parms);
	}
	void UConversationParticipantComponent::StaticRegisterNativesUConversationParticipantComponent()
	{
		UClass* Class = UConversationParticipantComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientExecuteTaskAndSideEffects", &UConversationParticipantComponent::execClientExecuteTaskAndSideEffects },
			{ "ClientStartConversation", &UConversationParticipantComponent::execClientStartConversation },
			{ "ClientUpdateConversation", &UConversationParticipantComponent::execClientUpdateConversation },
			{ "ClientUpdateConversations", &UConversationParticipantComponent::execClientUpdateConversations },
			{ "ClientUpdateConversationTaskChoiceData", &UConversationParticipantComponent::execClientUpdateConversationTaskChoiceData },
			{ "ClientUpdateParticipants", &UConversationParticipantComponent::execClientUpdateParticipants },
			{ "GetParticipantDisplayName", &UConversationParticipantComponent::execGetParticipantDisplayName },
			{ "IsInActiveConversation", &UConversationParticipantComponent::execIsInActiveConversation },
			{ "OnRep_ConversationsActive", &UConversationParticipantComponent::execOnRep_ConversationsActive },
			{ "RequestServerAdvanceConversation", &UConversationParticipantComponent::execRequestServerAdvanceConversation },
			{ "ServerAdvanceConversation", &UConversationParticipantComponent::execServerAdvanceConversation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientExecuteTaskAndSideEffects_Parms, Handle), Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(nullptr, 0) }; // 2347894001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ClientExecuteTaskAndSideEffects", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventClientExecuteTaskAndSideEffects_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsParticipant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsParticipant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::NewProp_AsParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::NewProp_AsParticipant = { "AsParticipant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientStartConversation_Parms, AsParticipant), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::NewProp_AsParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::NewProp_AsParticipant_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::NewProp_AsParticipant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ClientStartConversation", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventClientStartConversation_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientUpdateConversation_Parms, Message), Z_Construct_UScriptStruct_FClientConversationMessagePayload, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::NewProp_Message_MetaData)) }; // 117888623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ClientUpdateConversation", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventClientUpdateConversation_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_InConversationsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::NewProp_InConversationsActive = { "InConversationsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientUpdateConversations_Parms, InConversationsActive), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::NewProp_InConversationsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ClientUpdateConversations", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventClientUpdateConversations_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionEntry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientUpdateConversationTaskChoiceData_Parms, Handle), Z_Construct_UScriptStruct_FConversationNodeHandle, METADATA_PARAMS(nullptr, 0) }; // 2347894001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_OptionEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_OptionEntry = { "OptionEntry", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientUpdateConversationTaskChoiceData_Parms, OptionEntry), Z_Construct_UScriptStruct_FClientConversationOptionEntry, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_OptionEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_OptionEntry_MetaData)) }; // 2053502488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::NewProp_OptionEntry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ClientUpdateConversationTaskChoiceData", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventClientUpdateConversationTaskChoiceData_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParticipants_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParticipants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::NewProp_InParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::NewProp_InParticipants = { "InParticipants", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventClientUpdateParticipants_Parms, InParticipants), Z_Construct_UScriptStruct_FConversationParticipants, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::NewProp_InParticipants_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::NewProp_InParticipants_MetaData)) }; // 3858117654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::NewProp_InParticipants,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ClientUpdateParticipants", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventClientUpdateParticipants_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics
	{
		struct ConversationParticipantComponent_eventGetParticipantDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventGetParticipantDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "GetParticipantDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::ConversationParticipantComponent_eventGetParticipantDisplayName_Parms), Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics
	{
		struct ConversationParticipantComponent_eventIsInActiveConversation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationParticipantComponent_eventIsInActiveConversation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConversationParticipantComponent_eventIsInActiveConversation_Parms), &Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "IsInActiveConversation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::ConversationParticipantComponent_eventIsInActiveConversation_Parms), Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics
	{
		struct ConversationParticipantComponent_eventOnRep_ConversationsActive_Parms
		{
			int32 OldConversationsActive;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldConversationsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::NewProp_OldConversationsActive = { "OldConversationsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventOnRep_ConversationsActive_Parms, OldConversationsActive), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::NewProp_OldConversationsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "OnRep_ConversationsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::ConversationParticipantComponent_eventOnRep_ConversationsActive_Parms), Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics
	{
		struct ConversationParticipantComponent_eventRequestServerAdvanceConversation_Parms
		{
			FAdvanceConversationRequest InChoicePicked;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChoicePicked_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChoicePicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::NewProp_InChoicePicked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::NewProp_InChoicePicked = { "InChoicePicked", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventRequestServerAdvanceConversation_Parms, InChoicePicked), Z_Construct_UScriptStruct_FAdvanceConversationRequest, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::NewProp_InChoicePicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::NewProp_InChoicePicked_MetaData)) }; // 714291252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::NewProp_InChoicePicked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "RequestServerAdvanceConversation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::ConversationParticipantComponent_eventRequestServerAdvanceConversation_Parms), Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChoicePicked_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChoicePicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::NewProp_InChoicePicked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::NewProp_InChoicePicked = { "InChoicePicked", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConversationParticipantComponent_eventServerAdvanceConversation_Parms, InChoicePicked), Z_Construct_UScriptStruct_FAdvanceConversationRequest, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::NewProp_InChoicePicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::NewProp_InChoicePicked_MetaData)) }; // 714291252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::NewProp_InChoicePicked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationParticipantComponent, nullptr, "ServerAdvanceConversation", nullptr, nullptr, sizeof(ConversationParticipantComponent_eventServerAdvanceConversation_Parms), Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationParticipantComponent);
	UClass* Z_Construct_UClass_UConversationParticipantComponent_NoRegister()
	{
		return UConversationParticipantComponent::StaticClass();
	}
	struct Z_Construct_UClass_UConversationParticipantComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationsActive_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConversationsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Auth_CurrentConversation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Auth_CurrentConversation;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Auth_Conversations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Auth_Conversations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Auth_Conversations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationParticipantComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationParticipantComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ClientExecuteTaskAndSideEffects, "ClientExecuteTaskAndSideEffects" }, // 3095223124
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ClientStartConversation, "ClientStartConversation" }, // 4134848716
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversation, "ClientUpdateConversation" }, // 1835690839
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversations, "ClientUpdateConversations" }, // 1087447124
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateConversationTaskChoiceData, "ClientUpdateConversationTaskChoiceData" }, // 2054291671
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ClientUpdateParticipants, "ClientUpdateParticipants" }, // 2674233680
		{ &Z_Construct_UFunction_UConversationParticipantComponent_GetParticipantDisplayName, "GetParticipantDisplayName" }, // 4175341905
		{ &Z_Construct_UFunction_UConversationParticipantComponent_IsInActiveConversation, "IsInActiveConversation" }, // 2304160705
		{ &Z_Construct_UFunction_UConversationParticipantComponent_OnRep_ConversationsActive, "OnRep_ConversationsActive" }, // 2305774218
		{ &Z_Construct_UFunction_UConversationParticipantComponent_RequestServerAdvanceConversation, "RequestServerAdvanceConversation" }, // 2765127320
		{ &Z_Construct_UFunction_UConversationParticipantComponent_ServerAdvanceConversation, "ServerAdvanceConversation" }, // 1325397479
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationParticipantComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Active conversation participants should have this component on them.\n * It keeps track of what conversations they are participating in (typically no more than one)\n */" },
		{ "IncludePath", "ConversationParticipantComponent.h" },
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
		{ "ToolTip", "Active conversation participants should have this component on them.\nIt keeps track of what conversations they are participating in (typically no more than one)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_ConversationsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_ConversationsActive = { "ConversationsActive", "OnRep_ConversationsActive", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationParticipantComponent, ConversationsActive), METADATA_PARAMS(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_ConversationsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_ConversationsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_CurrentConversation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_CurrentConversation = { "Auth_CurrentConversation", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationParticipantComponent, Auth_CurrentConversation), Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_CurrentConversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_CurrentConversation_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations_Inner = { "Auth_Conversations", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations = { "Auth_Conversations", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationParticipantComponent, Auth_Conversations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_LastMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationParticipantComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_LastMessage = { "LastMessage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationParticipantComponent, LastMessage), Z_Construct_UScriptStruct_FClientConversationMessagePayload, METADATA_PARAMS(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_LastMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_LastMessage_MetaData)) }; // 117888623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationParticipantComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_ConversationsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_CurrentConversation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_Auth_Conversations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationParticipantComponent_Statics::NewProp_LastMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationParticipantComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationParticipantComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationParticipantComponent_Statics::ClassParams = {
		&UConversationParticipantComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConversationParticipantComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationParticipantComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationParticipantComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationParticipantComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationParticipantComponent()
	{
		if (!Z_Registration_Info_UClass_UConversationParticipantComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationParticipantComponent.OuterSingleton, Z_Construct_UClass_UConversationParticipantComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationParticipantComponent.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationParticipantComponent>()
	{
		return UConversationParticipantComponent::StaticClass();
	}

	void UConversationParticipantComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ConversationsActive(TEXT("ConversationsActive"));

		const bool bIsValid = true
			&& Name_ConversationsActive == ClassReps[(int32)ENetFields_Private::ConversationsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UConversationParticipantComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationParticipantComponent);
	UConversationParticipantComponent::~UConversationParticipantComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationParticipantComponent, UConversationParticipantComponent::StaticClass, TEXT("UConversationParticipantComponent"), &Z_Registration_Info_UClass_UConversationParticipantComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationParticipantComponent), 2756740324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_1571902722(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
