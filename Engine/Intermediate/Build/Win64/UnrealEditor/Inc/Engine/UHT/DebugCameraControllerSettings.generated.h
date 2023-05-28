// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DebugCameraControllerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DebugCameraControllerSettings_generated_h
#error "DebugCameraControllerSettings.generated.h already included, missing '#pragma once' in DebugCameraControllerSettings.h"
#endif
#define ENGINE_DebugCameraControllerSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDebugCameraControllerSettingsViewModeIndex>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugCameraControllerSettings(); \
	friend struct Z_Construct_UClass_UDebugCameraControllerSettings_Statics; \
public: \
	DECLARE_CLASS(UDebugCameraControllerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDebugCameraControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDebugCameraControllerSettings(); \
	friend struct Z_Construct_UClass_UDebugCameraControllerSettings_Statics; \
public: \
	DECLARE_CLASS(UDebugCameraControllerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDebugCameraControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugCameraControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugCameraControllerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugCameraControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugCameraControllerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugCameraControllerSettings(UDebugCameraControllerSettings&&); \
	NO_API UDebugCameraControllerSettings(const UDebugCameraControllerSettings&); \
public: \
	NO_API virtual ~UDebugCameraControllerSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugCameraControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugCameraControllerSettings(UDebugCameraControllerSettings&&); \
	NO_API UDebugCameraControllerSettings(const UDebugCameraControllerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugCameraControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugCameraControllerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugCameraControllerSettings) \
	NO_API virtual ~UDebugCameraControllerSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DebugCameraControllerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDebugCameraControllerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
