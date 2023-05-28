// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/ReverbEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReverbEffect_generated_h
#error "ReverbEffect.generated.h already included, missing '#pragma once' in ReverbEffect.h"
#endif
#define ENGINE_ReverbEffect_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReverbEffect(); \
	friend struct Z_Construct_UClass_UReverbEffect_Statics; \
public: \
	DECLARE_CLASS(UReverbEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReverbEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReverbEffect(); \
	friend struct Z_Construct_UClass_UReverbEffect_Statics; \
public: \
	DECLARE_CLASS(UReverbEffect, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReverbEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReverbEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReverbEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReverbEffect(UReverbEffect&&); \
	ENGINE_API UReverbEffect(const UReverbEffect&); \
public: \
	ENGINE_API virtual ~UReverbEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReverbEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReverbEffect(UReverbEffect&&); \
	ENGINE_API UReverbEffect(const UReverbEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReverbEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbEffect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbEffect) \
	ENGINE_API virtual ~UReverbEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReverbEffect."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReverbEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_ReverbEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
