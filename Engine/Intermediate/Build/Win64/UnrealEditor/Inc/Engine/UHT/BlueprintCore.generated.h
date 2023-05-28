// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlueprintCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintCore_generated_h
#error "BlueprintCore.generated.h already included, missing '#pragma once' in BlueprintCore.h"
#endif
#define ENGINE_BlueprintCore_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintCore, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCore(); \
	friend struct Z_Construct_UClass_UBlueprintCore_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintCore) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintCore(); \
	friend struct Z_Construct_UClass_UBlueprintCore_Statics; \
public: \
	DECLARE_CLASS(UBlueprintCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintCore) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintCore(UBlueprintCore&&); \
	NO_API UBlueprintCore(const UBlueprintCore&); \
public: \
	NO_API virtual ~UBlueprintCore();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintCore(UBlueprintCore&&); \
	NO_API UBlueprintCore(const UBlueprintCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCore) \
	NO_API virtual ~UBlueprintCore();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintCore."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlueprintCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
