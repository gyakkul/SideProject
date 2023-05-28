// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LocalPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayer_generated_h
#error "LocalPlayer.generated.h already included, missing '#pragma once' in LocalPlayer.h"
#endif
#define ENGINE_LocalPlayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend struct Z_Construct_UClass_ULocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	DECLARE_WITHIN(UEngine)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_INCLASS \
private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend struct Z_Construct_UClass_ULocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	DECLARE_WITHIN(UEngine)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayer(ULocalPlayer&&); \
	NO_API ULocalPlayer(const ULocalPlayer&); \
public: \
	NO_API virtual ~ULocalPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayer(ULocalPlayer&&); \
	NO_API ULocalPlayer(const ULocalPlayer&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer) \
	NO_API virtual ~ULocalPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocalPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
