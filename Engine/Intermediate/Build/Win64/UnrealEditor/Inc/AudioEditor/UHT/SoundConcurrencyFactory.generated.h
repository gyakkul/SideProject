// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundConcurrencyFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_SoundConcurrencyFactory_generated_h
#error "SoundConcurrencyFactory.generated.h already included, missing '#pragma once' in SoundConcurrencyFactory.h"
#endif
#define AUDIOEDITOR_SoundConcurrencyFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_SPARSE_DATA
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_ACCESSORS
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundConcurrencyFactory(); \
	friend struct Z_Construct_UClass_USoundConcurrencyFactory_Statics; \
public: \
	DECLARE_CLASS(USoundConcurrencyFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundConcurrencyFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSoundConcurrencyFactory(); \
	friend struct Z_Construct_UClass_USoundConcurrencyFactory_Statics; \
public: \
	DECLARE_CLASS(USoundConcurrencyFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(USoundConcurrencyFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundConcurrencyFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundConcurrencyFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundConcurrencyFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundConcurrencyFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundConcurrencyFactory(USoundConcurrencyFactory&&); \
	AUDIOEDITOR_API USoundConcurrencyFactory(const USoundConcurrencyFactory&); \
public: \
	AUDIOEDITOR_API virtual ~USoundConcurrencyFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundConcurrencyFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API USoundConcurrencyFactory(USoundConcurrencyFactory&&); \
	AUDIOEDITOR_API USoundConcurrencyFactory(const USoundConcurrencyFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundConcurrencyFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundConcurrencyFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundConcurrencyFactory) \
	AUDIOEDITOR_API virtual ~USoundConcurrencyFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_SPARSE_DATA \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_ACCESSORS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_SPARSE_DATA \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_ACCESSORS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundConcurrencyFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class USoundConcurrencyFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
