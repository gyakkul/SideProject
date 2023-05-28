// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GameViewportClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameViewportClient_generated_h
#error "GameViewportClient.generated.h already included, missing '#pragma once' in GameViewportClient.h"
#endif
#define ENGINE_GameViewportClient_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConsoleTarget); \
	DECLARE_FUNCTION(execShowTitleSafeArea); \
	DECLARE_FUNCTION(execSSSwapControllers);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetConsoleTarget); \
	DECLARE_FUNCTION(execShowTitleSafeArea); \
	DECLARE_FUNCTION(execSSSwapControllers);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameViewportClient(); \
	friend struct Z_Construct_UClass_UGameViewportClient_Statics; \
public: \
	DECLARE_CLASS(UGameViewportClient, UScriptViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameViewportClient) \
	DECLARE_WITHIN(UEngine) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUGameViewportClient(); \
	friend struct Z_Construct_UClass_UGameViewportClient_Statics; \
public: \
	DECLARE_CLASS(UGameViewportClient, UScriptViewportClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameViewportClient) \
	DECLARE_WITHIN(UEngine) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameViewportClient) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameViewportClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameViewportClient(UGameViewportClient&&); \
	NO_API UGameViewportClient(const UGameViewportClient&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameViewportClient(UGameViewportClient&&); \
	NO_API UGameViewportClient(const UGameViewportClient&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameViewportClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameViewportClient)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_67_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameViewportClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameViewportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
