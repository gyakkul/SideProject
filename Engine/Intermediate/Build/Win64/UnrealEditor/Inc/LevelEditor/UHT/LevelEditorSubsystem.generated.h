// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevel;
class UTypedElementSelectionSet;
class UWorld;
#ifdef LEVELEDITOR_LevelEditorSubsystem_generated_h
#error "LevelEditorSubsystem.generated.h already included, missing '#pragma once' in LevelEditorSubsystem.h"
#endif
#define LEVELEDITOR_LevelEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_19_DELEGATE \
LEVELEDITOR_API void FOnLevelEditorPreSaveWorld_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorPreSaveWorld, int32 SaveFlags, UWorld* World);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_21_DELEGATE \
LEVELEDITOR_API void FOnLevelEditorPostSaveWorld_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorPostSaveWorld, int32 SaveFlags, UWorld* World, bool bSuccess);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_24_DELEGATE \
LEVELEDITOR_API void FOnLevelEditorEditorCameraMoved_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorEditorCameraMoved, FVector const& Location, FRotator const& Rotation, ELevelViewportType ViewportType, int32 ViewIndex);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_27_DELEGATE \
LEVELEDITOR_API void FOnLevelEditorMapChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorMapChanged, int32 MapChangeEventFlags);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_29_DELEGATE \
LEVELEDITOR_API void FOnLevelEditorMapOpened_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorMapOpened, const FString& Filename, bool bAsTemplate);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_SPARSE_DATA
#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuildLightMaps); \
	DECLARE_FUNCTION(execGetSelectionSet); \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execSetCurrentLevelByName); \
	DECLARE_FUNCTION(execSaveAllDirtyLevels); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execNewLevelFromTemplate); \
	DECLARE_FUNCTION(execNewLevel); \
	DECLARE_FUNCTION(execGetAllowsCinematicControl); \
	DECLARE_FUNCTION(execSetAllowsCinematicControl); \
	DECLARE_FUNCTION(execGetActiveViewportConfigKey); \
	DECLARE_FUNCTION(execGetViewportConfigKeys); \
	DECLARE_FUNCTION(execIsInPlayInEditor); \
	DECLARE_FUNCTION(execEditorRequestEndPlay); \
	DECLARE_FUNCTION(execEditorGetGameView); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execEditorInvalidateViewports); \
	DECLARE_FUNCTION(execEditorPlaySimulate); \
	DECLARE_FUNCTION(execGetPilotLevelActor); \
	DECLARE_FUNCTION(execEjectPilotLevelActor); \
	DECLARE_FUNCTION(execPilotLevelActor);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildLightMaps); \
	DECLARE_FUNCTION(execGetSelectionSet); \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execSetCurrentLevelByName); \
	DECLARE_FUNCTION(execSaveAllDirtyLevels); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execNewLevelFromTemplate); \
	DECLARE_FUNCTION(execNewLevel); \
	DECLARE_FUNCTION(execGetAllowsCinematicControl); \
	DECLARE_FUNCTION(execSetAllowsCinematicControl); \
	DECLARE_FUNCTION(execGetActiveViewportConfigKey); \
	DECLARE_FUNCTION(execGetViewportConfigKeys); \
	DECLARE_FUNCTION(execIsInPlayInEditor); \
	DECLARE_FUNCTION(execEditorRequestEndPlay); \
	DECLARE_FUNCTION(execEditorGetGameView); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execEditorInvalidateViewports); \
	DECLARE_FUNCTION(execEditorPlaySimulate); \
	DECLARE_FUNCTION(execGetPilotLevelActor); \
	DECLARE_FUNCTION(execEjectPilotLevelActor); \
	DECLARE_FUNCTION(execPilotLevelActor);


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_ACCESSORS
#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorSubsystem(); \
	friend struct Z_Construct_UClass_ULevelEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorSubsystem)


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorSubsystem(); \
	friend struct Z_Construct_UClass_ULevelEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorSubsystem)


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorSubsystem(ULevelEditorSubsystem&&); \
	NO_API ULevelEditorSubsystem(const ULevelEditorSubsystem&); \
public: \
	NO_API virtual ~ULevelEditorSubsystem();


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorSubsystem(ULevelEditorSubsystem&&); \
	NO_API ULevelEditorSubsystem(const ULevelEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelEditorSubsystem) \
	NO_API virtual ~ULevelEditorSubsystem();


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_35_PROLOG
#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_SPARSE_DATA \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_RPC_WRAPPERS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_ACCESSORS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_INCLASS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_SPARSE_DATA \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_ACCESSORS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELEDITOR_API UClass* StaticClass<class ULevelEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
