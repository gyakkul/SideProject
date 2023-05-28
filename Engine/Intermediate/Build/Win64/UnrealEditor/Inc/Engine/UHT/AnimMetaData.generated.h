// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimMetaData_generated_h
#error "AnimMetaData.generated.h already included, missing '#pragma once' in AnimMetaData.h"
#endif
#define ENGINE_AnimMetaData_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimMetaData(); \
	friend struct Z_Construct_UClass_UAnimMetaData_Statics; \
public: \
	DECLARE_CLASS(UAnimMetaData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimMetaData)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMetaData(); \
	friend struct Z_Construct_UClass_UAnimMetaData_Statics; \
public: \
	DECLARE_CLASS(UAnimMetaData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimMetaData)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimMetaData(UAnimMetaData&&); \
	NO_API UAnimMetaData(const UAnimMetaData&); \
public: \
	NO_API virtual ~UAnimMetaData();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimMetaData(UAnimMetaData&&); \
	NO_API UAnimMetaData(const UAnimMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMetaData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMetaData) \
	NO_API virtual ~UAnimMetaData();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimMetaData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
