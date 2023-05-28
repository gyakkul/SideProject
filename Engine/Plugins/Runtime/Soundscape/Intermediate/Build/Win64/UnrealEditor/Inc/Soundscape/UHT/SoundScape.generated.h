// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundScape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActiveSoundscapeColor;
class UActiveSoundscapePalette;
class UObject;
class USoundscapeColor;
class USoundscapePalette;
#ifdef SOUNDSCAPE_SoundScape_generated_h
#error "SoundScape.generated.h already included, missing '#pragma once' in SoundScape.h"
#endif
#define SOUNDSCAPE_SoundScape_generated_h

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnSoundscapePalette); \
	DECLARE_FUNCTION(execSpawnSoundscapeColor);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnSoundscapePalette); \
	DECLARE_FUNCTION(execSpawnSoundscapeColor);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ACCESSORS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USoundscapeBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(USoundscapeBPFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSoundscapeBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USoundscapeBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USoundscapeBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(USoundscapeBPFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundscapeBPFunctionLibrary(USoundscapeBPFunctionLibrary&&); \
	NO_API USoundscapeBPFunctionLibrary(const USoundscapeBPFunctionLibrary&); \
public: \
	NO_API virtual ~USoundscapeBPFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundscapeBPFunctionLibrary(USoundscapeBPFunctionLibrary&&); \
	NO_API USoundscapeBPFunctionLibrary(const USoundscapeBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeBPFunctionLibrary) \
	NO_API virtual ~USoundscapeBPFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDSCAPE_API UClass* StaticClass<class USoundscapeBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundScape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
