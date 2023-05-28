// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Synth2DSlider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef SYNTHESIS_Synth2DSlider_generated_h
#error "Synth2DSlider.generated.h already included, missing '#pragma once' in Synth2DSlider.h"
#endif
#define SYNTHESIS_Synth2DSlider_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_11_DELEGATE \
SYNTHESIS_API void FOnMouseCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEventSynth2D);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_12_DELEGATE \
SYNTHESIS_API void FOnMouseCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEventSynth2D);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_13_DELEGATE \
SYNTHESIS_API void FOnControllerCaptureBeginEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEventSynth2D);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_14_DELEGATE \
SYNTHESIS_API void FOnControllerCaptureEndEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEventSynth2D);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_15_DELEGATE \
SYNTHESIS_API void FOnFloatValueChangedEventSynth2D_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEventSynth2D, float Value);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynth2DSlider(); \
	friend struct Z_Construct_UClass_USynth2DSlider_Statics; \
public: \
	DECLARE_CLASS(USynth2DSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynth2DSlider)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSynth2DSlider(); \
	friend struct Z_Construct_UClass_USynth2DSlider_Statics; \
public: \
	DECLARE_CLASS(USynth2DSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynth2DSlider)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynth2DSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynth2DSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynth2DSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynth2DSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynth2DSlider(USynth2DSlider&&); \
	NO_API USynth2DSlider(const USynth2DSlider&); \
public: \
	NO_API virtual ~USynth2DSlider();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynth2DSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynth2DSlider(USynth2DSlider&&); \
	NO_API USynth2DSlider(const USynth2DSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynth2DSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynth2DSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynth2DSlider) \
	NO_API virtual ~USynth2DSlider();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Synth2DSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynth2DSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
