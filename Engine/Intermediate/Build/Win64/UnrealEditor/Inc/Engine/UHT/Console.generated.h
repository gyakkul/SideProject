// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Console.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Console_generated_h
#error "Console.generated.h already included, missing '#pragma once' in Console.h"
#endif
#define ENGINE_Console_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoCompleteNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAutoCompleteNode>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsole(); \
	friend struct Z_Construct_UClass_UConsole_Statics; \
public: \
	DECLARE_CLASS(UConsole, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UConsole) \
	DECLARE_WITHIN(UGameViewportClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUConsole(); \
	friend struct Z_Construct_UClass_UConsole_Statics; \
public: \
	DECLARE_CLASS(UConsole, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UConsole) \
	DECLARE_WITHIN(UGameViewportClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsole(UConsole&&); \
	NO_API UConsole(const UConsole&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsole(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsole(UConsole&&); \
	NO_API UConsole(const UConsole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsole); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsole)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_61_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Console."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UConsole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Console_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
