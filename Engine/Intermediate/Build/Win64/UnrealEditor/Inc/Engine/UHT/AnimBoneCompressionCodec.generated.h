// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBoneCompressionCodec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimBoneCompressionCodec_generated_h
#error "AnimBoneCompressionCodec.generated.h already included, missing '#pragma once' in AnimBoneCompressionCodec.h"
#endif
#define ENGINE_AnimBoneCompressionCodec_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionCodec(); \
	friend struct Z_Construct_UClass_UAnimBoneCompressionCodec_Statics; \
public: \
	DECLARE_CLASS(UAnimBoneCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimBoneCompressionCodec)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBoneCompressionCodec(); \
	friend struct Z_Construct_UClass_UAnimBoneCompressionCodec_Statics; \
public: \
	DECLARE_CLASS(UAnimBoneCompressionCodec, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimBoneCompressionCodec)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimBoneCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionCodec) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimBoneCompressionCodec); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionCodec); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimBoneCompressionCodec(UAnimBoneCompressionCodec&&); \
	NO_API UAnimBoneCompressionCodec(const UAnimBoneCompressionCodec&); \
public: \
	NO_API virtual ~UAnimBoneCompressionCodec();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimBoneCompressionCodec(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimBoneCompressionCodec(UAnimBoneCompressionCodec&&); \
	NO_API UAnimBoneCompressionCodec(const UAnimBoneCompressionCodec&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimBoneCompressionCodec); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBoneCompressionCodec); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBoneCompressionCodec) \
	NO_API virtual ~UAnimBoneCompressionCodec();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimBoneCompressionCodec."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBoneCompressionCodec>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionCodec_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
