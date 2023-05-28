// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompress.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCompress_generated_h
#error "AnimCompress.generated.h already included, missing '#pragma once' in AnimCompress.h"
#endif
#define ENGINE_AnimCompress_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimCompress(); \
	friend struct Z_Construct_UClass_UAnimCompress_Statics; \
public: \
	DECLARE_CLASS(UAnimCompress, UAnimBoneCompressionCodec, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompress)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_INCLASS \
private: \
	static void StaticRegisterNativesUAnimCompress(); \
	friend struct Z_Construct_UClass_UAnimCompress_Statics; \
public: \
	DECLARE_CLASS(UAnimCompress, UAnimBoneCompressionCodec, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimCompress)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimCompress(UAnimCompress&&); \
	ENGINE_API UAnimCompress(const UAnimCompress&); \
public: \
	ENGINE_API virtual ~UAnimCompress();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimCompress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimCompress(UAnimCompress&&); \
	ENGINE_API UAnimCompress(const UAnimCompress&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimCompress); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimCompress); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimCompress) \
	ENGINE_API virtual ~UAnimCompress();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_310_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_313_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimCompress."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimCompress>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
