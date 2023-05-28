// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ServerStatReplicator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ServerStatReplicator_generated_h
#error "ServerStatReplicator.generated.h already included, missing '#pragma once' in ServerStatReplicator.h"
#endif
#define ENGINE_ServerStatReplicator_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAServerStatReplicator(); \
	friend struct Z_Construct_UClass_AServerStatReplicator_Statics; \
public: \
	DECLARE_CLASS(AServerStatReplicator, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AServerStatReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Channels=NETFIELD_REP_START, \
		InRate, \
		OutRate, \
		MaxPacketOverhead, \
		InRateClientMax, \
		InRateClientMin, \
		InRateClientAvg, \
		InPacketsClientMax, \
		InPacketsClientMin, \
		InPacketsClientAvg, \
		OutRateClientMax, \
		OutRateClientMin, \
		OutRateClientAvg, \
		OutPacketsClientMax, \
		OutPacketsClientMin, \
		OutPacketsClientAvg, \
		NetNumClients, \
		InPackets, \
		OutPackets, \
		InBunches, \
		OutBunches, \
		OutLoss, \
		InLoss, \
		VoiceBytesSent, \
		VoiceBytesRecv, \
		VoicePacketsSent, \
		VoicePacketsRecv, \
		PercentInVoice, \
		PercentOutVoice, \
		NumActorChannels, \
		NumConsideredActors, \
		PrioritizedActors, \
		NumRelevantActors, \
		NumRelevantDeletedActors, \
		NumReplicatedActorAttempts, \
		NumReplicatedActors, \
		NumActors, \
		NumNetActors, \
		NumDormantActors, \
		NumInitiallyDormantActors, \
		NumNetGUIDsAckd, \
		NumNetGUIDsPending, \
		NumNetGUIDsUnAckd, \
		ObjPathBytes, \
		NetGUIDOutRate, \
		NetGUIDInRate, \
		NetSaturated, \
		NETFIELD_REP_END=NetSaturated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAServerStatReplicator(); \
	friend struct Z_Construct_UClass_AServerStatReplicator_Statics; \
public: \
	DECLARE_CLASS(AServerStatReplicator, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AServerStatReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Channels=NETFIELD_REP_START, \
		InRate, \
		OutRate, \
		MaxPacketOverhead, \
		InRateClientMax, \
		InRateClientMin, \
		InRateClientAvg, \
		InPacketsClientMax, \
		InPacketsClientMin, \
		InPacketsClientAvg, \
		OutRateClientMax, \
		OutRateClientMin, \
		OutRateClientAvg, \
		OutPacketsClientMax, \
		OutPacketsClientMin, \
		OutPacketsClientAvg, \
		NetNumClients, \
		InPackets, \
		OutPackets, \
		InBunches, \
		OutBunches, \
		OutLoss, \
		InLoss, \
		VoiceBytesSent, \
		VoiceBytesRecv, \
		VoicePacketsSent, \
		VoicePacketsRecv, \
		PercentInVoice, \
		PercentOutVoice, \
		NumActorChannels, \
		NumConsideredActors, \
		PrioritizedActors, \
		NumRelevantActors, \
		NumRelevantDeletedActors, \
		NumReplicatedActorAttempts, \
		NumReplicatedActors, \
		NumActors, \
		NumNetActors, \
		NumDormantActors, \
		NumInitiallyDormantActors, \
		NumNetGUIDsAckd, \
		NumNetGUIDsPending, \
		NumNetGUIDsUnAckd, \
		ObjPathBytes, \
		NetGUIDOutRate, \
		NetGUIDInRate, \
		NetSaturated, \
		NETFIELD_REP_END=NetSaturated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AServerStatReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerStatReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerStatReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerStatReplicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerStatReplicator(AServerStatReplicator&&); \
	NO_API AServerStatReplicator(const AServerStatReplicator&); \
public: \
	NO_API virtual ~AServerStatReplicator();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AServerStatReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AServerStatReplicator(AServerStatReplicator&&); \
	NO_API AServerStatReplicator(const AServerStatReplicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AServerStatReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AServerStatReplicator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AServerStatReplicator) \
	NO_API virtual ~AServerStatReplicator();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ServerStatReplicator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AServerStatReplicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ServerStatReplicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
