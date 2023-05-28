// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSSPAWNER_MassSpawner_generated_h
#error "MassSpawner.generated.h already included, missing '#pragma once' in MassSpawner.h"
#endif
#define MASSSPAWNER_MassSpawner_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_14_DELEGATE \
MASSSPAWNER_API void FMassSpawnerOnSpawningFinishedEvent_DelegateWrapper(const FMulticastScriptDelegate& MassSpawnerOnSpawningFinishedEvent);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_15_DELEGATE \
MASSSPAWNER_API void FMassSpawnerOnDespawningFinishedEvent_DelegateWrapper(const FMulticastScriptDelegate& MassSpawnerOnDespawningFinishedEvent);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpawningCountScale); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execScaleSpawningCount); \
	DECLARE_FUNCTION(execUnloadConfig); \
	DECLARE_FUNCTION(execClearTemplates); \
	DECLARE_FUNCTION(execDoDespawning); \
	DECLARE_FUNCTION(execDoSpawning);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpawningCountScale); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execScaleSpawningCount); \
	DECLARE_FUNCTION(execUnloadConfig); \
	DECLARE_FUNCTION(execClearTemplates); \
	DECLARE_FUNCTION(execDoDespawning); \
	DECLARE_FUNCTION(execDoSpawning);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDEBUG_Clear); \
	DECLARE_FUNCTION(execDEBUG_Spawn);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDEBUG_Clear); \
	DECLARE_FUNCTION(execDEBUG_Spawn);


#else
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassSpawner(); \
	friend struct Z_Construct_UClass_AMassSpawner_Statics; \
public: \
	DECLARE_CLASS(AMassSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), NO_API) \
	DECLARE_SERIALIZER(AMassSpawner)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMassSpawner(); \
	friend struct Z_Construct_UClass_AMassSpawner_Statics; \
public: \
	DECLARE_CLASS(AMassSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), NO_API) \
	DECLARE_SERIALIZER(AMassSpawner)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMassSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMassSpawner(AMassSpawner&&); \
	NO_API AMassSpawner(const AMassSpawner&); \
public: \
	NO_API virtual ~AMassSpawner();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMassSpawner(AMassSpawner&&); \
	NO_API AMassSpawner(const AMassSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassSpawner) \
	NO_API virtual ~AMassSpawner();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSSPAWNER_API UClass* StaticClass<class AMassSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
