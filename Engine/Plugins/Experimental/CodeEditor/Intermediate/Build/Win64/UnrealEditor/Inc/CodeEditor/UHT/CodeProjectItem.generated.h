// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeProjectItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODEEDITOR_CodeProjectItem_generated_h
#error "CodeProjectItem.generated.h already included, missing '#pragma once' in CodeProjectItem.h"
#endif
#define CODEEDITOR_CodeProjectItem_generated_h

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCodeProjectItem(); \
	friend struct Z_Construct_UClass_UCodeProjectItem_Statics; \
public: \
	DECLARE_CLASS(UCodeProjectItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), NO_API) \
	DECLARE_SERIALIZER(UCodeProjectItem)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCodeProjectItem(); \
	friend struct Z_Construct_UClass_UCodeProjectItem_Statics; \
public: \
	DECLARE_CLASS(UCodeProjectItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), NO_API) \
	DECLARE_SERIALIZER(UCodeProjectItem)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProjectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProjectItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProjectItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProjectItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCodeProjectItem(UCodeProjectItem&&); \
	NO_API UCodeProjectItem(const UCodeProjectItem&); \
public: \
	NO_API virtual ~UCodeProjectItem();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProjectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCodeProjectItem(UCodeProjectItem&&); \
	NO_API UCodeProjectItem(const UCodeProjectItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProjectItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProjectItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProjectItem) \
	NO_API virtual ~UCodeProjectItem();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CodeProjectItem."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODEEDITOR_API UClass* StaticClass<class UCodeProjectItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h


#define FOREACH_ENUM_ECODEPROJECTITEMTYPE(op) \
	op(ECodeProjectItemType::Project) \
	op(ECodeProjectItemType::Folder) \
	op(ECodeProjectItemType::File) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
