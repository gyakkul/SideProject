// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimStreamable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimStreamable_generated_h
#error "AnimStreamable.generated.h already included, missing '#pragma once' in AnimStreamable.h"
#endif
#define ENGINE_AnimStreamable_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStreamable, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStreamable(); \
	friend struct Z_Construct_UClass_UAnimStreamable_Statics; \
public: \
	DECLARE_CLASS(UAnimStreamable, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimStreamable) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStreamable(); \
	friend struct Z_Construct_UClass_UAnimStreamable_Statics; \
public: \
	DECLARE_CLASS(UAnimStreamable, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimStreamable) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimStreamable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStreamable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimStreamable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStreamable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimStreamable(UAnimStreamable&&); \
	ENGINE_API UAnimStreamable(const UAnimStreamable&); \
public: \
	ENGINE_API virtual ~UAnimStreamable();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimStreamable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimStreamable(UAnimStreamable&&); \
	ENGINE_API UAnimStreamable(const UAnimStreamable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimStreamable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStreamable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStreamable) \
	ENGINE_API virtual ~UAnimStreamable();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStreamable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimStreamable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
