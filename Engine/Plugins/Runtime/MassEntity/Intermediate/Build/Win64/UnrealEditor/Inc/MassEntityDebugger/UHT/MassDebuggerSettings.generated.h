// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebuggerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITYDEBUGGER_MassDebuggerSettings_generated_h
#error "MassDebuggerSettings.generated.h already included, missing '#pragma once' in MassDebuggerSettings.h"
#endif
#define MASSENTITYDEBUGGER_MassDebuggerSettings_generated_h

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassDebuggerSettings(); \
	friend struct Z_Construct_UClass_UMassDebuggerSettings_Statics; \
public: \
	DECLARE_CLASS(UMassDebuggerSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityDebugger"), NO_API) \
	DECLARE_SERIALIZER(UMassDebuggerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMassDebuggerSettings(); \
	friend struct Z_Construct_UClass_UMassDebuggerSettings_Statics; \
public: \
	DECLARE_CLASS(UMassDebuggerSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEntityDebugger"), NO_API) \
	DECLARE_SERIALIZER(UMassDebuggerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassDebuggerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassDebuggerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassDebuggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebuggerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassDebuggerSettings(UMassDebuggerSettings&&); \
	NO_API UMassDebuggerSettings(const UMassDebuggerSettings&); \
public: \
	NO_API virtual ~UMassDebuggerSettings();


#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassDebuggerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassDebuggerSettings(UMassDebuggerSettings&&); \
	NO_API UMassDebuggerSettings(const UMassDebuggerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassDebuggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassDebuggerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassDebuggerSettings) \
	NO_API virtual ~UMassDebuggerSettings();


#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSENTITYDEBUGGER_API UClass* StaticClass<class UMassDebuggerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
