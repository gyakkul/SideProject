// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundscapeColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundscapeColor;
#ifdef SOUNDSCAPE_SoundscapeColor_generated_h
#error "SoundscapeColor.generated.h already included, missing '#pragma once' in SoundscapeColor.h"
#endif
#define SOUNDSCAPE_SoundscapeColor_generated_h

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_18_DELEGATE \
SOUNDSCAPE_API void FOnSoundscapeColorParameterChanges_DelegateWrapper(const FMulticastScriptDelegate& OnSoundscapeColorParameterChanges, const USoundscapeColor* SoundscapeColor);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<struct FSoundscapeColorSpawnSettings>();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<struct FSoundscapeColorModulationSettings>();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<struct FSoundscapeColorPlaybackSettings>();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<struct FSoundscapeColorVoiceParams>();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ACCESSORS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundscapeColor, NO_API)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeColor(); \
	friend struct Z_Construct_UClass_USoundscapeColor_Statics; \
public: \
	DECLARE_CLASS(USoundscapeColor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(USoundscapeColor) \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_INCLASS \
private: \
	static void StaticRegisterNativesUSoundscapeColor(); \
	friend struct Z_Construct_UClass_USoundscapeColor_Statics; \
public: \
	DECLARE_CLASS(USoundscapeColor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(USoundscapeColor) \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeColor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundscapeColor(USoundscapeColor&&); \
	NO_API USoundscapeColor(const USoundscapeColor&); \
public: \
	NO_API virtual ~USoundscapeColor();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundscapeColor(USoundscapeColor&&); \
	NO_API USoundscapeColor(const USoundscapeColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundscapeColor) \
	NO_API virtual ~USoundscapeColor();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_250_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDSCAPE_API UClass* StaticClass<class USoundscapeColor>();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopLimitedDurationVoice);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopLimitedDurationVoice);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_ACCESSORS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActiveSoundscapeColorVoice(); \
	friend struct Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics; \
public: \
	DECLARE_CLASS(UActiveSoundscapeColorVoice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(UActiveSoundscapeColorVoice)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_INCLASS \
private: \
	static void StaticRegisterNativesUActiveSoundscapeColorVoice(); \
	friend struct Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics; \
public: \
	DECLARE_CLASS(UActiveSoundscapeColorVoice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(UActiveSoundscapeColorVoice)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapeColorVoice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapeColorVoice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapeColorVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapeColorVoice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActiveSoundscapeColorVoice(UActiveSoundscapeColorVoice&&); \
	NO_API UActiveSoundscapeColorVoice(const UActiveSoundscapeColorVoice&); \
public: \
	NO_API virtual ~UActiveSoundscapeColorVoice();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapeColorVoice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActiveSoundscapeColorVoice(UActiveSoundscapeColorVoice&&); \
	NO_API UActiveSoundscapeColorVoice(const UActiveSoundscapeColorVoice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapeColorVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapeColorVoice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapeColorVoice) \
	NO_API virtual ~UActiveSoundscapeColorVoice();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_298_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDSCAPE_API UClass* StaticClass<class UActiveSoundscapeColorVoice>();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSoundscapeColor); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSoundscapeColor); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSoundscapeColorParameterChange);


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSoundscapeColorParameterChange);


#else
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_ACCESSORS
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActiveSoundscapeColor(); \
	friend struct Z_Construct_UClass_UActiveSoundscapeColor_Statics; \
public: \
	DECLARE_CLASS(UActiveSoundscapeColor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(UActiveSoundscapeColor)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_INCLASS \
private: \
	static void StaticRegisterNativesUActiveSoundscapeColor(); \
	friend struct Z_Construct_UClass_UActiveSoundscapeColor_Statics; \
public: \
	DECLARE_CLASS(UActiveSoundscapeColor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), NO_API) \
	DECLARE_SERIALIZER(UActiveSoundscapeColor)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapeColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapeColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapeColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActiveSoundscapeColor(UActiveSoundscapeColor&&); \
	NO_API UActiveSoundscapeColor(const UActiveSoundscapeColor&); \
public: \
	NO_API virtual ~UActiveSoundscapeColor();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapeColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActiveSoundscapeColor(UActiveSoundscapeColor&&); \
	NO_API UActiveSoundscapeColor(const UActiveSoundscapeColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapeColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapeColor) \
	NO_API virtual ~UActiveSoundscapeColor();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_322_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_ACCESSORS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDSCAPE_API UClass* StaticClass<class UActiveSoundscapeColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h


#define FOREACH_ENUM_ESOUNDSCAPECOLORALTITUDECLAMPMODE(op) \
	op(ESoundscapeColorAltitudeClampMode::Relative) \
	op(ESoundscapeColorAltitudeClampMode::Absolute) 

enum class ESoundscapeColorAltitudeClampMode : uint8;
template<> struct TIsUEnumClass<ESoundscapeColorAltitudeClampMode> { enum { Value = true }; };
template<> SOUNDSCAPE_API UEnum* StaticEnum<ESoundscapeColorAltitudeClampMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
