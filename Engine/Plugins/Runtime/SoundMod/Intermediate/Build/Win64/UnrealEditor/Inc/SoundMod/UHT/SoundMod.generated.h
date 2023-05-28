// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundMod.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUNDMOD_SoundMod_generated_h
#error "SoundMod.generated.h already included, missing '#pragma once' in SoundMod.h"
#endif
#define SOUNDMOD_SoundMod_generated_h

#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundMod, SOUNDMOD_API)


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundMod(); \
	friend struct Z_Construct_UClass_USoundMod_Statics; \
public: \
	DECLARE_CLASS(USoundMod, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundMod"), SOUNDMOD_API) \
	DECLARE_SERIALIZER(USoundMod) \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMod(); \
	friend struct Z_Construct_UClass_USoundMod_Statics; \
public: \
	DECLARE_CLASS(USoundMod, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundMod"), SOUNDMOD_API) \
	DECLARE_SERIALIZER(USoundMod) \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDMOD_API USoundMod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDMOD_API, USoundMod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SOUNDMOD_API USoundMod(USoundMod&&); \
	SOUNDMOD_API USoundMod(const USoundMod&); \
public: \
	SOUNDMOD_API virtual ~USoundMod();


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDMOD_API USoundMod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SOUNDMOD_API USoundMod(USoundMod&&); \
	SOUNDMOD_API USoundMod(const USoundMod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDMOD_API, USoundMod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMod); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMod) \
	SOUNDMOD_API virtual ~USoundMod();


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundMod."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDMOD_API UClass* StaticClass<class USoundMod>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
