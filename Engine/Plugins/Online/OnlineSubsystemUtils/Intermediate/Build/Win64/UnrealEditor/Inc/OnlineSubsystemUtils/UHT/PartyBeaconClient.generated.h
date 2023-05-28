// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PartyBeaconClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPartyReservation;
struct FUniqueNetIdRepl;
#ifdef ONLINESUBSYSTEMUTILS_PartyBeaconClient_generated_h
#error "PartyBeaconClient.generated.h already included, missing '#pragma once' in PartyBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_PartyBeaconClient_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_RPC_WRAPPERS \
	virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& PartyLeader); \
	virtual bool ServerRemoveMemberFromReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerAddOrUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerAddOrUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	virtual bool ServerUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	virtual void ClientSendReservationFull_Implementation(); \
	virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	virtual void ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
	virtual void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
 \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerRemoveMemberFromReservationRequest); \
	DECLARE_FUNCTION(execServerAddOrUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& PartyLeader); \
	virtual bool ServerRemoveMemberFromReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerAddOrUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerAddOrUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	virtual bool ServerUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	virtual void ClientSendReservationFull_Implementation(); \
	virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	virtual void ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
	virtual void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
 \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerRemoveMemberFromReservationRequest); \
	DECLARE_FUNCTION(execServerAddOrUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartyBeaconClient(); \
	friend struct Z_Construct_UClass_APartyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(APartyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(APartyBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_INCLASS \
private: \
	static void StaticRegisterNativesAPartyBeaconClient(); \
	friend struct Z_Construct_UClass_APartyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(APartyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(APartyBeaconClient)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartyBeaconClient(APartyBeaconClient&&); \
	NO_API APartyBeaconClient(const APartyBeaconClient&); \
public: \
	NO_API virtual ~APartyBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartyBeaconClient(APartyBeaconClient&&); \
	NO_API APartyBeaconClient(const APartyBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyBeaconClient) \
	NO_API virtual ~APartyBeaconClient();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_91_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_94_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PartyBeaconClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class APartyBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h


#define FOREACH_ENUM_ECLIENTREQUESTTYPE(op) \
	op(EClientRequestType::NonePending) \
	op(EClientRequestType::ExistingSessionReservation) \
	op(EClientRequestType::ReservationUpdate) \
	op(EClientRequestType::EmptyServerReservation) \
	op(EClientRequestType::Reconnect) \
	op(EClientRequestType::Abandon) \
	op(EClientRequestType::ReservationRemoveMembers) \
	op(EClientRequestType::AddOrUpdateReservation) 

enum class EClientRequestType : uint8;
template<> struct TIsUEnumClass<EClientRequestType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EClientRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
