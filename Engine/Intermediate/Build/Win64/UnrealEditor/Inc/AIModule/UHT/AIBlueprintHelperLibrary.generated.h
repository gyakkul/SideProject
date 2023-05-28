// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/AIBlueprintHelperLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class AController;
class APawn;
class UAIAsyncTaskBlueprintProxy;
class UAnimInstance;
class UBehaviorTree;
class UBlackboardComponent;
class UNavigationPath;
class UObject;
#ifdef AIMODULE_AIBlueprintHelperLibrary_generated_h
#error "AIBlueprintHelperLibrary.generated.h already included, missing '#pragma once' in AIBlueprintHelperLibrary.h"
#endif
#define AIMODULE_AIBlueprintHelperLibrary_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation); \
	DECLARE_FUNCTION(execSimpleMoveToActor); \
	DECLARE_FUNCTION(execGetNextNavLinkIndex); \
	DECLARE_FUNCTION(execGetCurrentPathIndex); \
	DECLARE_FUNCTION(execGetCurrentPathPoints); \
	DECLARE_FUNCTION(execGetCurrentPath); \
	DECLARE_FUNCTION(execIsValidAIRotation); \
	DECLARE_FUNCTION(execIsValidAIDirection); \
	DECLARE_FUNCTION(execIsValidAILocation); \
	DECLARE_FUNCTION(execUnlockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execLockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execGetBlackboard); \
	DECLARE_FUNCTION(execGetAIController); \
	DECLARE_FUNCTION(execSpawnAIFromClass); \
	DECLARE_FUNCTION(execSendAIMessage); \
	DECLARE_FUNCTION(execCreateMoveToProxyObject);


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation); \
	DECLARE_FUNCTION(execSimpleMoveToActor); \
	DECLARE_FUNCTION(execGetNextNavLinkIndex); \
	DECLARE_FUNCTION(execGetCurrentPathIndex); \
	DECLARE_FUNCTION(execGetCurrentPathPoints); \
	DECLARE_FUNCTION(execGetCurrentPath); \
	DECLARE_FUNCTION(execIsValidAIRotation); \
	DECLARE_FUNCTION(execIsValidAIDirection); \
	DECLARE_FUNCTION(execIsValidAILocation); \
	DECLARE_FUNCTION(execUnlockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execLockAIResourcesWithAnimation); \
	DECLARE_FUNCTION(execGetBlackboard); \
	DECLARE_FUNCTION(execGetAIController); \
	DECLARE_FUNCTION(execSpawnAIFromClass); \
	DECLARE_FUNCTION(execSendAIMessage); \
	DECLARE_FUNCTION(execCreateMoveToProxyObject);


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIBlueprintHelperLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueprintHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueprintHelperLibrary)


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAIBlueprintHelperLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueprintHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueprintHelperLibrary)


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueprintHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueprintHelperLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueprintHelperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueprintHelperLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary&&); \
	NO_API UAIBlueprintHelperLibrary(const UAIBlueprintHelperLibrary&); \
public: \
	NO_API virtual ~UAIBlueprintHelperLibrary();


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueprintHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueprintHelperLibrary(UAIBlueprintHelperLibrary&&); \
	NO_API UAIBlueprintHelperLibrary(const UAIBlueprintHelperLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueprintHelperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueprintHelperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueprintHelperLibrary) \
	NO_API virtual ~UAIBlueprintHelperLibrary();


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_25_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIBlueprintHelperLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIBlueprintHelperLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Blueprint_AIBlueprintHelperLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
