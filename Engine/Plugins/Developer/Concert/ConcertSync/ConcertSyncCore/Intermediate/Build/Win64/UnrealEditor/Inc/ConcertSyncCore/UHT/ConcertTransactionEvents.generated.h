// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTransactionEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertTransactionEvents_generated_h
#error "ConcertTransactionEvents.generated.h already included, missing '#pragma once' in ConcertTransactionEvents.h"
#endif
#define CONCERTSYNCCORE_ConcertTransactionEvents_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertObjectId_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertObjectId>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSerializedObjectData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSerializedPropertyData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertExportedObject_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertExportedObject>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertTransactionEventBase>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertTransactionEventBase Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertTransactionFinalizedEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertTransactionEventBase Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertTransactionSnapshotEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertTransactionRejectedEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h


#define FOREACH_ENUM_ETRANSACTIONFILTERRESULT(op) \
	op(ETransactionFilterResult::IncludeObject) \
	op(ETransactionFilterResult::ExcludeObject) \
	op(ETransactionFilterResult::ExcludeTransaction) \
	op(ETransactionFilterResult::UseDefault) 

enum class ETransactionFilterResult : uint8;
template<> struct TIsUEnumClass<ETransactionFilterResult> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<ETransactionFilterResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
