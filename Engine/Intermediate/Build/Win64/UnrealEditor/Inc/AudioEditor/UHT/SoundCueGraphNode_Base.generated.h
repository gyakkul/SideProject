// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueGraph/SoundCueGraphNode_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundCueGraphNode_Base_generated_h
#error "SoundCueGraphNode_Base.generated.h already included, missing '#pragma once' in SoundCueGraphNode_Base.h"
#endif
#define AUDIOEDITOR_SoundCueGraphNode_Base_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_SPARSE_DATA
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_ACCESSORS
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode_Base(); \
	friend struct Z_Construct_UClass_USoundCueGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraphNode_Base)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueGraphNode_Base(); \
	friend struct Z_Construct_UClass_USoundCueGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(USoundCueGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundCueGraphNode_Base)


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundCueGraphNode_Base(USoundCueGraphNode_Base&&); \
	AUDIOEDITOR_API USoundCueGraphNode_Base(const USoundCueGraphNode_Base&); \
public: \
	AUDIOEDITOR_API virtual ~USoundCueGraphNode_Base();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundCueGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundCueGraphNode_Base(USoundCueGraphNode_Base&&); \
	AUDIOEDITOR_API USoundCueGraphNode_Base(const USoundCueGraphNode_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundCueGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueGraphNode_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueGraphNode_Base) \
	AUDIOEDITOR_API virtual ~USoundCueGraphNode_Base();


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_20_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_SPARSE_DATA \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_ACCESSORS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_SPARSE_DATA \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_ACCESSORS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCueGraphNode_Base."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundCueGraphNode_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
