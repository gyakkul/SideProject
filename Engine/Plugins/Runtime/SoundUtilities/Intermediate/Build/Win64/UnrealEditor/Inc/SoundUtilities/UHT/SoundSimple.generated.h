// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundSimple.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUNDUTILITIES_SoundSimple_generated_h
#error "SoundSimple.generated.h already included, missing '#pragma once' in SoundSimple.h"
#endif
#define SOUNDUTILITIES_SoundSimple_generated_h

#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundVariation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SOUNDUTILITIES_API UScriptStruct* StaticStruct<struct FSoundVariation>();

#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ACCESSORS
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSimple, NO_API)


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSimple(); \
	friend struct Z_Construct_UClass_USoundSimple_Statics; \
public: \
	DECLARE_CLASS(USoundSimple, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilities"), NO_API) \
	DECLARE_SERIALIZER(USoundSimple) \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSimple(); \
	friend struct Z_Construct_UClass_USoundSimple_Statics; \
public: \
	DECLARE_CLASS(USoundSimple, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilities"), NO_API) \
	DECLARE_SERIALIZER(USoundSimple) \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSimple) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSimple); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSimple(USoundSimple&&); \
	NO_API USoundSimple(const USoundSimple&); \
public: \
	NO_API virtual ~USoundSimple();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSimple(USoundSimple&&); \
	NO_API USoundSimple(const USoundSimple&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSimple); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSimple) \
	NO_API virtual ~USoundSimple();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_INCLASS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDUTILITIES_API UClass* StaticClass<class USoundSimple>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundSimple_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
