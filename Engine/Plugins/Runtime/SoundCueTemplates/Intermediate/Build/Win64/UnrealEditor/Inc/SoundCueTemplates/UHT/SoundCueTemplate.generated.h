// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueTemplate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SOUNDCUETEMPLATES_SoundCueTemplate_generated_h
#error "SoundCueTemplate.generated.h already included, missing '#pragma once' in SoundCueTemplate.h"
#endif
#define SOUNDCUETEMPLATES_SoundCueTemplate_generated_h

#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSoundWavesToTemplate);


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSoundWavesToTemplate);


#else
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCueTemplate(); \
	friend struct Z_Construct_UClass_USoundCueTemplate_Statics; \
public: \
	DECLARE_CLASS(USoundCueTemplate, USoundCue, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), NO_API) \
	DECLARE_SERIALIZER(USoundCueTemplate)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueTemplate(); \
	friend struct Z_Construct_UClass_USoundCueTemplate_Statics; \
public: \
	DECLARE_CLASS(USoundCueTemplate, USoundCue, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), NO_API) \
	DECLARE_SERIALIZER(USoundCueTemplate)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCueTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCueTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueTemplate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCueTemplate(USoundCueTemplate&&); \
	NO_API USoundCueTemplate(const USoundCueTemplate&); \
public: \
	NO_API virtual ~USoundCueTemplate();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCueTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCueTemplate(USoundCueTemplate&&); \
	NO_API USoundCueTemplate(const USoundCueTemplate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCueTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueTemplate); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueTemplate) \
	NO_API virtual ~USoundCueTemplate();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCueTemplate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDCUETEMPLATES_API UClass* StaticClass<class USoundCueTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
