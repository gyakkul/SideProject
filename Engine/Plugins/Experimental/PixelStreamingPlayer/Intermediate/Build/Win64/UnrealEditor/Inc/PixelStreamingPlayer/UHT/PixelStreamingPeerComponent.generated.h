// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingPeerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPixelStreamingIceCandidateWrapper;
struct FPixelStreamingRTCConfigWrapper;
struct FPixelStreamingSessionDescriptionWrapper;
#ifdef PIXELSTREAMINGPLAYER_PixelStreamingPeerComponent_generated_h
#error "PixelStreamingPeerComponent.generated.h already included, missing '#pragma once' in PixelStreamingPeerComponent.h"
#endif
#define PIXELSTREAMINGPLAYER_PixelStreamingPeerComponent_generated_h

#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_11_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingOnIceCandidate_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceCandidate, FPixelStreamingIceCandidateWrapper Candidate);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_12_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingOnIceConnection_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceConnection, int32 Number);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_13_DELEGATE \
PIXELSTREAMINGPLAYER_API void FPixelStreamingOnIceDisconnection_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceDisconnection);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReceiveIceCandidate); \
	DECLARE_FUNCTION(execReceiveAnswer); \
	DECLARE_FUNCTION(execCreateAnswer); \
	DECLARE_FUNCTION(execCreateOffer); \
	DECLARE_FUNCTION(execSetConfig);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReceiveIceCandidate); \
	DECLARE_FUNCTION(execReceiveAnswer); \
	DECLARE_FUNCTION(execCreateAnswer); \
	DECLARE_FUNCTION(execCreateOffer); \
	DECLARE_FUNCTION(execSetConfig);


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_ACCESSORS
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingPeerComponent(); \
	friend struct Z_Construct_UClass_UPixelStreamingPeerComponent_Statics; \
public: \
	DECLARE_CLASS(UPixelStreamingPeerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreamingPlayer"), NO_API) \
	DECLARE_SERIALIZER(UPixelStreamingPeerComponent)


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUPixelStreamingPeerComponent(); \
	friend struct Z_Construct_UClass_UPixelStreamingPeerComponent_Statics; \
public: \
	DECLARE_CLASS(UPixelStreamingPeerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreamingPlayer"), NO_API) \
	DECLARE_SERIALIZER(UPixelStreamingPeerComponent)


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingPeerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingPeerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingPeerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingPeerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPixelStreamingPeerComponent(UPixelStreamingPeerComponent&&); \
	NO_API UPixelStreamingPeerComponent(const UPixelStreamingPeerComponent&); \
public: \
	NO_API virtual ~UPixelStreamingPeerComponent();


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingPeerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPixelStreamingPeerComponent(UPixelStreamingPeerComponent&&); \
	NO_API UPixelStreamingPeerComponent(const UPixelStreamingPeerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingPeerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingPeerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingPeerComponent) \
	NO_API virtual ~UPixelStreamingPeerComponent();


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_INCLASS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PixelStreamingPeerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIXELSTREAMINGPLAYER_API UClass* StaticClass<class UPixelStreamingPeerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
