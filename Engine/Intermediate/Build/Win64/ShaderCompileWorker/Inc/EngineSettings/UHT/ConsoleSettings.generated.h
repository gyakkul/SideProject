// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_ConsoleSettings_generated_h
#error "ConsoleSettings.generated.h already included, missing '#pragma once' in ConsoleSettings.h"
#endif
#define ENGINESETTINGS_ConsoleSettings_generated_h

#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics; \
	ENGINESETTINGS_API static class UScriptStruct* StaticStruct();


template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<struct FAutoCompleteCommand>();

#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_SPARSE_DATA
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ACCESSORS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleSettings(); \
	friend struct Z_Construct_UClass_UConsoleSettings_Statics; \
public: \
	DECLARE_CLASS(UConsoleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UConsoleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleSettings(); \
	friend struct Z_Construct_UClass_UConsoleSettings_Statics; \
public: \
	DECLARE_CLASS(UConsoleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UConsoleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleSettings(UConsoleSettings&&); \
	NO_API UConsoleSettings(const UConsoleSettings&); \
public: \
	NO_API virtual ~UConsoleSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleSettings(UConsoleSettings&&); \
	NO_API UConsoleSettings(const UConsoleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleSettings) \
	NO_API virtual ~UConsoleSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_SPARSE_DATA \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ACCESSORS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_SPARSE_DATA \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ACCESSORS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ConsoleSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UConsoleSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
