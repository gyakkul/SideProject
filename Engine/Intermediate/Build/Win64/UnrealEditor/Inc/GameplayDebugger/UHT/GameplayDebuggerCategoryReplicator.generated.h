// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerCategoryReplicator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayDebuggerDataPackRPCParams;
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerCategoryReplicator_generated_h
#error "GameplayDebuggerCategoryReplicator.generated.h already included, missing '#pragma once' in GameplayDebuggerCategoryReplicator.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerCategoryReplicator_generated_h

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerDataPackRPCParams_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerDataPackRPCParams>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerCategoryData>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerNetPack>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerDebugActor>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerVisLogSync>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_RPC_WRAPPERS \
	virtual void ClientDataPackPacket_Implementation(FGameplayDebuggerDataPackRPCParams const& Params); \
	virtual bool ServerSendExtensionInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendExtensionInputEvent_Implementation(int32 ExtensionId, int32 HandlerId); \
	virtual bool ServerSendCategoryInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendCategoryInputEvent_Implementation(int32 CategoryId, int32 HandlerId); \
	virtual bool ServerSetCategoryEnabled_Validate(int32 , bool ); \
	virtual void ServerSetCategoryEnabled_Implementation(int32 CategoryId, bool bEnable); \
	virtual bool ServerResetViewPoint_Validate(); \
	virtual void ServerResetViewPoint_Implementation(); \
	virtual bool ServerSetViewPoint_Validate(FVector const& , FVector const& ); \
	virtual void ServerSetViewPoint_Implementation(FVector const& InViewLocation, FVector const& InViewDirection); \
	virtual bool ServerSetDebugActor_Validate(AActor* , bool ); \
	virtual void ServerSetDebugActor_Implementation(AActor* Actor, bool bSelectInEditor); \
	virtual bool ServerSetEnabled_Validate(bool ); \
	virtual void ServerSetEnabled_Implementation(bool bEnable); \
 \
	DECLARE_FUNCTION(execClientDataPackPacket); \
	DECLARE_FUNCTION(execServerSendExtensionInputEvent); \
	DECLARE_FUNCTION(execServerSendCategoryInputEvent); \
	DECLARE_FUNCTION(execServerSetCategoryEnabled); \
	DECLARE_FUNCTION(execServerResetViewPoint); \
	DECLARE_FUNCTION(execServerSetViewPoint); \
	DECLARE_FUNCTION(execServerSetDebugActor); \
	DECLARE_FUNCTION(execServerSetEnabled); \
	DECLARE_FUNCTION(execOnRep_ReplicatedData);


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientDataPackPacket_Implementation(FGameplayDebuggerDataPackRPCParams const& Params); \
	virtual bool ServerSendExtensionInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendExtensionInputEvent_Implementation(int32 ExtensionId, int32 HandlerId); \
	virtual bool ServerSendCategoryInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendCategoryInputEvent_Implementation(int32 CategoryId, int32 HandlerId); \
	virtual bool ServerSetCategoryEnabled_Validate(int32 , bool ); \
	virtual void ServerSetCategoryEnabled_Implementation(int32 CategoryId, bool bEnable); \
	virtual bool ServerResetViewPoint_Validate(); \
	virtual void ServerResetViewPoint_Implementation(); \
	virtual bool ServerSetViewPoint_Validate(FVector const& , FVector const& ); \
	virtual void ServerSetViewPoint_Implementation(FVector const& InViewLocation, FVector const& InViewDirection); \
	virtual bool ServerSetDebugActor_Validate(AActor* , bool ); \
	virtual void ServerSetDebugActor_Implementation(AActor* Actor, bool bSelectInEditor); \
	virtual bool ServerSetEnabled_Validate(bool ); \
	virtual void ServerSetEnabled_Implementation(bool bEnable); \
 \
	DECLARE_FUNCTION(execClientDataPackPacket); \
	DECLARE_FUNCTION(execServerSendExtensionInputEvent); \
	DECLARE_FUNCTION(execServerSendCategoryInputEvent); \
	DECLARE_FUNCTION(execServerSetCategoryEnabled); \
	DECLARE_FUNCTION(execServerResetViewPoint); \
	DECLARE_FUNCTION(execServerSetViewPoint); \
	DECLARE_FUNCTION(execServerSetDebugActor); \
	DECLARE_FUNCTION(execServerSetEnabled); \
	DECLARE_FUNCTION(execOnRep_ReplicatedData);


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerCategoryReplicator(); \
	friend struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics; \
public: \
	DECLARE_CLASS(AGameplayDebuggerCategoryReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggerCategoryReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnerPC=NETFIELD_REP_START, \
		bIsEnabled, \
		ReplicatedData, \
		DebugActor, \
		VisLogSync, \
		NETFIELD_REP_END=VisLogSync	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerCategoryReplicator(); \
	friend struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics; \
public: \
	DECLARE_CLASS(AGameplayDebuggerCategoryReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggerCategoryReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnerPC=NETFIELD_REP_START, \
		bIsEnabled, \
		ReplicatedData, \
		DebugActor, \
		VisLogSync, \
		NETFIELD_REP_END=VisLogSync	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggerCategoryReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerCategoryReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggerCategoryReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerCategoryReplicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayDebuggerCategoryReplicator(AGameplayDebuggerCategoryReplicator&&); \
	NO_API AGameplayDebuggerCategoryReplicator(const AGameplayDebuggerCategoryReplicator&); \
public: \
	NO_API virtual ~AGameplayDebuggerCategoryReplicator();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggerCategoryReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayDebuggerCategoryReplicator(AGameplayDebuggerCategoryReplicator&&); \
	NO_API AGameplayDebuggerCategoryReplicator(const AGameplayDebuggerCategoryReplicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggerCategoryReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerCategoryReplicator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerCategoryReplicator) \
	NO_API virtual ~AGameplayDebuggerCategoryReplicator();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_119_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_122_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerCategoryReplicator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class AGameplayDebuggerCategoryReplicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
