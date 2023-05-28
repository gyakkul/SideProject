// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputSettings;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
#ifdef ENGINE_InputSettings_generated_h
#error "InputSettings.generated.h already included, missing '#pragma once' in InputSettings.h"
#endif
#define ENGINE_InputSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceRebuildKeymaps); \
	DECLARE_FUNCTION(execGetAxisNames); \
	DECLARE_FUNCTION(execGetActionNames); \
	DECLARE_FUNCTION(execSaveKeyMappings); \
	DECLARE_FUNCTION(execRemoveAxisMapping); \
	DECLARE_FUNCTION(execGetAxisMappingByName); \
	DECLARE_FUNCTION(execAddAxisMapping); \
	DECLARE_FUNCTION(execRemoveActionMapping); \
	DECLARE_FUNCTION(execGetActionMappingByName); \
	DECLARE_FUNCTION(execAddActionMapping); \
	DECLARE_FUNCTION(execGetInputSettings);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceRebuildKeymaps); \
	DECLARE_FUNCTION(execGetAxisNames); \
	DECLARE_FUNCTION(execGetActionNames); \
	DECLARE_FUNCTION(execSaveKeyMappings); \
	DECLARE_FUNCTION(execRemoveAxisMapping); \
	DECLARE_FUNCTION(execGetAxisMappingByName); \
	DECLARE_FUNCTION(execAddAxisMapping); \
	DECLARE_FUNCTION(execRemoveActionMapping); \
	DECLARE_FUNCTION(execGetActionMappingByName); \
	DECLARE_FUNCTION(execAddActionMapping); \
	DECLARE_FUNCTION(execGetInputSettings);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct Z_Construct_UClass_UInputSettings_Statics; \
public: \
	DECLARE_CLASS(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct Z_Construct_UClass_UInputSettings_Statics; \
public: \
	DECLARE_CLASS(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputSettings(UInputSettings&&); \
	NO_API UInputSettings(const UInputSettings&); \
public: \
	NO_API virtual ~UInputSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputSettings(UInputSettings&&); \
	NO_API UInputSettings(const UInputSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings) \
	NO_API virtual ~UInputSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_301_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHardwareDeviceIdentifier_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHardwareDeviceIdentifier>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllHardwareDeviceNames);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllHardwareDeviceNames);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputPlatformSettings(); \
	friend struct Z_Construct_UClass_UInputPlatformSettings_Statics; \
public: \
	DECLARE_CLASS(UInputPlatformSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputPlatformSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_INCLASS \
private: \
	static void StaticRegisterNativesUInputPlatformSettings(); \
	friend struct Z_Construct_UClass_UInputPlatformSettings_Statics; \
public: \
	DECLARE_CLASS(UInputPlatformSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputPlatformSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputPlatformSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputPlatformSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputPlatformSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputPlatformSettings(UInputPlatformSettings&&); \
	NO_API UInputPlatformSettings(const UInputPlatformSettings&); \
public: \
	NO_API virtual ~UInputPlatformSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputPlatformSettings(UInputPlatformSettings&&); \
	NO_API UInputPlatformSettings(const UInputPlatformSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputPlatformSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputPlatformSettings) \
	NO_API virtual ~UInputPlatformSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_336_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_339_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputPlatformSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
