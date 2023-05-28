// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceCodeAccessSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCECODEACCESS_SourceCodeAccessSettings_generated_h
#error "SourceCodeAccessSettings.generated.h already included, missing '#pragma once' in SourceCodeAccessSettings.h"
#endif
#define SOURCECODEACCESS_SourceCodeAccessSettings_generated_h

#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_SPARSE_DATA
#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_ACCESSORS
#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceCodeAccessSettings(); \
	friend struct Z_Construct_UClass_USourceCodeAccessSettings_Statics; \
public: \
	DECLARE_CLASS(USourceCodeAccessSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceCodeAccess"), NO_API) \
	DECLARE_SERIALIZER(USourceCodeAccessSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSourceCodeAccessSettings(); \
	friend struct Z_Construct_UClass_USourceCodeAccessSettings_Statics; \
public: \
	DECLARE_CLASS(USourceCodeAccessSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceCodeAccess"), NO_API) \
	DECLARE_SERIALIZER(USourceCodeAccessSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceCodeAccessSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceCodeAccessSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceCodeAccessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceCodeAccessSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceCodeAccessSettings(USourceCodeAccessSettings&&); \
	NO_API USourceCodeAccessSettings(const USourceCodeAccessSettings&); \
public: \
	NO_API virtual ~USourceCodeAccessSettings();


#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceCodeAccessSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceCodeAccessSettings(USourceCodeAccessSettings&&); \
	NO_API USourceCodeAccessSettings(const USourceCodeAccessSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceCodeAccessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceCodeAccessSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceCodeAccessSettings) \
	NO_API virtual ~USourceCodeAccessSettings();


#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_10_PROLOG
#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_SPARSE_DATA \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_ACCESSORS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_INCLASS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_SPARSE_DATA \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_ACCESSORS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SourceCodeAccessSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCECODEACCESS_API UClass* StaticClass<class USourceCodeAccessSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
