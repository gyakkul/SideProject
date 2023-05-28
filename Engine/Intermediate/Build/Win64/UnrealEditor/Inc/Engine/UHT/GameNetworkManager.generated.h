// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameNetworkManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameNetworkManager_generated_h
#error "GameNetworkManager.generated.h already included, missing '#pragma once' in GameNetworkManager.h"
#endif
#define ENGINE_GameNetworkManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameNetworkManager(); \
	friend struct Z_Construct_UClass_AGameNetworkManager_Statics; \
public: \
	DECLARE_CLASS(AGameNetworkManager, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameNetworkManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAGameNetworkManager(); \
	friend struct Z_Construct_UClass_AGameNetworkManager_Statics; \
public: \
	DECLARE_CLASS(AGameNetworkManager, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameNetworkManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameNetworkManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameNetworkManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameNetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameNetworkManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameNetworkManager(AGameNetworkManager&&); \
	NO_API AGameNetworkManager(const AGameNetworkManager&); \
public: \
	NO_API virtual ~AGameNetworkManager();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameNetworkManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameNetworkManager(AGameNetworkManager&&); \
	NO_API AGameNetworkManager(const AGameNetworkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameNetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameNetworkManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameNetworkManager) \
	NO_API virtual ~AGameNetworkManager();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameNetworkManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameNetworkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameNetworkManager_h


#define FOREACH_ENUM_ESTANDBYTYPE(op) \
	op(STDBY_Rx) \
	op(STDBY_Tx) \
	op(STDBY_BadPing) 

enum EStandbyType : int;
template<> ENGINE_API UEnum* StaticEnum<EStandbyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
