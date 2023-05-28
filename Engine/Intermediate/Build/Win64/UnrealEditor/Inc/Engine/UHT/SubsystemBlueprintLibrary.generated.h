// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/SubsystemBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAudioEngineSubsystem;
class UEngineSubsystem;
class UGameInstanceSubsystem;
class ULocalPlayerSubsystem;
class UObject;
class UWorldSubsystem;
#ifdef ENGINE_SubsystemBlueprintLibrary_generated_h
#error "SubsystemBlueprintLibrary.generated.h already included, missing '#pragma once' in SubsystemBlueprintLibrary.h"
#endif
#define ENGINE_SubsystemBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubSystemFromPlayerController); \
	DECLARE_FUNCTION(execGetAudioEngineSubsystem); \
	DECLARE_FUNCTION(execGetWorldSubsystem); \
	DECLARE_FUNCTION(execGetLocalPlayerSubsystem); \
	DECLARE_FUNCTION(execGetGameInstanceSubsystem); \
	DECLARE_FUNCTION(execGetEngineSubsystem);


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubSystemFromPlayerController); \
	DECLARE_FUNCTION(execGetAudioEngineSubsystem); \
	DECLARE_FUNCTION(execGetWorldSubsystem); \
	DECLARE_FUNCTION(execGetLocalPlayerSubsystem); \
	DECLARE_FUNCTION(execGetGameInstanceSubsystem); \
	DECLARE_FUNCTION(execGetEngineSubsystem);


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USubsystemBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USubsystemBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsystemBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubsystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsystemBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubsystemBlueprintLibrary(USubsystemBlueprintLibrary&&); \
	NO_API USubsystemBlueprintLibrary(const USubsystemBlueprintLibrary&); \
public: \
	NO_API virtual ~USubsystemBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubsystemBlueprintLibrary(USubsystemBlueprintLibrary&&); \
	NO_API USubsystemBlueprintLibrary(const USubsystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubsystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsystemBlueprintLibrary) \
	NO_API virtual ~USubsystemBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubsystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
