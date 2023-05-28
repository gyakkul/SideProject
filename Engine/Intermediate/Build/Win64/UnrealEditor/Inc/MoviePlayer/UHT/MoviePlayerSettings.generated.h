// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePlayerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIEPLAYER_MoviePlayerSettings_generated_h
#error "MoviePlayerSettings.generated.h already included, missing '#pragma once' in MoviePlayerSettings.h"
#endif
#define MOVIEPLAYER_MoviePlayerSettings_generated_h

#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePlayerSettings(); \
	friend struct Z_Construct_UClass_UMoviePlayerSettings_Statics; \
public: \
	DECLARE_CLASS(UMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoviePlayer"), NO_API) \
	DECLARE_SERIALIZER(UMoviePlayerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePlayerSettings(); \
	friend struct Z_Construct_UClass_UMoviePlayerSettings_Statics; \
public: \
	DECLARE_CLASS(UMoviePlayerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoviePlayer"), NO_API) \
	DECLARE_SERIALIZER(UMoviePlayerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePlayerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePlayerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePlayerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePlayerSettings(UMoviePlayerSettings&&); \
	NO_API UMoviePlayerSettings(const UMoviePlayerSettings&); \
public: \
	NO_API virtual ~UMoviePlayerSettings();


#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePlayerSettings(UMoviePlayerSettings&&); \
	NO_API UMoviePlayerSettings(const UMoviePlayerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePlayerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePlayerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePlayerSettings) \
	NO_API virtual ~UMoviePlayerSettings();


#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_18_PROLOG
#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_INCLASS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MoviePlayerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIEPLAYER_API UClass* StaticClass<class UMoviePlayerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
