// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;
class APlayerController;
class APlayerState;
class UObject;
#ifdef ENGINE_GameModeBase_generated_h
#error "GameModeBase.generated.h already included, missing '#pragma once' in GameModeBase.h"
#endif
#define ENGINE_GameModeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS \
	virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
 \
	DECLARE_FUNCTION(execInitializeHUDForPlayer); \
	DECLARE_FUNCTION(execInitStartSpot); \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform); \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor); \
	DECLARE_FUNCTION(execRestartPlayerAtTransform); \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart); \
	DECLARE_FUNCTION(execRestartPlayer); \
	DECLARE_FUNCTION(execPlayerCanRestart); \
	DECLARE_FUNCTION(execK2_FindPlayerStart); \
	DECLARE_FUNCTION(execFindPlayerStart); \
	DECLARE_FUNCTION(execChoosePlayerStart); \
	DECLARE_FUNCTION(execChangeName); \
	DECLARE_FUNCTION(execCanSpectate); \
	DECLARE_FUNCTION(execMustSpectate); \
	DECLARE_FUNCTION(execHandleStartingNewPlayer); \
	DECLARE_FUNCTION(execReturnToMainMenuHost); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execShouldReset); \
	DECLARE_FUNCTION(execHasMatchEnded); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execGetNumSpectators); \
	DECLARE_FUNCTION(execGetNumPlayers); \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
 \
	DECLARE_FUNCTION(execInitializeHUDForPlayer); \
	DECLARE_FUNCTION(execInitStartSpot); \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform); \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor); \
	DECLARE_FUNCTION(execRestartPlayerAtTransform); \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart); \
	DECLARE_FUNCTION(execRestartPlayer); \
	DECLARE_FUNCTION(execPlayerCanRestart); \
	DECLARE_FUNCTION(execK2_FindPlayerStart); \
	DECLARE_FUNCTION(execFindPlayerStart); \
	DECLARE_FUNCTION(execChoosePlayerStart); \
	DECLARE_FUNCTION(execChangeName); \
	DECLARE_FUNCTION(execCanSpectate); \
	DECLARE_FUNCTION(execMustSpectate); \
	DECLARE_FUNCTION(execHandleStartingNewPlayer); \
	DECLARE_FUNCTION(execReturnToMainMenuHost); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execShouldReset); \
	DECLARE_FUNCTION(execHasMatchEnded); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execGetNumSpectators); \
	DECLARE_FUNCTION(execGetNumPlayers); \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend struct Z_Construct_UClass_AGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend struct Z_Construct_UClass_AGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeBase(AGameModeBase&&); \
	NO_API AGameModeBase(const AGameModeBase&); \
public: \
	NO_API virtual ~AGameModeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeBase(AGameModeBase&&); \
	NO_API AGameModeBase(const AGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase) \
	NO_API virtual ~AGameModeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameModeBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
