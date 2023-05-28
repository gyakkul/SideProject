// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SynthKnob.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SYNTHESIS_SynthKnob_generated_h
#error "SynthKnob.generated.h already included, missing '#pragma once' in SynthKnob.h"
#endif
#define SYNTHESIS_SynthKnob_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthKnob(); \
	friend struct Z_Construct_UClass_USynthKnob_Statics; \
public: \
	DECLARE_CLASS(USynthKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthKnob)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSynthKnob(); \
	friend struct Z_Construct_UClass_USynthKnob_Statics; \
public: \
	DECLARE_CLASS(USynthKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthKnob)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthKnob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthKnob) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthKnob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthKnob); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthKnob(USynthKnob&&); \
	NO_API USynthKnob(const USynthKnob&); \
public: \
	NO_API virtual ~USynthKnob();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthKnob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthKnob(USynthKnob&&); \
	NO_API USynthKnob(const USynthKnob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthKnob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthKnob); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthKnob) \
	NO_API virtual ~USynthKnob();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SynthKnob."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynthKnob>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
