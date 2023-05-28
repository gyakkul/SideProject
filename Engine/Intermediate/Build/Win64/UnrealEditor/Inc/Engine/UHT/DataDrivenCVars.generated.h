// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataDrivenCVars/DataDrivenCVars.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataDrivenCVars_generated_h
#error "DataDrivenCVars.generated.h already included, missing '#pragma once' in DataDrivenCVars.h"
#endif
#define ENGINE_DataDrivenCVars_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_26_DELEGATE \
static void FOnDataDrivenCVarChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataDrivenCVarChanged, const FString& CVarName);


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataDrivenCVarEngineSubsystem(); \
	friend struct Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataDrivenCVarEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataDrivenCVarEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDataDrivenCVarEngineSubsystem(); \
	friend struct Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataDrivenCVarEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataDrivenCVarEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataDrivenCVarEngineSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataDrivenCVarEngineSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataDrivenCVarEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDrivenCVarEngineSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataDrivenCVarEngineSubsystem(UDataDrivenCVarEngineSubsystem&&); \
	NO_API UDataDrivenCVarEngineSubsystem(const UDataDrivenCVarEngineSubsystem&); \
public: \
	NO_API virtual ~UDataDrivenCVarEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataDrivenCVarEngineSubsystem(UDataDrivenCVarEngineSubsystem&&); \
	NO_API UDataDrivenCVarEngineSubsystem(const UDataDrivenCVarEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataDrivenCVarEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDrivenCVarEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataDrivenCVarEngineSubsystem) \
	NO_API virtual ~UDataDrivenCVarEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataDrivenCVarEngineSubsystem>();

#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDataDrivenConsoleVariable>();

#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataDrivenConsoleVariableSettings(); \
	friend struct Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics; \
public: \
	DECLARE_CLASS(UDataDrivenConsoleVariableSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataDrivenConsoleVariableSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUDataDrivenConsoleVariableSettings(); \
	friend struct Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics; \
public: \
	DECLARE_CLASS(UDataDrivenConsoleVariableSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataDrivenConsoleVariableSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataDrivenConsoleVariableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataDrivenConsoleVariableSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataDrivenConsoleVariableSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDrivenConsoleVariableSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataDrivenConsoleVariableSettings(UDataDrivenConsoleVariableSettings&&); \
	NO_API UDataDrivenConsoleVariableSettings(const UDataDrivenConsoleVariableSettings&); \
public: \
	NO_API virtual ~UDataDrivenConsoleVariableSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataDrivenConsoleVariableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataDrivenConsoleVariableSettings(UDataDrivenConsoleVariableSettings&&); \
	NO_API UDataDrivenConsoleVariableSettings(const UDataDrivenConsoleVariableSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataDrivenConsoleVariableSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDrivenConsoleVariableSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataDrivenConsoleVariableSettings) \
	NO_API virtual ~UDataDrivenConsoleVariableSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_83_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataDrivenConsoleVariableSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h


#define FOREACH_ENUM_FDATADRIVENCVARTYPE(op) \
	op(FDataDrivenCVarType::CVarFloat) \
	op(FDataDrivenCVarType::CVarInt) \
	op(FDataDrivenCVarType::CVarBool) 

enum class FDataDrivenCVarType : uint8;
template<> struct TIsUEnumClass<FDataDrivenCVarType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<FDataDrivenCVarType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
