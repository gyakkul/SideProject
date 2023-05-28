// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphAttributes_generated_h
#error "AnimGraphAttributes.generated.h already included, missing '#pragma once' in AnimGraphAttributes.h"
#endif
#define ANIMGRAPH_AnimGraphAttributes_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimGraphAttributeDesc>();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphAttributes(); \
	friend struct Z_Construct_UClass_UAnimGraphAttributes_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphAttributes, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphAttributes) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphAttributes(); \
	friend struct Z_Construct_UClass_UAnimGraphAttributes_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphAttributes, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphAttributes) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphAttributes(UAnimGraphAttributes&&); \
	NO_API UAnimGraphAttributes(const UAnimGraphAttributes&); \
public: \
	NO_API virtual ~UAnimGraphAttributes();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphAttributes(UAnimGraphAttributes&&); \
	NO_API UAnimGraphAttributes(const UAnimGraphAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphAttributes) \
	NO_API virtual ~UAnimGraphAttributes();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_92_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h


#define FOREACH_ENUM_EANIMGRAPHATTRIBUTESDISPLAYMODE(op) \
	op(EAnimGraphAttributesDisplayMode::HideOnPins) \
	op(EAnimGraphAttributesDisplayMode::ShowOnPins) \
	op(EAnimGraphAttributesDisplayMode::Automatic) 

enum class EAnimGraphAttributesDisplayMode;
template<> struct TIsUEnumClass<EAnimGraphAttributesDisplayMode> { enum { Value = true }; };
template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimGraphAttributesDisplayMode>();

#define FOREACH_ENUM_EANIMGRAPHATTRIBUTEBLEND(op) \
	op(EAnimGraphAttributeBlend::Blendable) \
	op(EAnimGraphAttributeBlend::NonBlendable) 

enum class EAnimGraphAttributeBlend;
template<> struct TIsUEnumClass<EAnimGraphAttributeBlend> { enum { Value = true }; };
template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimGraphAttributeBlend>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
