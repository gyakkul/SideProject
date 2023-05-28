// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSSPAWNER_MassTranslator_generated_h
#error "MassTranslator.generated.h already included, missing '#pragma once' in MassTranslator.h"
#endif
#define MASSSPAWNER_MassTranslator_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTranslator(); \
	friend struct Z_Construct_UClass_UMassTranslator_Statics; \
public: \
	DECLARE_CLASS(UMassTranslator, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), NO_API) \
	DECLARE_SERIALIZER(UMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMassTranslator(); \
	friend struct Z_Construct_UClass_UMassTranslator_Statics; \
public: \
	DECLARE_CLASS(UMassTranslator, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), NO_API) \
	DECLARE_SERIALIZER(UMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTranslator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTranslator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTranslator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTranslator(UMassTranslator&&); \
	NO_API UMassTranslator(const UMassTranslator&); \
public: \
	NO_API virtual ~UMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTranslator(UMassTranslator&&); \
	NO_API UMassTranslator(const UMassTranslator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTranslator); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassTranslator) \
	NO_API virtual ~UMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSSPAWNER_API UClass* StaticClass<class UMassTranslator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h


#define FOREACH_ENUM_EMASSTRANSLATIONDIRECTION(op) \
	op(EMassTranslationDirection::None) \
	op(EMassTranslationDirection::InitializationOnly) \
	op(EMassTranslationDirection::ActorToMass) \
	op(EMassTranslationDirection::MassToActor) \
	op(EMassTranslationDirection::BothWays) 

enum class EMassTranslationDirection : uint8;
template<> struct TIsUEnumClass<EMassTranslationDirection> { enum { Value = true }; };
template<> MASSSPAWNER_API UEnum* StaticEnum<EMassTranslationDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
