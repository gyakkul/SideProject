// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
#ifdef BINKMEDIAPLAYER_BinkFunctionLibrary_generated_h
#error "BinkFunctionLibrary.generated.h already included, missing '#pragma once' in BinkFunctionLibrary.h"
#endif
#define BINKMEDIAPLAYER_BinkFunctionLibrary_generated_h

#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_SPARSE_DATA
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBinkLoadingMovie_GetTime); \
	DECLARE_FUNCTION(execBinkLoadingMovie_GetDuration); \
	DECLARE_FUNCTION(execBink_DrawOverlays);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBinkLoadingMovie_GetTime); \
	DECLARE_FUNCTION(execBinkLoadingMovie_GetDuration); \
	DECLARE_FUNCTION(execBink_DrawOverlays);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ACCESSORS
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBinkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBinkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBinkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), NO_API) \
	DECLARE_SERIALIZER(UBinkFunctionLibrary)


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBinkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBinkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBinkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), NO_API) \
	DECLARE_SERIALIZER(UBinkFunctionLibrary)


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBinkFunctionLibrary(UBinkFunctionLibrary&&); \
	NO_API UBinkFunctionLibrary(const UBinkFunctionLibrary&); \
public: \
	NO_API virtual ~UBinkFunctionLibrary();


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBinkFunctionLibrary(UBinkFunctionLibrary&&); \
	NO_API UBinkFunctionLibrary(const UBinkFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkFunctionLibrary) \
	NO_API virtual ~UBinkFunctionLibrary();


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_9_PROLOG
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_INCLASS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BINKMEDIAPLAYER_API UClass* StaticClass<class UBinkFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
