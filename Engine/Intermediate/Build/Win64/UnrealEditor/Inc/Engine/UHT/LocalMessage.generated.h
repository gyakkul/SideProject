// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/LocalMessage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalMessage_generated_h
#error "LocalMessage.generated.h already included, missing '#pragma once' in LocalMessage.h"
#endif
#define ENGINE_LocalMessage_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientReceiveData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClientReceiveData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalMessage(); \
	friend struct Z_Construct_UClass_ULocalMessage_Statics; \
public: \
	DECLARE_CLASS(ULocalMessage, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalMessage)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_INCLASS \
private: \
	static void StaticRegisterNativesULocalMessage(); \
	friend struct Z_Construct_UClass_ULocalMessage_Statics; \
public: \
	DECLARE_CLASS(ULocalMessage, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalMessage)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalMessage(ULocalMessage&&); \
	NO_API ULocalMessage(const ULocalMessage&); \
public: \
	NO_API virtual ~ULocalMessage();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalMessage(ULocalMessage&&); \
	NO_API ULocalMessage(const ULocalMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalMessage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalMessage); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalMessage) \
	NO_API virtual ~ULocalMessage();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_56_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocalMessage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
