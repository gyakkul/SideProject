// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingDelegates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIXELSTREAMING_PixelStreamingDelegates_generated_h
#error "PixelStreamingDelegates.generated.h already included, missing '#pragma once' in PixelStreamingDelegates.h"
#endif
#define PIXELSTREAMING_PixelStreamingDelegates_generated_h

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_26_DELEGATE \
static void FConnectedToSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& ConnectedToSignallingServer);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_37_DELEGATE \
static void FDisconnectedFromSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& DisconnectedFromSignallingServer);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_48_DELEGATE \
static void FNewConnection_DelegateWrapper(const FMulticastScriptDelegate& NewConnection, const FString& StreamerId, const FString& PlayerId, bool QualityController);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_59_DELEGATE \
static void FClosedConnection_DelegateWrapper(const FMulticastScriptDelegate& ClosedConnection, const FString& StreamerId, const FString& PlayerId, bool WasQualityController);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_71_DELEGATE \
static void FAllConnectionsClosed_DelegateWrapper(const FMulticastScriptDelegate& AllConnectionsClosed, const FString& StreamerId);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_103_DELEGATE \
static void FStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& StatsChanged, const FString& PlayerId, FName StatName, float StatValue);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_114_DELEGATE \
static void FFallbackToSoftwareEncodering_DelegateWrapper(const FMulticastScriptDelegate& FallbackToSoftwareEncodering);


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ACCESSORS
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingDelegates(); \
	friend struct Z_Construct_UClass_UPixelStreamingDelegates_Statics; \
public: \
	DECLARE_CLASS(UPixelStreamingDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), NO_API) \
	DECLARE_SERIALIZER(UPixelStreamingDelegates)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingDelegates(); \
	friend struct Z_Construct_UClass_UPixelStreamingDelegates_Statics; \
public: \
	DECLARE_CLASS(UPixelStreamingDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), NO_API) \
	DECLARE_SERIALIZER(UPixelStreamingDelegates)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingDelegates) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingDelegates); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPixelStreamingDelegates(UPixelStreamingDelegates&&); \
	NO_API UPixelStreamingDelegates(const UPixelStreamingDelegates&); \
public: \
	NO_API virtual ~UPixelStreamingDelegates();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPixelStreamingDelegates(UPixelStreamingDelegates&&); \
	NO_API UPixelStreamingDelegates(const UPixelStreamingDelegates&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingDelegates) \
	NO_API virtual ~UPixelStreamingDelegates();


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_16_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ACCESSORS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_INCLASS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ACCESSORS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIXELSTREAMING_API UClass* StaticClass<class UPixelStreamingDelegates>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
