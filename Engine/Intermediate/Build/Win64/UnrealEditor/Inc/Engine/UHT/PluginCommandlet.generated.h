// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/PluginCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PluginCommandlet_generated_h
#error "PluginCommandlet.generated.h already included, missing '#pragma once' in PluginCommandlet.h"
#endif
#define ENGINE_PluginCommandlet_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPluginCommandlet(); \
	friend struct Z_Construct_UClass_UPluginCommandlet_Statics; \
public: \
	DECLARE_CLASS(UPluginCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPluginCommandlet)


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPluginCommandlet(); \
	friend struct Z_Construct_UClass_UPluginCommandlet_Statics; \
public: \
	DECLARE_CLASS(UPluginCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPluginCommandlet)


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPluginCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPluginCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPluginCommandlet(UPluginCommandlet&&); \
	NO_API UPluginCommandlet(const UPluginCommandlet&); \
public: \
	NO_API virtual ~UPluginCommandlet();


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPluginCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPluginCommandlet(UPluginCommandlet&&); \
	NO_API UPluginCommandlet(const UPluginCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPluginCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginCommandlet) \
	NO_API virtual ~UPluginCommandlet();


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PluginCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPluginCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Commandlets_PluginCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
