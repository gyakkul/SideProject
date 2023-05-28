// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIGRAPH_AIGraph_generated_h
#error "AIGraph.generated.h already included, missing '#pragma once' in AIGraph.h"
#endif
#define AIGRAPH_AIGraph_generated_h

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_SPARSE_DATA
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ACCESSORS
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAIGraph, NO_API)


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIGraph(); \
	friend struct Z_Construct_UClass_UAIGraph_Statics; \
public: \
	DECLARE_CLASS(UAIGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraph) \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraph(); \
	friend struct Z_Construct_UClass_UAIGraph_Statics; \
public: \
	DECLARE_CLASS(UAIGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraph) \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIGraph(UAIGraph&&); \
	NO_API UAIGraph(const UAIGraph&); \
public: \
	NO_API virtual ~UAIGraph();


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIGraph(UAIGraph&&); \
	NO_API UAIGraph(const UAIGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraph) \
	NO_API virtual ~UAIGraph();


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_18_PROLOG
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_SPARSE_DATA \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ACCESSORS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_INCLASS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_SPARSE_DATA \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ACCESSORS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIGRAPH_API UClass* StaticClass<class UAIGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
