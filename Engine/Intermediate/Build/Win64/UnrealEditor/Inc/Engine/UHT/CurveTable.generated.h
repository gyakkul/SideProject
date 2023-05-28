// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CurveTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveTable_generated_h
#error "CurveTable.generated.h already included, missing '#pragma once' in CurveTable.h"
#endif
#define ENGINE_CurveTable_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveTable, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveTable(); \
	friend struct Z_Construct_UClass_UCurveTable_Statics; \
public: \
	DECLARE_CLASS(UCurveTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUCurveTable(); \
	friend struct Z_Construct_UClass_UCurveTable_Statics; \
public: \
	DECLARE_CLASS(UCurveTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveTable(UCurveTable&&); \
	ENGINE_API UCurveTable(const UCurveTable&); \
public: \
	ENGINE_API virtual ~UCurveTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveTable(UCurveTable&&); \
	ENGINE_API UCurveTable(const UCurveTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveTable) \
	ENGINE_API virtual ~UCurveTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveTable>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveTableRowHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h


#define FOREACH_ENUM_ECURVETABLEMODE(op) \
	op(ECurveTableMode::Empty) \
	op(ECurveTableMode::SimpleCurves) \
	op(ECurveTableMode::RichCurves) 

enum class ECurveTableMode : uint8;
template<> struct TIsUEnumClass<ECurveTableMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECurveTableMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
