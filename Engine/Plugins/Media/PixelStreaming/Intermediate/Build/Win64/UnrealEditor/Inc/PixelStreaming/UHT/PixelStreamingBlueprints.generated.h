// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingBlueprints.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPixelStreamingDelegates;
class UTexture2D;
#ifdef PIXELSTREAMING_PixelStreamingBlueprints_generated_h
#error "PixelStreamingBlueprints.generated.h already included, missing '#pragma once' in PixelStreamingBlueprints.h"
#endif
#define PIXELSTREAMING_PixelStreamingBlueprints_generated_h

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPixelStreamingDelegates); \
	DECLARE_FUNCTION(execGetDefaultStreamerID); \
	DECLARE_FUNCTION(execStreamerKickPlayer); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execStreamerUnfreezeStream); \
	DECLARE_FUNCTION(execStreamerFreezeStream); \
	DECLARE_FUNCTION(execUnfreezeFrame); \
	DECLARE_FUNCTION(execFreezeFrame); \
	DECLARE_FUNCTION(execForceKeyFrame); \
	DECLARE_FUNCTION(execStreamerSendFile); \
	DECLARE_FUNCTION(execSendFile); \
	DECLARE_FUNCTION(execStreamerSendFileAsByteArray); \
	DECLARE_FUNCTION(execSendFileAsByteArray);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPixelStreamingDelegates); \
	DECLARE_FUNCTION(execGetDefaultStreamerID); \
	DECLARE_FUNCTION(execStreamerKickPlayer); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execStreamerUnfreezeStream); \
	DECLARE_FUNCTION(execStreamerFreezeStream); \
	DECLARE_FUNCTION(execUnfreezeFrame); \
	DECLARE_FUNCTION(execFreezeFrame); \
	DECLARE_FUNCTION(execForceKeyFrame); \
	DECLARE_FUNCTION(execStreamerSendFile); \
	DECLARE_FUNCTION(execSendFile); \
	DECLARE_FUNCTION(execStreamerSendFileAsByteArray); \
	DECLARE_FUNCTION(execSendFileAsByteArray);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ACCESSORS
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingBlueprints(); \
	friend struct Z_Construct_UClass_UPixelStreamingBlueprints_Statics; \
public: \
	DECLARE_CLASS(UPixelStreamingBlueprints, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), NO_API) \
	DECLARE_SERIALIZER(UPixelStreamingBlueprints)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingBlueprints(); \
	friend struct Z_Construct_UClass_UPixelStreamingBlueprints_Statics; \
public: \
	DECLARE_CLASS(UPixelStreamingBlueprints, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), NO_API) \
	DECLARE_SERIALIZER(UPixelStreamingBlueprints)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingBlueprints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingBlueprints) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingBlueprints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingBlueprints); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPixelStreamingBlueprints(UPixelStreamingBlueprints&&); \
	NO_API UPixelStreamingBlueprints(const UPixelStreamingBlueprints&); \
public: \
	NO_API virtual ~UPixelStreamingBlueprints();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingBlueprints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPixelStreamingBlueprints(UPixelStreamingBlueprints&&); \
	NO_API UPixelStreamingBlueprints(const UPixelStreamingBlueprints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingBlueprints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingBlueprints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingBlueprints) \
	NO_API virtual ~UPixelStreamingBlueprints();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_13_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ACCESSORS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_INCLASS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ACCESSORS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIXELSTREAMING_API UClass* StaticClass<class UPixelStreamingBlueprints>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
