// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUNDCUETEMPLATES_SoundCueContainer_generated_h
#error "SoundCueContainer.generated.h already included, missing '#pragma once' in SoundCueContainer.h"
#endif
#define SOUNDCUETEMPLATES_SoundCueContainer_generated_h

#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_ACCESSORS
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCueContainer(); \
	friend struct Z_Construct_UClass_USoundCueContainer_Statics; \
public: \
	DECLARE_CLASS(USoundCueContainer, USoundCueTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), NO_API) \
	DECLARE_SERIALIZER(USoundCueContainer)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueContainer(); \
	friend struct Z_Construct_UClass_USoundCueContainer_Statics; \
public: \
	DECLARE_CLASS(USoundCueContainer, USoundCueTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), NO_API) \
	DECLARE_SERIALIZER(USoundCueContainer)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCueContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCueContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCueContainer(USoundCueContainer&&); \
	NO_API USoundCueContainer(const USoundCueContainer&); \
public: \
	NO_API virtual ~USoundCueContainer();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCueContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCueContainer(USoundCueContainer&&); \
	NO_API USoundCueContainer(const USoundCueContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCueContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueContainer) \
	NO_API virtual ~USoundCueContainer();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_INCLASS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCueContainer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDCUETEMPLATES_API UClass* StaticClass<class USoundCueContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h


#define FOREACH_ENUM_ESOUNDCONTAINERTYPE(op) \
	op(ESoundContainerType::Concatenate) \
	op(ESoundContainerType::Randomize) \
	op(ESoundContainerType::Mix) 

enum class ESoundContainerType : uint8;
template<> struct TIsUEnumClass<ESoundContainerType> { enum { Value = true }; };
template<> SOUNDCUETEMPLATES_API UEnum* StaticEnum<ESoundContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
