// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AudioBusFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_AudioBusFactory_generated_h
#error "AudioBusFactory.generated.h already included, missing '#pragma once' in AudioBusFactory.h"
#endif
#define AUDIOEDITOR_AudioBusFactory_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_SPARSE_DATA
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_ACCESSORS
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioBusFactory(); \
	friend struct Z_Construct_UClass_UAudioBusFactory_Statics; \
public: \
	DECLARE_CLASS(UAudioBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(UAudioBusFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAudioBusFactory(); \
	friend struct Z_Construct_UClass_UAudioBusFactory_Statics; \
public: \
	DECLARE_CLASS(UAudioBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), AUDIOEDITOR_API) \
	DECLARE_SERIALIZER(UAudioBusFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UAudioBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBusFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UAudioBusFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBusFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API UAudioBusFactory(UAudioBusFactory&&); \
	AUDIOEDITOR_API UAudioBusFactory(const UAudioBusFactory&); \
public: \
	AUDIOEDITOR_API virtual ~UAudioBusFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UAudioBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOEDITOR_API UAudioBusFactory(UAudioBusFactory&&); \
	AUDIOEDITOR_API UAudioBusFactory(const UAudioBusFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UAudioBusFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBusFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBusFactory) \
	AUDIOEDITOR_API virtual ~UAudioBusFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_ACCESSORS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_ACCESSORS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioBusFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class UAudioBusFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
