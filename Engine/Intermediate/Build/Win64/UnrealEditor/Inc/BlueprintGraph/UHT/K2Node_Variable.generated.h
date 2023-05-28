// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_Variable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_Variable_generated_h
#error "K2Node_Variable.generated.h already included, missing '#pragma once' in K2Node_Variable.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Variable_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_SPARSE_DATA
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_RPC_WRAPPERS
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ACCESSORS
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Variable, NO_API)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_Variable(); \
	friend struct Z_Construct_UClass_UK2Node_Variable_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Variable, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_Variable) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Variable(); \
	friend struct Z_Construct_UClass_UK2Node_Variable_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Variable, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_Variable) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_Variable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Variable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_Variable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Variable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_Variable(UK2Node_Variable&&); \
	NO_API UK2Node_Variable(const UK2Node_Variable&); \
public: \
	NO_API virtual ~UK2Node_Variable();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_Variable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_Variable(UK2Node_Variable&&); \
	NO_API UK2Node_Variable(const UK2Node_Variable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_Variable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Variable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Variable) \
	NO_API virtual ~UK2Node_Variable();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_49_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_SPARSE_DATA \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_RPC_WRAPPERS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ACCESSORS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_SPARSE_DATA \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ACCESSORS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node_Variable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_Variable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h


#define FOREACH_ENUM_ESELFCONTEXTINFO(op) \
	op(ESelfContextInfo::Unspecified) \
	op(ESelfContextInfo::NotSelfContext) 

namespace ESelfContextInfo { enum Type : int; }
template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ESelfContextInfo::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
