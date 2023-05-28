// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h
#error "GameplayDebuggerConfig.generated.h already included, missing '#pragma once' in GameplayDebuggerConfig.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerInputConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerCategoryConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerExtensionConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayDebuggerConfig, NO_API)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	NO_API UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public: \
	NO_API virtual ~UGameplayDebuggerConfig();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	NO_API UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig) \
	NO_API virtual ~UGameplayDebuggerConfig();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_112_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerConfig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerUserSettings(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerUserSettings(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerUserSettings(UGameplayDebuggerUserSettings&&); \
	NO_API UGameplayDebuggerUserSettings(const UGameplayDebuggerUserSettings&); \
public: \
	NO_API virtual ~UGameplayDebuggerUserSettings();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerUserSettings(UGameplayDebuggerUserSettings&&); \
	NO_API UGameplayDebuggerUserSettings(const UGameplayDebuggerUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerUserSettings) \
	NO_API virtual ~UGameplayDebuggerUserSettings();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_225_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h


#define FOREACH_ENUM_EGAMEPLAYDEBUGGEROVERRIDEMODE(op) \
	op(EGameplayDebuggerOverrideMode::Enable) \
	op(EGameplayDebuggerOverrideMode::Disable) \
	op(EGameplayDebuggerOverrideMode::UseDefault) 

enum class EGameplayDebuggerOverrideMode : uint8;
template<> struct TIsUEnumClass<EGameplayDebuggerOverrideMode> { enum { Value = true }; };
template<> GAMEPLAYDEBUGGER_API UEnum* StaticEnum<EGameplayDebuggerOverrideMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
