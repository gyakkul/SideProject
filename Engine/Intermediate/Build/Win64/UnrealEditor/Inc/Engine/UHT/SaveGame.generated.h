// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/SaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SaveGame_generated_h
#error "SaveGame.generated.h already included, missing '#pragma once' in SaveGame.h"
#endif
#define ENGINE_SaveGame_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGame(); \
	friend struct Z_Construct_UClass_USaveGame_Statics; \
public: \
	DECLARE_CLASS(USaveGame, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USaveGame)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGame(); \
	friend struct Z_Construct_UClass_USaveGame_Statics; \
public: \
	DECLARE_CLASS(USaveGame, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USaveGame)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGame(USaveGame&&); \
	NO_API USaveGame(const USaveGame&); \
public: \
	NO_API virtual ~USaveGame();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGame(USaveGame&&); \
	NO_API USaveGame(const USaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGame); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGame) \
	NO_API virtual ~USaveGame();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SaveGame."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
