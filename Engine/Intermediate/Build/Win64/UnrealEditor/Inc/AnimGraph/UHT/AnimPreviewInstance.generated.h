// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimPreviewInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimPreviewInstance_generated_h
#error "AnimPreviewInstance.generated.h already included, missing '#pragma once' in AnimPreviewInstance.h"
#endif
#define ANIMGRAPH_AnimPreviewInstance_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimSingleNodeInstanceProxy Super;


template<> ANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimPreviewInstanceProxy>();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimPreviewInstance, NO_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimPreviewInstance(); \
	friend struct Z_Construct_UClass_UAnimPreviewInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimPreviewInstance, UAnimSingleNodeInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimPreviewInstance) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUAnimPreviewInstance(); \
	friend struct Z_Construct_UClass_UAnimPreviewInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimPreviewInstance, UAnimSingleNodeInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimPreviewInstance) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPreviewInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPreviewInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPreviewInstance(UAnimPreviewInstance&&); \
	NO_API UAnimPreviewInstance(const UAnimPreviewInstance&); \
public: \
	NO_API virtual ~UAnimPreviewInstance();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPreviewInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPreviewInstance(UAnimPreviewInstance&&); \
	NO_API UAnimPreviewInstance(const UAnimPreviewInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPreviewInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewInstance) \
	NO_API virtual ~UAnimPreviewInstance();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_178_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimPreviewInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimPreviewInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h


#define FOREACH_ENUM_EMONTAGEPREVIEWTYPE(op) \
	op(EMPT_Normal) \
	op(EMPT_AllSections) 

enum EMontagePreviewType : int;
template<> ANIMGRAPH_API UEnum* StaticEnum<EMontagePreviewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
