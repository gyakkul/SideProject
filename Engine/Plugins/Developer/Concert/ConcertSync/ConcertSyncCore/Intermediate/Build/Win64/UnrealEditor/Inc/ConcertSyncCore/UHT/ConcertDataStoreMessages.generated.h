// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertDataStoreMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertDataStoreMessages_generated_h
#error "ConcertDataStoreMessages.generated.h already included, missing '#pragma once' in ConcertDataStoreMessages.h"
#endif
#define CONCERTSYNCCORE_ConcertDataStoreMessages_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Integer_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Integer>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Double_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Double>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_String_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_String>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Text_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Text>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_StoreValue_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_StoreValue>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_310_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_KeyValuePair_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_KeyValuePair>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_329_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_ReplicateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_ReplicateEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_347_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Request_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Request>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_FetchOrAddRequest_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertDataStore_Request Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_FetchOrAddRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_390_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_CompareExchangeRequest_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertDataStore_Request Super;


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_CompareExchangeRequest>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h_421_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertDataStore_Response_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertDataStore_Response>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertDataStoreMessages_h


#define FOREACH_ENUM_ECONCERTDATASTORERESULTCODE(op) \
	op(EConcertDataStoreResultCode::Added) \
	op(EConcertDataStoreResultCode::Fetched) \
	op(EConcertDataStoreResultCode::Exchanged) \
	op(EConcertDataStoreResultCode::NotFound) \
	op(EConcertDataStoreResultCode::TypeMismatch) \
	op(EConcertDataStoreResultCode::UnexpectedError) 

enum class EConcertDataStoreResultCode : uint8;
template<> struct TIsUEnumClass<EConcertDataStoreResultCode> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertDataStoreResultCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
