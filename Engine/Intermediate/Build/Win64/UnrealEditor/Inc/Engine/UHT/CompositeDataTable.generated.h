// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CompositeDataTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CompositeDataTable_generated_h
#error "CompositeDataTable.generated.h already included, missing '#pragma once' in CompositeDataTable.h"
#endif
#define ENGINE_CompositeDataTable_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeDataTable, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeDataTable(); \
	friend struct Z_Construct_UClass_UCompositeDataTable_Statics; \
public: \
	DECLARE_CLASS(UCompositeDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCompositeDataTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeDataTable(); \
	friend struct Z_Construct_UClass_UCompositeDataTable_Statics; \
public: \
	DECLARE_CLASS(UCompositeDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCompositeDataTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeDataTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCompositeDataTable(UCompositeDataTable&&); \
	ENGINE_API UCompositeDataTable(const UCompositeDataTable&); \
public: \
	ENGINE_API virtual ~UCompositeDataTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCompositeDataTable(UCompositeDataTable&&); \
	ENGINE_API UCompositeDataTable(const UCompositeDataTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeDataTable) \
	ENGINE_API virtual ~UCompositeDataTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompositeDataTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCompositeDataTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
