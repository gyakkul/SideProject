// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/GameplayStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class AController;
class AGameModeBase;
class AGameStateBase;
class APawn;
class APlayerCameraManager;
class APlayerController;
class APlayerState;
class ASceneCapture2D;
class UAudioComponent;
class UBlueprint;
class UCameraShakeBase;
class UDamageType;
class UDecalComponent;
class UDialogueWave;
class UForceFeedbackAttenuation;
class UForceFeedbackComponent;
class UForceFeedbackEffect;
class UGameInstance;
class UInitialActiveSoundParams;
class UInterface;
class ULevelStreaming;
class UMaterialInterface;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UReverbEffect;
class USaveGame;
class USceneComponent;
class USoundAttenuation;
class USoundBase;
class USoundClass;
class USoundConcurrency;
class USoundMix;
class UStaticMesh;
class UWorld;
enum class EMouseCaptureMode : uint8;
enum class EPSCPoolMethod : uint8;
enum class ESpawnActorCollisionHandlingMethod : uint8;
enum class ESpawnActorScaleMethod : uint8;
struct FDialogueContext;
struct FHitResult;
struct FLatentActionInfo;
struct FMinimalViewInfo;
struct FPlatformUserId;
struct FPredictProjectilePathParams;
struct FPredictProjectilePathResult;
struct FUniqueNetIdRepl;
#ifdef ENGINE_GameplayStatics_generated_h
#error "GameplayStatics.generated.h already included, missing '#pragma once' in GameplayStatics.h"
#endif
#define ENGINE_GameplayStatics_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnnounceAccessibleString); \
	DECLARE_FUNCTION(execHasLaunchOption); \
	DECLARE_FUNCTION(execGetIntOption); \
	DECLARE_FUNCTION(execHasOption); \
	DECLARE_FUNCTION(execParseOption); \
	DECLARE_FUNCTION(execGetKeyValue); \
	DECLARE_FUNCTION(execGetViewProjectionMatrix); \
	DECLARE_FUNCTION(execProjectWorldToScreen); \
	DECLARE_FUNCTION(execDeprojectSceneCaptureToWorld); \
	DECLARE_FUNCTION(execDeprojectScreenToWorld); \
	DECLARE_FUNCTION(execGrassOverlappingSphereCount); \
	DECLARE_FUNCTION(execRebaseZeroOriginOntoLocal); \
	DECLARE_FUNCTION(execRebaseLocalOriginOntoZero); \
	DECLARE_FUNCTION(execSetWorldOriginLocation); \
	DECLARE_FUNCTION(execGetWorldOriginLocation); \
	DECLARE_FUNCTION(execSuggestProjectileVelocity_CustomArc); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_Advanced); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByTraceChannel); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByObjectType); \
	DECLARE_FUNCTION(execBlueprintSuggestProjectileVelocity); \
	DECLARE_FUNCTION(execGetPlatformName); \
	DECLARE_FUNCTION(execEnableLiveStreaming); \
	DECLARE_FUNCTION(execGetAccurateRealTime); \
	DECLARE_FUNCTION(execGetAudioTimeSeconds); \
	DECLARE_FUNCTION(execGetRealTimeSeconds); \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds); \
	DECLARE_FUNCTION(execGetTimeSeconds); \
	DECLARE_FUNCTION(execGetWorldDeltaSeconds); \
	DECLARE_FUNCTION(execDeleteGameInSlot); \
	DECLARE_FUNCTION(execLoadGameFromSlot); \
	DECLARE_FUNCTION(execDoesSaveGameExist); \
	DECLARE_FUNCTION(execSaveGameToSlot); \
	DECLARE_FUNCTION(execCreateSaveGameObject); \
	DECLARE_FUNCTION(execFindCollisionUV); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execMakeHitResult); \
	DECLARE_FUNCTION(execBreakHitResult); \
	DECLARE_FUNCTION(execSpawnDecalAttached); \
	DECLARE_FUNCTION(execSpawnDecalAtLocation); \
	DECLARE_FUNCTION(execGetMaxAudioChannelCount); \
	DECLARE_FUNCTION(execSetMaxAudioChannelsScaled); \
	DECLARE_FUNCTION(execGetCurrentReverbEffect); \
	DECLARE_FUNCTION(execDeactivateReverbEffect); \
	DECLARE_FUNCTION(execActivateReverbEffect); \
	DECLARE_FUNCTION(execClearSoundMixModifiers); \
	DECLARE_FUNCTION(execPopSoundMixModifier); \
	DECLARE_FUNCTION(execPushSoundMixModifier); \
	DECLARE_FUNCTION(execClearSoundMixClassOverride); \
	DECLARE_FUNCTION(execSetSoundMixClassOverride); \
	DECLARE_FUNCTION(execUnRetainAllSoundsInSoundClass); \
	DECLARE_FUNCTION(execPrimeAllSoundsInSoundClass); \
	DECLARE_FUNCTION(execSetActiveSpatialPluginByName); \
	DECLARE_FUNCTION(execGetActiveSpatialPluginName); \
	DECLARE_FUNCTION(execGetAvailableSpatialPluginNames); \
	DECLARE_FUNCTION(execPrimeSound); \
	DECLARE_FUNCTION(execSetBaseSoundMix); \
	DECLARE_FUNCTION(execAreSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAttached); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogueAttached); \
	DECLARE_FUNCTION(execSpawnDialogueAtLocation); \
	DECLARE_FUNCTION(execPlayDialogueAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogue2D); \
	DECLARE_FUNCTION(execPlayDialogue2D); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execSetGlobalListenerFocusParameters); \
	DECLARE_FUNCTION(execSetSoundClassDistanceScale); \
	DECLARE_FUNCTION(execSetGlobalPitchModulation); \
	DECLARE_FUNCTION(execGetClosestListenerLocation); \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange); \
	DECLARE_FUNCTION(execSpawnEmitterAttached); \
	DECLARE_FUNCTION(execSpawnEmitterAtLocation); \
	DECLARE_FUNCTION(execPlayWorldCameraShake); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execApplyPointDamage); \
	DECLARE_FUNCTION(execApplyRadialDamageWithFalloff); \
	DECLARE_FUNCTION(execApplyRadialDamage); \
	DECLARE_FUNCTION(execSetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetEnableWorldRendering); \
	DECLARE_FUNCTION(execSetEnableWorldRendering); \
	DECLARE_FUNCTION(execIsSplitscreenForceDisabled); \
	DECLARE_FUNCTION(execSetForceDisableSplitscreen); \
	DECLARE_FUNCTION(execIsGamePaused); \
	DECLARE_FUNCTION(execSetGamePaused); \
	DECLARE_FUNCTION(execSetGlobalTimeDilation); \
	DECLARE_FUNCTION(execGetGlobalTimeDilation); \
	DECLARE_FUNCTION(execObjectIsA); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetCurrentLevelName); \
	DECLARE_FUNCTION(execOpenLevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execCancelAsyncLoading); \
	DECLARE_FUNCTION(execFlushLevelStreaming); \
	DECLARE_FUNCTION(execGetStreamingLevel); \
	DECLARE_FUNCTION(execUnloadStreamLevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execUnloadStreamLevel); \
	DECLARE_FUNCTION(execLoadStreamLevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadStreamLevel); \
	DECLARE_FUNCTION(execSetPlayerPlatformUserId); \
	DECLARE_FUNCTION(execSetPlayerControllerID); \
	DECLARE_FUNCTION(execGetPlayerControllerID); \
	DECLARE_FUNCTION(execRemovePlayer); \
	DECLARE_FUNCTION(execCreatePlayerFromPlatformUser); \
	DECLARE_FUNCTION(execCreatePlayer); \
	DECLARE_FUNCTION(execGetPlayerControllerFromPlatformUser); \
	DECLARE_FUNCTION(execGetPlayerControllerFromID); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetNumLocalPlayerControllers); \
	DECLARE_FUNCTION(execGetNumPlayerControllers); \
	DECLARE_FUNCTION(execGetPlayerStateFromUniqueNetId); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execGetNumPlayerStates); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execFindNearestActor); \
	DECLARE_FUNCTION(execGetAllActorsOfClassWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithInterface); \
	DECLARE_FUNCTION(execGetAllActorsOfClass); \
	DECLARE_FUNCTION(execGetActorOfClass); \
	DECLARE_FUNCTION(execGetActorArrayBounds); \
	DECLARE_FUNCTION(execGetActorArrayAverageLocation); \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginDeferredActorSpawnFromClass); \
	DECLARE_FUNCTION(execBeginSpawningActorFromBlueprint); \
	DECLARE_FUNCTION(execSpawnObject);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnnounceAccessibleString); \
	DECLARE_FUNCTION(execHasLaunchOption); \
	DECLARE_FUNCTION(execGetIntOption); \
	DECLARE_FUNCTION(execHasOption); \
	DECLARE_FUNCTION(execParseOption); \
	DECLARE_FUNCTION(execGetKeyValue); \
	DECLARE_FUNCTION(execGetViewProjectionMatrix); \
	DECLARE_FUNCTION(execProjectWorldToScreen); \
	DECLARE_FUNCTION(execDeprojectSceneCaptureToWorld); \
	DECLARE_FUNCTION(execDeprojectScreenToWorld); \
	DECLARE_FUNCTION(execGrassOverlappingSphereCount); \
	DECLARE_FUNCTION(execRebaseZeroOriginOntoLocal); \
	DECLARE_FUNCTION(execRebaseLocalOriginOntoZero); \
	DECLARE_FUNCTION(execSetWorldOriginLocation); \
	DECLARE_FUNCTION(execGetWorldOriginLocation); \
	DECLARE_FUNCTION(execSuggestProjectileVelocity_CustomArc); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_Advanced); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByTraceChannel); \
	DECLARE_FUNCTION(execBlueprint_PredictProjectilePath_ByObjectType); \
	DECLARE_FUNCTION(execBlueprintSuggestProjectileVelocity); \
	DECLARE_FUNCTION(execGetPlatformName); \
	DECLARE_FUNCTION(execEnableLiveStreaming); \
	DECLARE_FUNCTION(execGetAccurateRealTime); \
	DECLARE_FUNCTION(execGetAudioTimeSeconds); \
	DECLARE_FUNCTION(execGetRealTimeSeconds); \
	DECLARE_FUNCTION(execGetUnpausedTimeSeconds); \
	DECLARE_FUNCTION(execGetTimeSeconds); \
	DECLARE_FUNCTION(execGetWorldDeltaSeconds); \
	DECLARE_FUNCTION(execDeleteGameInSlot); \
	DECLARE_FUNCTION(execLoadGameFromSlot); \
	DECLARE_FUNCTION(execDoesSaveGameExist); \
	DECLARE_FUNCTION(execSaveGameToSlot); \
	DECLARE_FUNCTION(execCreateSaveGameObject); \
	DECLARE_FUNCTION(execFindCollisionUV); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execMakeHitResult); \
	DECLARE_FUNCTION(execBreakHitResult); \
	DECLARE_FUNCTION(execSpawnDecalAttached); \
	DECLARE_FUNCTION(execSpawnDecalAtLocation); \
	DECLARE_FUNCTION(execGetMaxAudioChannelCount); \
	DECLARE_FUNCTION(execSetMaxAudioChannelsScaled); \
	DECLARE_FUNCTION(execGetCurrentReverbEffect); \
	DECLARE_FUNCTION(execDeactivateReverbEffect); \
	DECLARE_FUNCTION(execActivateReverbEffect); \
	DECLARE_FUNCTION(execClearSoundMixModifiers); \
	DECLARE_FUNCTION(execPopSoundMixModifier); \
	DECLARE_FUNCTION(execPushSoundMixModifier); \
	DECLARE_FUNCTION(execClearSoundMixClassOverride); \
	DECLARE_FUNCTION(execSetSoundMixClassOverride); \
	DECLARE_FUNCTION(execUnRetainAllSoundsInSoundClass); \
	DECLARE_FUNCTION(execPrimeAllSoundsInSoundClass); \
	DECLARE_FUNCTION(execSetActiveSpatialPluginByName); \
	DECLARE_FUNCTION(execGetActiveSpatialPluginName); \
	DECLARE_FUNCTION(execGetAvailableSpatialPluginNames); \
	DECLARE_FUNCTION(execPrimeSound); \
	DECLARE_FUNCTION(execSetBaseSoundMix); \
	DECLARE_FUNCTION(execAreSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAttached); \
	DECLARE_FUNCTION(execSpawnForceFeedbackAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogueAttached); \
	DECLARE_FUNCTION(execSpawnDialogueAtLocation); \
	DECLARE_FUNCTION(execPlayDialogueAtLocation); \
	DECLARE_FUNCTION(execSpawnDialogue2D); \
	DECLARE_FUNCTION(execPlayDialogue2D); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execSetGlobalListenerFocusParameters); \
	DECLARE_FUNCTION(execSetSoundClassDistanceScale); \
	DECLARE_FUNCTION(execSetGlobalPitchModulation); \
	DECLARE_FUNCTION(execGetClosestListenerLocation); \
	DECLARE_FUNCTION(execAreAnyListenersWithinRange); \
	DECLARE_FUNCTION(execSpawnEmitterAttached); \
	DECLARE_FUNCTION(execSpawnEmitterAtLocation); \
	DECLARE_FUNCTION(execPlayWorldCameraShake); \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execApplyPointDamage); \
	DECLARE_FUNCTION(execApplyRadialDamageWithFalloff); \
	DECLARE_FUNCTION(execApplyRadialDamage); \
	DECLARE_FUNCTION(execSetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetViewportMouseCaptureMode); \
	DECLARE_FUNCTION(execGetEnableWorldRendering); \
	DECLARE_FUNCTION(execSetEnableWorldRendering); \
	DECLARE_FUNCTION(execIsSplitscreenForceDisabled); \
	DECLARE_FUNCTION(execSetForceDisableSplitscreen); \
	DECLARE_FUNCTION(execIsGamePaused); \
	DECLARE_FUNCTION(execSetGamePaused); \
	DECLARE_FUNCTION(execSetGlobalTimeDilation); \
	DECLARE_FUNCTION(execGetGlobalTimeDilation); \
	DECLARE_FUNCTION(execObjectIsA); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetCurrentLevelName); \
	DECLARE_FUNCTION(execOpenLevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execOpenLevel); \
	DECLARE_FUNCTION(execCancelAsyncLoading); \
	DECLARE_FUNCTION(execFlushLevelStreaming); \
	DECLARE_FUNCTION(execGetStreamingLevel); \
	DECLARE_FUNCTION(execUnloadStreamLevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execUnloadStreamLevel); \
	DECLARE_FUNCTION(execLoadStreamLevelBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadStreamLevel); \
	DECLARE_FUNCTION(execSetPlayerPlatformUserId); \
	DECLARE_FUNCTION(execSetPlayerControllerID); \
	DECLARE_FUNCTION(execGetPlayerControllerID); \
	DECLARE_FUNCTION(execRemovePlayer); \
	DECLARE_FUNCTION(execCreatePlayerFromPlatformUser); \
	DECLARE_FUNCTION(execCreatePlayer); \
	DECLARE_FUNCTION(execGetPlayerControllerFromPlatformUser); \
	DECLARE_FUNCTION(execGetPlayerControllerFromID); \
	DECLARE_FUNCTION(execGetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayerPawn); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetNumLocalPlayerControllers); \
	DECLARE_FUNCTION(execGetNumPlayerControllers); \
	DECLARE_FUNCTION(execGetPlayerStateFromUniqueNetId); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execGetNumPlayerStates); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execFindNearestActor); \
	DECLARE_FUNCTION(execGetAllActorsOfClassWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithTag); \
	DECLARE_FUNCTION(execGetAllActorsWithInterface); \
	DECLARE_FUNCTION(execGetAllActorsOfClass); \
	DECLARE_FUNCTION(execGetActorOfClass); \
	DECLARE_FUNCTION(execGetActorArrayBounds); \
	DECLARE_FUNCTION(execGetActorArrayAverageLocation); \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginDeferredActorSpawnFromClass); \
	DECLARE_FUNCTION(execBeginSpawningActorFromBlueprint); \
	DECLARE_FUNCTION(execSpawnObject);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayStatics(); \
	friend struct Z_Construct_UClass_UGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameplayStatics)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayStatics(); \
	friend struct Z_Construct_UClass_UGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameplayStatics)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayStatics(UGameplayStatics&&); \
	NO_API UGameplayStatics(const UGameplayStatics&); \
public: \
	NO_API virtual ~UGameplayStatics();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayStatics(UGameplayStatics&&); \
	NO_API UGameplayStatics(const UGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayStatics) \
	NO_API virtual ~UGameplayStatics();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h_51_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
