// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_Base_generated_h
#error "AnimGraphNode_Base.generated.h already included, missing '#pragma once' in AnimGraphNode_Base.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Base_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGraphNodePropertyBinding_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimGraphNodePropertyBinding>();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_Base, NO_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Base(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Base, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Base) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Base(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Base, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Base) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphNode_Base(UAnimGraphNode_Base&&); \
	NO_API UAnimGraphNode_Base(const UAnimGraphNode_Base&); \
public: \
	NO_API virtual ~UAnimGraphNode_Base();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphNode_Base(UAnimGraphNode_Base&&); \
	NO_API UAnimGraphNode_Base(const UAnimGraphNode_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Base); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Base) \
	NO_API virtual ~UAnimGraphNode_Base();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_193_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h_196_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_Base."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Base_h


#define FOREACH_ENUM_EBLUEPRINTUSAGE(op) \
	op(EBlueprintUsage::NoProperties) \
	op(EBlueprintUsage::DoesNotUseBlueprint) \
	op(EBlueprintUsage::UsesBlueprint) 

enum class EBlueprintUsage : uint8;
template<> struct TIsUEnumClass<EBlueprintUsage> { enum { Value = true }; };
template<> ANIMGRAPH_API UEnum* StaticEnum<EBlueprintUsage>();

#define FOREACH_ENUM_EANIMGRAPHNODEPROPERTYBINDINGTYPE(op) \
	op(EAnimGraphNodePropertyBindingType::None) \
	op(EAnimGraphNodePropertyBindingType::Property) \
	op(EAnimGraphNodePropertyBindingType::Function) 

enum class EAnimGraphNodePropertyBindingType;
template<> struct TIsUEnumClass<EAnimGraphNodePropertyBindingType> { enum { Value = true }; };
template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimGraphNodePropertyBindingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
