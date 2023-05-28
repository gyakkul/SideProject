// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateNodeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateNodeBase_generated_h
#error "AnimStateNodeBase.generated.h already included, missing '#pragma once' in AnimStateNodeBase.h"
#endif
#define ANIMGRAPH_AnimStateNodeBase_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateNodeBase, ANIMGRAPH_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateNodeBase(); \
	friend struct Z_Construct_UClass_UAnimStateNodeBase_Statics; \
public: \
	DECLARE_CLASS(UAnimStateNodeBase, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateNodeBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateNodeBase(); \
	friend struct Z_Construct_UClass_UAnimStateNodeBase_Statics; \
public: \
	DECLARE_CLASS(UAnimStateNodeBase, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateNodeBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateNodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateNodeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateNodeBase(UAnimStateNodeBase&&); \
	ANIMGRAPH_API UAnimStateNodeBase(const UAnimStateNodeBase&); \
public: \
	ANIMGRAPH_API virtual ~UAnimStateNodeBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateNodeBase(UAnimStateNodeBase&&); \
	ANIMGRAPH_API UAnimStateNodeBase(const UAnimStateNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateNodeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateNodeBase) \
	ANIMGRAPH_API virtual ~UAnimStateNodeBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateNodeBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimStateNodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
