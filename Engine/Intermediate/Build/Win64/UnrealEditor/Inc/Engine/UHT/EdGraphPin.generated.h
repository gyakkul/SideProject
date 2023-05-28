// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphPin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphPin_generated_h
#error "EdGraphPin.generated.h already included, missing '#pragma once' in EdGraphPin.h"
#endif
#define ENGINE_EdGraphPin_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleMemberReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSimpleMemberReference>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphPinType_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphPinType>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphPinReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphPinReference>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics; \
public: \
	DECLARE_CLASS(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics; \
public: \
	DECLARE_CLASS(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&); \
	ENGINE_API UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&); \
public: \
	ENGINE_API virtual ~UEdGraphPin_Deprecated();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&); \
	ENGINE_API UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated) \
	ENGINE_API virtual ~UEdGraphPin_Deprecated();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_588_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_591_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphPin_Deprecated."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphPin_Deprecated>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h


#define FOREACH_ENUM_EBLUEPRINTPINSTYLETYPE(op) \
	op(BPST_Original) \
	op(BPST_VariantA) 

enum EBlueprintPinStyleType : int;
template<> ENGINE_API UEnum* StaticEnum<EBlueprintPinStyleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
