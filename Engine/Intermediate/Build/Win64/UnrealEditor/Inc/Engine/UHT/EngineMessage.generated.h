// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/EngineMessage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineMessage_generated_h
#error "EngineMessage.generated.h already included, missing '#pragma once' in EngineMessage.h"
#endif
#define ENGINE_EngineMessage_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineMessage(); \
	friend struct Z_Construct_UClass_UEngineMessage_Statics; \
public: \
	DECLARE_CLASS(UEngineMessage, ULocalMessage, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineMessage)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEngineMessage(); \
	friend struct Z_Construct_UClass_UEngineMessage_Statics; \
public: \
	DECLARE_CLASS(UEngineMessage, ULocalMessage, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineMessage)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEngineMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEngineMessage(UEngineMessage&&); \
	ENGINE_API UEngineMessage(const UEngineMessage&); \
public: \
	ENGINE_API virtual ~UEngineMessage();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEngineMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEngineMessage(UEngineMessage&&); \
	ENGINE_API UEngineMessage(const UEngineMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineMessage); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineMessage) \
	ENGINE_API virtual ~UEngineMessage();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EngineMessage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
