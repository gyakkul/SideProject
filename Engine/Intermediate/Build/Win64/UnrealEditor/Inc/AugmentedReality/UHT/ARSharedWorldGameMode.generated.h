// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSharedWorldGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AARSharedWorldGameState;
#ifdef AUGMENTEDREALITY_ARSharedWorldGameMode_generated_h
#error "ARSharedWorldGameMode.generated.h already included, missing '#pragma once' in ARSharedWorldGameMode.h"
#endif
#define AUGMENTEDREALITY_ARSharedWorldGameMode_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSharedWorldReplicationState>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetARSharedWorldGameState); \
	DECLARE_FUNCTION(execSetARWorldSharingIsReady); \
	DECLARE_FUNCTION(execSetARSharedWorldData); \
	DECLARE_FUNCTION(execSetPreviewImageData);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetARSharedWorldGameState); \
	DECLARE_FUNCTION(execSetARWorldSharingIsReady); \
	DECLARE_FUNCTION(execSetARSharedWorldData); \
	DECLARE_FUNCTION(execSetPreviewImageData);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARSharedWorldGameMode(); \
	friend struct Z_Construct_UClass_AARSharedWorldGameMode_Statics; \
public: \
	DECLARE_CLASS(AARSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSharedWorldGameMode)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAARSharedWorldGameMode(); \
	friend struct Z_Construct_UClass_AARSharedWorldGameMode_Statics; \
public: \
	DECLARE_CLASS(AARSharedWorldGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSharedWorldGameMode)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSharedWorldGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSharedWorldGameMode(AARSharedWorldGameMode&&); \
	NO_API AARSharedWorldGameMode(const AARSharedWorldGameMode&); \
public: \
	NO_API virtual ~AARSharedWorldGameMode();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSharedWorldGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSharedWorldGameMode(AARSharedWorldGameMode&&); \
	NO_API AARSharedWorldGameMode(const AARSharedWorldGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSharedWorldGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSharedWorldGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSharedWorldGameMode) \
	NO_API virtual ~AARSharedWorldGameMode();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_32_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARSharedWorldGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AARSharedWorldGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
