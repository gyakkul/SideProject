// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSlider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;
#ifdef AUDIOWIDGETS_AudioSlider_generated_h
#error "AudioSlider.generated.h already included, missing '#pragma once' in AudioSlider.h"
#endif
#define AUDIOWIDGETS_AudioSlider_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWidgetBackgroundColor); \
	DECLARE_FUNCTION(execSetSliderThumbColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderBackgroundColor); \
	DECLARE_FUNCTION(execSetShowUnitsText); \
	DECLARE_FUNCTION(execSetShowLabelOnlyOnHover); \
	DECLARE_FUNCTION(execSetValueTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsText); \
	DECLARE_FUNCTION(execSetTextLabelBackgroundColor); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execGetLinValue); \
	DECLARE_FUNCTION(execGetOutputValue);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWidgetBackgroundColor); \
	DECLARE_FUNCTION(execSetSliderThumbColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderBackgroundColor); \
	DECLARE_FUNCTION(execSetShowUnitsText); \
	DECLARE_FUNCTION(execSetShowLabelOnlyOnHover); \
	DECLARE_FUNCTION(execSetValueTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsText); \
	DECLARE_FUNCTION(execSetTextLabelBackgroundColor); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execGetLinValue); \
	DECLARE_FUNCTION(execGetOutputValue);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSliderBase(); \
	friend struct Z_Construct_UClass_UAudioSliderBase_Statics; \
public: \
	DECLARE_CLASS(UAudioSliderBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioSliderBase)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSliderBase(); \
	friend struct Z_Construct_UClass_UAudioSliderBase_Statics; \
public: \
	DECLARE_CLASS(UAudioSliderBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioSliderBase)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSliderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSliderBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSliderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSliderBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSliderBase(UAudioSliderBase&&); \
	NO_API UAudioSliderBase(const UAudioSliderBase&); \
public: \
	NO_API virtual ~UAudioSliderBase();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSliderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSliderBase(UAudioSliderBase&&); \
	NO_API UAudioSliderBase(const UAudioSliderBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSliderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSliderBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSliderBase) \
	NO_API virtual ~UAudioSliderBase();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioSliderBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioSliderBase>();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSlider(); \
	friend struct Z_Construct_UClass_UAudioSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioSlider, UAudioSliderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUAudioSlider(); \
	friend struct Z_Construct_UClass_UAudioSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioSlider, UAudioSliderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSlider(UAudioSlider&&); \
	NO_API UAudioSlider(const UAudioSlider&); \
public: \
	NO_API virtual ~UAudioSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioSlider(UAudioSlider&&); \
	NO_API UAudioSlider(const UAudioSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSlider) \
	NO_API virtual ~UAudioSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_187_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_190_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioSlider>();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioVolumeSlider(); \
	friend struct Z_Construct_UClass_UAudioVolumeSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioVolumeSlider, UAudioSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioVolumeSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUAudioVolumeSlider(); \
	friend struct Z_Construct_UClass_UAudioVolumeSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioVolumeSlider, UAudioSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioVolumeSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioVolumeSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVolumeSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioVolumeSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVolumeSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioVolumeSlider(UAudioVolumeSlider&&); \
	NO_API UAudioVolumeSlider(const UAudioVolumeSlider&); \
public: \
	NO_API virtual ~UAudioVolumeSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioVolumeSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioVolumeSlider(UAudioVolumeSlider&&); \
	NO_API UAudioVolumeSlider(const UAudioVolumeSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioVolumeSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVolumeSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVolumeSlider) \
	NO_API virtual ~UAudioVolumeSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_207_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_210_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioVolumeSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioVolumeSlider>();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioFrequencySlider(); \
	friend struct Z_Construct_UClass_UAudioFrequencySlider_Statics; \
public: \
	DECLARE_CLASS(UAudioFrequencySlider, UAudioSliderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioFrequencySlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_INCLASS \
private: \
	static void StaticRegisterNativesUAudioFrequencySlider(); \
	friend struct Z_Construct_UClass_UAudioFrequencySlider_Statics; \
public: \
	DECLARE_CLASS(UAudioFrequencySlider, UAudioSliderBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioFrequencySlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioFrequencySlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFrequencySlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioFrequencySlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFrequencySlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioFrequencySlider(UAudioFrequencySlider&&); \
	NO_API UAudioFrequencySlider(const UAudioFrequencySlider&); \
public: \
	NO_API virtual ~UAudioFrequencySlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioFrequencySlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioFrequencySlider(UAudioFrequencySlider&&); \
	NO_API UAudioFrequencySlider(const UAudioFrequencySlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioFrequencySlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFrequencySlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFrequencySlider) \
	NO_API virtual ~UAudioFrequencySlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_218_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h_221_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioFrequencySlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioFrequencySlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
