// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphNode_Comment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EdGraphNode_Comment_generated_h
#error "EdGraphNode_Comment.generated.h already included, missing '#pragma once' in EdGraphNode_Comment.h"
#endif
#define UNREALED_EdGraphNode_Comment_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Comment_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment)


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Comment_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment)


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEdGraphNode_Comment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEdGraphNode_Comment(UEdGraphNode_Comment&&); \
	UNREALED_API UEdGraphNode_Comment(const UEdGraphNode_Comment&); \
public: \
	UNREALED_API virtual ~UEdGraphNode_Comment();


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEdGraphNode_Comment(UEdGraphNode_Comment&&); \
	UNREALED_API UEdGraphNode_Comment(const UEdGraphNode_Comment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment) \
	UNREALED_API virtual ~UEdGraphNode_Comment();


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_44_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEdGraphNode_Comment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h


#define FOREACH_ENUM_ECOMMENTBOXMODE(op) \
	op(ECommentBoxMode::GroupMovement) \
	op(ECommentBoxMode::NoGroupMovement) 

namespace ECommentBoxMode { enum Type : int; }
template<> UNREALED_API UEnum* StaticEnum<ECommentBoxMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
