// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSourceBus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundSourceBus_generated_h
#error "SoundSourceBus.generated.h already included, missing '#pragma once' in SoundSourceBus.h"
#endif
#define ENGINE_SoundSourceBus_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSourceBus(); \
	friend struct Z_Construct_UClass_USoundSourceBus_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBus, USoundWave, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSourceBus)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceBus(); \
	friend struct Z_Construct_UClass_USoundSourceBus_Statics; \
public: \
	DECLARE_CLASS(USoundSourceBus, USoundWave, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSourceBus)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSourceBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSourceBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSourceBus(USoundSourceBus&&); \
	NO_API USoundSourceBus(const USoundSourceBus&); \
public: \
	NO_API virtual ~USoundSourceBus();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSourceBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSourceBus(USoundSourceBus&&); \
	NO_API USoundSourceBus(const USoundSourceBus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSourceBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBus) \
	NO_API virtual ~USoundSourceBus();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSourceBus."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSourceBus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h


#define FOREACH_ENUM_ESOURCEBUSCHANNELS(op) \
	op(ESourceBusChannels::Mono) \
	op(ESourceBusChannels::Stereo) 

enum class ESourceBusChannels : uint8;
template<> struct TIsUEnumClass<ESourceBusChannels> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESourceBusChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
