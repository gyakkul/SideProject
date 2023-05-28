// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Player_generated_h
#error "Player.generated.h already included, missing '#pragma once' in Player.h"
#endif
#define ENGINE_Player_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayer(); \
	friend struct Z_Construct_UClass_UPlayer_Statics; \
public: \
	DECLARE_CLASS(UPlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlayer) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPlayer(); \
	friend struct Z_Construct_UClass_UPlayer_Statics; \
public: \
	DECLARE_CLASS(UPlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlayer) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlayer(UPlayer&&); \
	ENGINE_API UPlayer(const UPlayer&); \
public: \
	ENGINE_API virtual ~UPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlayer(UPlayer&&); \
	ENGINE_API UPlayer(const UPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayer) \
	ENGINE_API virtual ~UPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Player."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
