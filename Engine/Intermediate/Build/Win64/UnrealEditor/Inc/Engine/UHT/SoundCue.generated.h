// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundCue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundCue_generated_h
#error "SoundCue.generated.h already included, missing '#pragma once' in SoundCue.h"
#endif
#define ENGINE_SoundCue_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundNodeEditorData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USoundCue, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct Z_Construct_UClass_USoundCue_Statics; \
public: \
	DECLARE_CLASS(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundCue) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct Z_Construct_UClass_USoundCue_Statics; \
public: \
	DECLARE_CLASS(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundCue) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCue(USoundCue&&); \
	NO_API USoundCue(const USoundCue&); \
public: \
	NO_API virtual ~USoundCue();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCue(USoundCue&&); \
	NO_API USoundCue(const USoundCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue) \
	NO_API virtual ~USoundCue();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_92_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCue."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundCue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
