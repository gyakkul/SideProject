// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityConfigAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSSPAWNER_MassEntityConfigAsset_generated_h
#error "MassEntityConfigAsset.generated.h already included, missing '#pragma once' in MassEntityConfigAsset.h"
#endif
#define MASSSPAWNER_MassEntityConfigAsset_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassEntityConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSSPAWNER_API UScriptStruct* StaticStruct<struct FMassEntityConfig>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidateEntityConfig);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateEntityConfig);


#else
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntityConfigAsset(); \
	friend struct Z_Construct_UClass_UMassEntityConfigAsset_Statics; \
public: \
	DECLARE_CLASS(UMassEntityConfigAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassSpawner"), NO_API) \
	DECLARE_SERIALIZER(UMassEntityConfigAsset)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUMassEntityConfigAsset(); \
	friend struct Z_Construct_UClass_UMassEntityConfigAsset_Statics; \
public: \
	DECLARE_CLASS(UMassEntityConfigAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassSpawner"), NO_API) \
	DECLARE_SERIALIZER(UMassEntityConfigAsset)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassEntityConfigAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEntityConfigAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassEntityConfigAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntityConfigAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassEntityConfigAsset(UMassEntityConfigAsset&&); \
	NO_API UMassEntityConfigAsset(const UMassEntityConfigAsset&); \
public: \
	NO_API virtual ~UMassEntityConfigAsset();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassEntityConfigAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassEntityConfigAsset(UMassEntityConfigAsset&&); \
	NO_API UMassEntityConfigAsset(const UMassEntityConfigAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassEntityConfigAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntityConfigAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEntityConfigAsset) \
	NO_API virtual ~UMassEntityConfigAsset();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_74_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSSPAWNER_API UClass* StaticClass<class UMassEntityConfigAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
