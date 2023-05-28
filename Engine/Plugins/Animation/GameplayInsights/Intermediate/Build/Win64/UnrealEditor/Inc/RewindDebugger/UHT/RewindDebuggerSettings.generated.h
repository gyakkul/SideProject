// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RewindDebuggerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REWINDDEBUGGER_RewindDebuggerSettings_generated_h
#error "RewindDebuggerSettings.generated.h already included, missing '#pragma once' in RewindDebuggerSettings.h"
#endif
#define REWINDDEBUGGER_RewindDebuggerSettings_generated_h

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ACCESSORS
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewindDebuggerSettings(); \
	friend struct Z_Construct_UClass_URewindDebuggerSettings_Statics; \
public: \
	DECLARE_CLASS(URewindDebuggerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RewindDebugger"), NO_API) \
	DECLARE_SERIALIZER(URewindDebuggerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesURewindDebuggerSettings(); \
	friend struct Z_Construct_UClass_URewindDebuggerSettings_Statics; \
public: \
	DECLARE_CLASS(URewindDebuggerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RewindDebugger"), NO_API) \
	DECLARE_SERIALIZER(URewindDebuggerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URewindDebuggerSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URewindDebuggerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindDebuggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindDebuggerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URewindDebuggerSettings(URewindDebuggerSettings&&); \
	NO_API URewindDebuggerSettings(const URewindDebuggerSettings&); \
public: \
	NO_API virtual ~URewindDebuggerSettings();


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URewindDebuggerSettings(URewindDebuggerSettings&&); \
	NO_API URewindDebuggerSettings(const URewindDebuggerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindDebuggerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindDebuggerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URewindDebuggerSettings) \
	NO_API virtual ~URewindDebuggerSettings();


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_22_PROLOG
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ACCESSORS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_INCLASS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ACCESSORS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REWINDDEBUGGER_API UClass* StaticClass<class URewindDebuggerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h


#define FOREACH_ENUM_EREWINDDEBUGGERCAMERAMODE(op) \
	op(ERewindDebuggerCameraMode::Replay) \
	op(ERewindDebuggerCameraMode::FollowTargetActor) \
	op(ERewindDebuggerCameraMode::Disabled) 

enum class ERewindDebuggerCameraMode;
template<> struct TIsUEnumClass<ERewindDebuggerCameraMode> { enum { Value = true }; };
template<> REWINDDEBUGGER_API UEnum* StaticEnum<ERewindDebuggerCameraMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
