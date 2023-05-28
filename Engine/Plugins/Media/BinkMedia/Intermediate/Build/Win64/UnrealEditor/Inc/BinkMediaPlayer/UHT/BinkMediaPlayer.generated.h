// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BinkMediaPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FTimespan;
#ifdef BINKMEDIAPLAYER_BinkMediaPlayer_generated_h
#error "BinkMediaPlayer.generated.h already included, missing '#pragma once' in BinkMediaPlayer.h"
#endif
#define BINKMEDIAPLAYER_BinkMediaPlayer_generated_h

#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_90_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaClosed_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaClosed);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_93_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaOpened_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaOpened, const FString& OpenedUrl);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_96_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaReachedEnd_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaReachedEnd);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_99_DELEGATE \
BINKMEDIAPLAYER_API void FOnBinkMediaPlayerMediaEvent_DelegateWrapper(const FMulticastScriptDelegate& OnBinkMediaPlayerMediaEvent);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_SPARSE_DATA
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSupportsSeeking); \
	DECLARE_FUNCTION(execSupportsScrubbing); \
	DECLARE_FUNCTION(execSupportsRate); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execCloseUrl); \
	DECLARE_FUNCTION(execOpenUrl); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execCanPlay); \
	DECLARE_FUNCTION(execCanPause);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSupportsSeeking); \
	DECLARE_FUNCTION(execSupportsScrubbing); \
	DECLARE_FUNCTION(execSupportsRate); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execCloseUrl); \
	DECLARE_FUNCTION(execOpenUrl); \
	DECLARE_FUNCTION(execIsStopped); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execCanPlay); \
	DECLARE_FUNCTION(execCanPause);


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_ACCESSORS
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBinkMediaPlayer(); \
	friend struct Z_Construct_UClass_UBinkMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UBinkMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), NO_API) \
	DECLARE_SERIALIZER(UBinkMediaPlayer)


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUBinkMediaPlayer(); \
	friend struct Z_Construct_UClass_UBinkMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UBinkMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BinkMediaPlayer"), NO_API) \
	DECLARE_SERIALIZER(UBinkMediaPlayer)


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMediaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMediaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBinkMediaPlayer(UBinkMediaPlayer&&); \
	NO_API UBinkMediaPlayer(const UBinkMediaPlayer&); \
public: \
	NO_API virtual ~UBinkMediaPlayer();


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBinkMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBinkMediaPlayer(UBinkMediaPlayer&&); \
	NO_API UBinkMediaPlayer(const UBinkMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBinkMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBinkMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBinkMediaPlayer) \
	NO_API virtual ~UBinkMediaPlayer();


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_107_PROLOG
#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_INCLASS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_ACCESSORS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h_110_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BinkMediaPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BINKMEDIAPLAYER_API UClass* StaticClass<class UBinkMediaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaPlayer_h


#define FOREACH_ENUM_EBINKMEDIAPLAYERBINKBUFFERMODES(op) \
	op(BMASM_Bink_Stream) \
	op(BMASM_Bink_PreloadAll) \
	op(BMASM_Bink_StreamUntilResident) 
#define FOREACH_ENUM_EBINKMEDIAPLAYERBINKSOUNDTRACK(op) \
	op(BMASM_Bink_Sound_None) \
	op(BMASM_Bink_Sound_Simple) \
	op(BMASM_Bink_Sound_LanguageOverride) \
	op(BMASM_Bink_Sound_51) \
	op(BMASM_Bink_Sound_51LanguageOverride) \
	op(BMASM_Bink_Sound_71) \
	op(BMASM_Bink_Sound_71LanguageOverride) 
#define FOREACH_ENUM_EBINKMEDIAPLAYERBINKDRAWSTYLE(op) \
	op(BMASM_Bink_DS_RenderToTexture) \
	op(BMASM_Bink_DS_OverlayFillScreenWithAspectRatio) \
	op(BMASM_Bink_DS_OverlayOriginalMovieSize) \
	op(BMASM_Bink_DS_OverlayFillScreen) \
	op(BMASM_Bink_DS_OverlaySpecificDestinationRectangle) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
