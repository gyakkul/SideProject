// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Party/PartyMember.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_PartyMember_generated_h
#error "PartyMember.generated.h already included, missing '#pragma once' in PartyMember.h"
#endif
#define PARTY_PartyMember_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyMemberPlatformData>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyMemberJoinInProgressRequest>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyMemberJoinInProgressResponse>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyMemberJoinInProgressData>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyMemberRepData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FOnlinePartyRepDataBase Super;


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyMemberRepData>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_RPC_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPartyMember(); \
	friend struct Z_Construct_UClass_UPartyMember_Statics; \
public: \
	DECLARE_CLASS(UPartyMember, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(UPartyMember) \
	DECLARE_WITHIN(USocialParty) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_INCLASS \
private: \
	static void StaticRegisterNativesUPartyMember(); \
	friend struct Z_Construct_UClass_UPartyMember_Statics; \
public: \
	DECLARE_CLASS(UPartyMember, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(UPartyMember) \
	DECLARE_WITHIN(USocialParty) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPartyMember(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartyMember) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartyMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyMember); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPartyMember(UPartyMember&&); \
	NO_API UPartyMember(const UPartyMember&); \
public: \
	NO_API virtual ~UPartyMember();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPartyMember(UPartyMember&&); \
	NO_API UPartyMember(const UPartyMember&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartyMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyMember); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPartyMember) \
	NO_API virtual ~UPartyMember();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_162_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTY_API UClass* StaticClass<class UPartyMember>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
