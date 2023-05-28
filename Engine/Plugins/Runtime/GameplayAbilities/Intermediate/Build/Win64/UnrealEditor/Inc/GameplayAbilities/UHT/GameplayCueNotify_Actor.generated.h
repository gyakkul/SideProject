// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueNotify_Actor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;
#ifdef GAMEPLAYABILITIES_GameplayCueNotify_Actor_generated_h
#error "GameplayCueNotify_Actor.generated.h already included, missing '#pragma once' in GameplayCueNotify_Actor.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueNotify_Actor_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_RPC_WRAPPERS \
	virtual bool OnRemove_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	virtual bool WhileActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	virtual bool OnActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	virtual bool OnExecute_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
 \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execWhileActive); \
	DECLARE_FUNCTION(execOnActive); \
	DECLARE_FUNCTION(execOnExecute); \
	DECLARE_FUNCTION(execK2_EndGameplayCue); \
	DECLARE_FUNCTION(execOnOwnerDestroyed);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnRemove_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	virtual bool WhileActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	virtual bool OnActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
	virtual bool OnExecute_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters); \
 \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execWhileActive); \
	DECLARE_FUNCTION(execOnActive); \
	DECLARE_FUNCTION(execOnExecute); \
	DECLARE_FUNCTION(execK2_EndGameplayCue); \
	DECLARE_FUNCTION(execOnOwnerDestroyed);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AGameplayCueNotify_Actor, NO_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCueNotify_Actor(); \
	friend struct Z_Construct_UClass_AGameplayCueNotify_Actor_Statics; \
public: \
	DECLARE_CLASS(AGameplayCueNotify_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(AGameplayCueNotify_Actor) \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayCueNotify_Actor(); \
	friend struct Z_Construct_UClass_AGameplayCueNotify_Actor_Statics; \
public: \
	DECLARE_CLASS(AGameplayCueNotify_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(AGameplayCueNotify_Actor) \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayCueNotify_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCueNotify_Actor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayCueNotify_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCueNotify_Actor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayCueNotify_Actor(AGameplayCueNotify_Actor&&); \
	NO_API AGameplayCueNotify_Actor(const AGameplayCueNotify_Actor&); \
public: \
	NO_API virtual ~AGameplayCueNotify_Actor();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayCueNotify_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayCueNotify_Actor(AGameplayCueNotify_Actor&&); \
	NO_API AGameplayCueNotify_Actor(const AGameplayCueNotify_Actor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayCueNotify_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCueNotify_Actor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCueNotify_Actor) \
	NO_API virtual ~AGameplayCueNotify_Actor();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayCueNotify_Actor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class AGameplayCueNotify_Actor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
