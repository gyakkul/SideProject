// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialGraphSchema_generated_h
#error "MaterialGraphSchema.generated.h already included, missing '#pragma once' in MaterialGraphSchema.h"
#endif
#define UNREALED_MaterialGraphSchema_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> UNREALED_API UScriptStruct* StaticStruct<struct FMaterialGraphSchemaAction_NewNode>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewFunctionCall_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> UNREALED_API UScriptStruct* StaticStruct<struct FMaterialGraphSchemaAction_NewFunctionCall>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComposite_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> UNREALED_API UScriptStruct* StaticStruct<struct FMaterialGraphSchemaAction_NewComposite>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewComment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> UNREALED_API UScriptStruct* StaticStruct<struct FMaterialGraphSchemaAction_NewComment>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_NewNamedRerouteUsage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> UNREALED_API UScriptStruct* StaticStruct<struct FMaterialGraphSchemaAction_NewNamedRerouteUsage>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialGraphSchemaAction_Paste_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> UNREALED_API UScriptStruct* StaticStruct<struct FMaterialGraphSchemaAction_Paste>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialGraphSchema(); \
	friend struct Z_Construct_UClass_UMaterialGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialGraphSchema)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphSchema(); \
	friend struct Z_Construct_UClass_UMaterialGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialGraphSchema)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UMaterialGraphSchema(UMaterialGraphSchema&&); \
	UNREALED_API UMaterialGraphSchema(const UMaterialGraphSchema&); \
public: \
	UNREALED_API virtual ~UMaterialGraphSchema();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UMaterialGraphSchema(UMaterialGraphSchema&&); \
	UNREALED_API UMaterialGraphSchema(const UMaterialGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphSchema) \
	UNREALED_API virtual ~UMaterialGraphSchema();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_175_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h_178_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialGraphSchema."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
