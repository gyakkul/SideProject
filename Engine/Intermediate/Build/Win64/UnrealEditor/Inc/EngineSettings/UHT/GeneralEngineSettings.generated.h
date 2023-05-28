// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneralEngineSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GeneralEngineSettings_generated_h
#error "GeneralEngineSettings.generated.h already included, missing '#pragma once' in GeneralEngineSettings.h"
#endif
#define ENGINESETTINGS_GeneralEngineSettings_generated_h

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneralEngineSettings(); \
	friend struct Z_Construct_UClass_UGeneralEngineSettings_Statics; \
public: \
	DECLARE_CLASS(UGeneralEngineSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGeneralEngineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGeneralEngineSettings(); \
	friend struct Z_Construct_UClass_UGeneralEngineSettings_Statics; \
public: \
	DECLARE_CLASS(UGeneralEngineSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGeneralEngineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneralEngineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralEngineSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneralEngineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralEngineSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneralEngineSettings(UGeneralEngineSettings&&); \
	NO_API UGeneralEngineSettings(const UGeneralEngineSettings&); \
public: \
	NO_API virtual ~UGeneralEngineSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneralEngineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneralEngineSettings(UGeneralEngineSettings&&); \
	NO_API UGeneralEngineSettings(const UGeneralEngineSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneralEngineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralEngineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralEngineSettings) \
	NO_API virtual ~UGeneralEngineSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_11_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeneralEngineSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UGeneralEngineSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
