// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/PartyBeaconClient.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "../Public/PartyBeaconState.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconClient() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClientRequestType;
	static UEnum* EClientRequestType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EClientRequestType"));
		}
		return Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EClientRequestType>()
	{
		return EClientRequestType_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enumerators[] = {
		{ "EClientRequestType::NonePending", (int64)EClientRequestType::NonePending },
		{ "EClientRequestType::ExistingSessionReservation", (int64)EClientRequestType::ExistingSessionReservation },
		{ "EClientRequestType::ReservationUpdate", (int64)EClientRequestType::ReservationUpdate },
		{ "EClientRequestType::EmptyServerReservation", (int64)EClientRequestType::EmptyServerReservation },
		{ "EClientRequestType::Reconnect", (int64)EClientRequestType::Reconnect },
		{ "EClientRequestType::Abandon", (int64)EClientRequestType::Abandon },
		{ "EClientRequestType::ReservationRemoveMembers", (int64)EClientRequestType::ReservationRemoveMembers },
		{ "EClientRequestType::AddOrUpdateReservation", (int64)EClientRequestType::AddOrUpdateReservation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enum_MetaDataParams[] = {
		{ "Abandon.Comment", "/** Abandon the reservation beacon (game specific handling)*/" },
		{ "Abandon.Name", "EClientRequestType::Abandon" },
		{ "Abandon.ToolTip", "Abandon the reservation beacon (game specific handling)" },
		{ "AddOrUpdateReservation.Comment", "/** Add new reservation or Update existing one*/" },
		{ "AddOrUpdateReservation.Name", "EClientRequestType::AddOrUpdateReservation" },
		{ "AddOrUpdateReservation.ToolTip", "Add new reservation or Update existing one" },
		{ "Comment", "/**\n * Types of reservation requests that can be made by this beacon\n */" },
		{ "EmptyServerReservation.Comment", "/** Reservation to configure an empty server  */" },
		{ "EmptyServerReservation.Name", "EClientRequestType::EmptyServerReservation" },
		{ "EmptyServerReservation.ToolTip", "Reservation to configure an empty server" },
		{ "ExistingSessionReservation.Comment", "/** Make a reservation with an existing session */" },
		{ "ExistingSessionReservation.Name", "EClientRequestType::ExistingSessionReservation" },
		{ "ExistingSessionReservation.ToolTip", "Make a reservation with an existing session" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "NonePending.Comment", "/** None pending */" },
		{ "NonePending.Name", "EClientRequestType::NonePending" },
		{ "NonePending.ToolTip", "None pending" },
		{ "Reconnect.Comment", "/** Simple reconnect (checks for existing reservation) */" },
		{ "Reconnect.Name", "EClientRequestType::Reconnect" },
		{ "Reconnect.ToolTip", "Simple reconnect (checks for existing reservation)" },
		{ "ReservationRemoveMembers.Comment", "/** Remove members from an existing reservation */" },
		{ "ReservationRemoveMembers.Name", "EClientRequestType::ReservationRemoveMembers" },
		{ "ReservationRemoveMembers.ToolTip", "Remove members from an existing reservation" },
		{ "ReservationUpdate.Comment", "/** Make an update to an existing reservation */" },
		{ "ReservationUpdate.Name", "EClientRequestType::ReservationUpdate" },
		{ "ReservationUpdate.ToolTip", "Make an update to an existing reservation" },
		{ "ToolTip", "Types of reservation requests that can be made by this beacon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		"EClientRequestType",
		"EClientRequestType",
		Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType()
	{
		if (!Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execServerCancelReservationRequest)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PartyLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCancelReservationRequest_Validate(Z_Param_PartyLeader))
		{
			RPC_ValidateFailed(TEXT("ServerCancelReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerCancelReservationRequest_Implementation(Z_Param_PartyLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execServerRemoveMemberFromReservationRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_STRUCT(FPartyReservation,Z_Param_ReservationUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRemoveMemberFromReservationRequest_Validate(Z_Param_SessionId,Z_Param_ReservationUpdate))
		{
			RPC_ValidateFailed(TEXT("ServerRemoveMemberFromReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerRemoveMemberFromReservationRequest_Implementation(Z_Param_SessionId,Z_Param_ReservationUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execServerAddOrUpdateReservationRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_STRUCT(FPartyReservation,Z_Param_Reservation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerAddOrUpdateReservationRequest_Validate(Z_Param_SessionId,Z_Param_Reservation))
		{
			RPC_ValidateFailed(TEXT("ServerAddOrUpdateReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerAddOrUpdateReservationRequest_Implementation(Z_Param_SessionId,Z_Param_Reservation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execServerUpdateReservationRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_STRUCT(FPartyReservation,Z_Param_ReservationUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateReservationRequest_Validate(Z_Param_SessionId,Z_Param_ReservationUpdate))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerUpdateReservationRequest_Implementation(Z_Param_SessionId,Z_Param_ReservationUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execServerReservationRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_STRUCT(FPartyReservation,Z_Param_Reservation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReservationRequest_Validate(Z_Param_SessionId,Z_Param_Reservation))
		{
			RPC_ValidateFailed(TEXT("ServerReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerReservationRequest_Implementation(Z_Param_SessionId,Z_Param_Reservation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execClientSendReservationFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSendReservationFull_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execClientSendReservationUpdates)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumRemainingReservations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSendReservationUpdates_Implementation(Z_Param_NumRemainingReservations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execClientCancelReservationResponse)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type(Z_Param_ReservationResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyBeaconClient::execClientReservationResponse)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReservationResponse_Implementation(EPartyReservationResult::Type(Z_Param_ReservationResponse));
		P_NATIVE_END;
	}
	struct PartyBeaconClient_eventClientCancelReservationResponse_Parms
	{
		TEnumAsByte<EPartyReservationResult::Type> ReservationResponse;
	};
	struct PartyBeaconClient_eventClientReservationResponse_Parms
	{
		TEnumAsByte<EPartyReservationResult::Type> ReservationResponse;
	};
	struct PartyBeaconClient_eventClientSendReservationUpdates_Parms
	{
		int32 NumRemainingReservations;
	};
	struct PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms
	{
		FString SessionId;
		FPartyReservation Reservation;
	};
	struct PartyBeaconClient_eventServerCancelReservationRequest_Parms
	{
		FUniqueNetIdRepl PartyLeader;
	};
	struct PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms
	{
		FString SessionId;
		FPartyReservation ReservationUpdate;
	};
	struct PartyBeaconClient_eventServerReservationRequest_Parms
	{
		FString SessionId;
		FPartyReservation Reservation;
	};
	struct PartyBeaconClient_eventServerUpdateReservationRequest_Parms
	{
		FString SessionId;
		FPartyReservation ReservationUpdate;
	};
	static FName NAME_APartyBeaconClient_ClientCancelReservationResponse = FName(TEXT("ClientCancelReservationResponse"));
	void APartyBeaconClient::ClientCancelReservationResponse(EPartyReservationResult::Type ReservationResponse)
	{
		PartyBeaconClient_eventClientCancelReservationResponse_Parms Parms;
		Parms.ReservationResponse=ReservationResponse;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientCancelReservationResponse),&Parms);
	}
	static FName NAME_APartyBeaconClient_ClientReservationResponse = FName(TEXT("ClientReservationResponse"));
	void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult::Type ReservationResponse)
	{
		PartyBeaconClient_eventClientReservationResponse_Parms Parms;
		Parms.ReservationResponse=ReservationResponse;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientReservationResponse),&Parms);
	}
	static FName NAME_APartyBeaconClient_ClientSendReservationFull = FName(TEXT("ClientSendReservationFull"));
	void APartyBeaconClient::ClientSendReservationFull()
	{
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientSendReservationFull),NULL);
	}
	static FName NAME_APartyBeaconClient_ClientSendReservationUpdates = FName(TEXT("ClientSendReservationUpdates"));
	void APartyBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
	{
		PartyBeaconClient_eventClientSendReservationUpdates_Parms Parms;
		Parms.NumRemainingReservations=NumRemainingReservations;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientSendReservationUpdates),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest = FName(TEXT("ServerAddOrUpdateReservationRequest"));
	void APartyBeaconClient::ServerAddOrUpdateReservationRequest(const FString& SessionId, FPartyReservation const& Reservation)
	{
		PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.Reservation=Reservation;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerCancelReservationRequest = FName(TEXT("ServerCancelReservationRequest"));
	void APartyBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl const& PartyLeader)
	{
		PartyBeaconClient_eventServerCancelReservationRequest_Parms Parms;
		Parms.PartyLeader=PartyLeader;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerCancelReservationRequest),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest = FName(TEXT("ServerRemoveMemberFromReservationRequest"));
	void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(const FString& SessionId, FPartyReservation const& ReservationUpdate)
	{
		PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.ReservationUpdate=ReservationUpdate;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerReservationRequest = FName(TEXT("ServerReservationRequest"));
	void APartyBeaconClient::ServerReservationRequest(const FString& SessionId, FPartyReservation const& Reservation)
	{
		PartyBeaconClient_eventServerReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.Reservation=Reservation;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerReservationRequest),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerUpdateReservationRequest = FName(TEXT("ServerUpdateReservationRequest"));
	void APartyBeaconClient::ServerUpdateReservationRequest(const FString& SessionId, FPartyReservation const& ReservationUpdate)
	{
		PartyBeaconClient_eventServerUpdateReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.ReservationUpdate=ReservationUpdate;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerUpdateReservationRequest),&Parms);
	}
	void APartyBeaconClient::StaticRegisterNativesAPartyBeaconClient()
	{
		UClass* Class = APartyBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientCancelReservationResponse", &APartyBeaconClient::execClientCancelReservationResponse },
			{ "ClientReservationResponse", &APartyBeaconClient::execClientReservationResponse },
			{ "ClientSendReservationFull", &APartyBeaconClient::execClientSendReservationFull },
			{ "ClientSendReservationUpdates", &APartyBeaconClient::execClientSendReservationUpdates },
			{ "ServerAddOrUpdateReservationRequest", &APartyBeaconClient::execServerAddOrUpdateReservationRequest },
			{ "ServerCancelReservationRequest", &APartyBeaconClient::execServerCancelReservationRequest },
			{ "ServerRemoveMemberFromReservationRequest", &APartyBeaconClient::execServerRemoveMemberFromReservationRequest },
			{ "ServerReservationRequest", &APartyBeaconClient::execServerReservationRequest },
			{ "ServerUpdateReservationRequest", &APartyBeaconClient::execServerUpdateReservationRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventClientCancelReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, METADATA_PARAMS(nullptr, 0) }; // 3325762825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session after making a cancellation request\n\x09 *\n\x09 * @param ReservationResponse response from server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a cancellation request\n\n@param ReservationResponse response from server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientCancelReservationResponse", nullptr, nullptr, sizeof(PartyBeaconClient_eventClientCancelReservationResponse_Parms), Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventClientReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, METADATA_PARAMS(nullptr, 0) }; // 3325762825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session after making a reservation request\n\x09 *\n\x09 * @param ReservationResponse response from server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a reservation request\n\n@param ReservationResponse response from server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientReservationResponse", nullptr, nullptr, sizeof(PartyBeaconClient_eventClientReservationResponse_Parms), Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Response from the host session that the reservation is full */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation is full" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientSendReservationFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumRemainingReservations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations = { "NumRemainingReservations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventClientSendReservationUpdates_Parms, NumRemainingReservations), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session that the reservation count has changed\n\x09 *\n\x09 * @param NumRemainingReservations number of slots remaining until a full session\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation count has changed\n\n@param NumRemainingReservations number of slots remaining until a full session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientSendReservationUpdates", nullptr, nullptr, sizeof(PartyBeaconClient_eventClientSendReservationUpdates_Parms), Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reservation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reservation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation_MetaData)) }; // 1364401777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::NewProp_Reservation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation add or update request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation add or update request being made\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerAddOrUpdateReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerAddOrUpdateReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyLeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartyLeader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader = { "PartyLeader", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerCancelReservationRequest_Parms, PartyLeader), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to cancel a pending or existing reservation\n\x09 *\n\x09 * @param PartyLeader id of the party leader for the reservation to cancel\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server to cancel a pending or existing reservation\n\n@param PartyLeader id of the party leader for the reservation to cancel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerCancelReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerCancelReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReservationUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReservationUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate = { "ReservationUpdate", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms, ReservationUpdate), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate_MetaData)) }; // 1364401777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::NewProp_ReservationUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server that we are removing members from our reservation\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server that we are removing members from our reservation\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerRemoveMemberFromReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reservation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reservation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData)) }; // 1364401777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param Reservation pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation request being made\n\n@param SessionId expected session id on the other end (must match)\n@param Reservation pending reservation request to make with server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReservationUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReservationUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerUpdateReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate = { "ReservationUpdate", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PartyBeaconClient_eventServerUpdateReservationRequest_Parms, ReservationUpdate), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate_MetaData)) }; // 1364401777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation update request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation update request being made\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerUpdateReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerUpdateReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartyBeaconClient);
	UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister()
	{
		return APartyBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_APartyBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestSessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestSessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingReservation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingReservation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingReservationSent_MetaData[];
#endif
		static void NewProp_bPendingReservationSent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingReservationSent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelReservation_MetaData[];
#endif
		static void NewProp_bCancelReservation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelReservation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartyBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APartyBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse, "ClientCancelReservationResponse" }, // 3466755770
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse, "ClientReservationResponse" }, // 2604182725
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull, "ClientSendReservationFull" }, // 3133320018
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates, "ClientSendReservationUpdates" }, // 4100524995
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest, "ServerAddOrUpdateReservationRequest" }, // 1712324730
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest, "ServerCancelReservationRequest" }, // 1229909674
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest, "ServerRemoveMemberFromReservationRequest" }, // 2651276610
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest, "ServerReservationRequest" }, // 1353257649
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest, "ServerUpdateReservationRequest" }, // 3131861043
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon client used for making reservations with an existing game session\n */" },
		{ "IncludePath", "PartyBeaconClient.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId_MetaData[] = {
		{ "Comment", "/** Session Id of the destination host */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Session Id of the destination host" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId = { "DestSessionId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APartyBeaconClient, DestSessionId), METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation_MetaData[] = {
		{ "Comment", "/** Pending reservation that will be sent upon connection with the intended host */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Pending reservation that will be sent upon connection with the intended host" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation = { "PendingReservation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APartyBeaconClient, PendingReservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation_MetaData)) }; // 1364401777
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_MetaData[] = {
		{ "Comment", "/** Type of request currently being handled by this client beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Type of request currently being handled by this client beacon" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APartyBeaconClient, RequestType), Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_MetaData)) }; // 3501230932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData[] = {
		{ "Comment", "/** Has the reservation request been delivered */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been delivered" },
	};
#endif
	void Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit(void* Obj)
	{
		((APartyBeaconClient*)Obj)->bPendingReservationSent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent = { "bPendingReservationSent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APartyBeaconClient), &Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_MetaData[] = {
		{ "Comment", "/** Has the reservation request been canceled */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been canceled" },
	};
#endif
	void Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void* Obj)
	{
		((APartyBeaconClient*)Obj)->bCancelReservation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation = { "bCancelReservation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APartyBeaconClient), &Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartyBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyBeaconClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams = {
		&APartyBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartyBeaconClient()
	{
		if (!Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton, Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<APartyBeaconClient>()
	{
		return APartyBeaconClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartyBeaconClient);
	APartyBeaconClient::~APartyBeaconClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::EnumInfo[] = {
		{ EClientRequestType_StaticEnum, TEXT("EClientRequestType"), &Z_Registration_Info_UEnum_EClientRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3501230932U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APartyBeaconClient, APartyBeaconClient::StaticClass, TEXT("APartyBeaconClient"), &Z_Registration_Info_UClass_APartyBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartyBeaconClient), 784115217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_111313214(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
