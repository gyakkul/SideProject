// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Volume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Volume_generated_h
#error "Volume.generated.h already included, missing '#pragma once' in Volume.h"
#endif
#define ENGINE_Volume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVolume(); \
	friend struct Z_Construct_UClass_AVolume_Statics; \
public: \
	DECLARE_CLASS(AVolume, ABrush, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVolume(); \
	friend struct Z_Construct_UClass_AVolume_Statics; \
public: \
	DECLARE_CLASS(AVolume, ABrush, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVolume(AVolume&&); \
	NO_API AVolume(const AVolume&); \
public: \
	NO_API virtual ~AVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVolume(AVolume&&); \
	NO_API AVolume(const AVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolume); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolume) \
	NO_API virtual ~AVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Volume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
