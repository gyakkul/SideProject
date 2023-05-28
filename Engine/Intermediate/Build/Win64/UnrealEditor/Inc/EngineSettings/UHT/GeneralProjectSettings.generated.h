// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneralProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GeneralProjectSettings_generated_h
#error "GeneralProjectSettings.generated.h already included, missing '#pragma once' in GeneralProjectSettings.h"
#endif
#define ENGINESETTINGS_GeneralProjectSettings_generated_h

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneralProjectSettings(); \
	friend struct Z_Construct_UClass_UGeneralProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UGeneralProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGeneralProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeneralProjectSettings(); \
	friend struct Z_Construct_UClass_UGeneralProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UGeneralProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGeneralProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneralProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneralProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneralProjectSettings(UGeneralProjectSettings&&); \
	NO_API UGeneralProjectSettings(const UGeneralProjectSettings&); \
public: \
	NO_API virtual ~UGeneralProjectSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneralProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneralProjectSettings(UGeneralProjectSettings&&); \
	NO_API UGeneralProjectSettings(const UGeneralProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneralProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralProjectSettings) \
	NO_API virtual ~UGeneralProjectSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_12_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeneralProjectSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UGeneralProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
