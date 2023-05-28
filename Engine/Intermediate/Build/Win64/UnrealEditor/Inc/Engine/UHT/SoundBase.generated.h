// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundBase_generated_h
#error "SoundBase.generated.h already included, missing '#pragma once' in SoundBase.h"
#endif
#define ENGINE_SoundBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundBase, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundBase(); \
	friend struct Z_Construct_UClass_USoundBase_Statics; \
public: \
	DECLARE_CLASS(USoundBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USoundBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUSoundBase(); \
	friend struct Z_Construct_UClass_USoundBase_Statics; \
public: \
	DECLARE_CLASS(USoundBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USoundBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundBase(USoundBase&&); \
	NO_API USoundBase(const USoundBase&); \
public: \
	NO_API virtual ~USoundBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundBase(USoundBase&&); \
	NO_API USoundBase(const USoundBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBase) \
	NO_API virtual ~USoundBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_86_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h


#define FOREACH_ENUM_EVIRTUALIZATIONMODE(op) \
	op(EVirtualizationMode::Disabled) \
	op(EVirtualizationMode::PlayWhenSilent) \
	op(EVirtualizationMode::Restart) 

enum class EVirtualizationMode : uint8;
template<> struct TIsUEnumClass<EVirtualizationMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVirtualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
