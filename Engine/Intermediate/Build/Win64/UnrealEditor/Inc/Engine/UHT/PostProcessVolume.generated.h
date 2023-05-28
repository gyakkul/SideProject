// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PostProcessVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
#ifdef ENGINE_PostProcessVolume_generated_h
#error "PostProcessVolume.generated.h already included, missing '#pragma once' in PostProcessVolume.h"
#endif
#define ENGINE_PostProcessVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APostProcessVolume, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPostProcessVolume(); \
	friend struct Z_Construct_UClass_APostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(APostProcessVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APostProcessVolume) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<APostProcessVolume*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPostProcessVolume(); \
	friend struct Z_Construct_UClass_APostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(APostProcessVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APostProcessVolume) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<APostProcessVolume*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostProcessVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostProcessVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostProcessVolume(APostProcessVolume&&); \
	NO_API APostProcessVolume(const APostProcessVolume&); \
public: \
	NO_API virtual ~APostProcessVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostProcessVolume(APostProcessVolume&&); \
	NO_API APostProcessVolume(const APostProcessVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostProcessVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostProcessVolume) \
	NO_API virtual ~APostProcessVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PostProcessVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APostProcessVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
