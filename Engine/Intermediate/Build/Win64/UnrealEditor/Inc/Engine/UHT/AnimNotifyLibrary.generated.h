// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifyLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimNotifyEventReference;
#ifdef ENGINE_AnimNotifyLibrary_generated_h
#error "AnimNotifyLibrary.generated.h already included, missing '#pragma once' in AnimNotifyLibrary.h"
#endif
#define ENGINE_AnimNotifyLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyStateReachedEnd);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyStateReachedEnd);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyLibrary(); \
	friend struct Z_Construct_UClass_UAnimNotifyLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyLibrary(); \
	friend struct Z_Construct_UClass_UAnimNotifyLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyLibrary(UAnimNotifyLibrary&&); \
	NO_API UAnimNotifyLibrary(const UAnimNotifyLibrary&); \
public: \
	NO_API virtual ~UAnimNotifyLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyLibrary(UAnimNotifyLibrary&&); \
	NO_API UAnimNotifyLibrary(const UAnimNotifyLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyLibrary) \
	NO_API virtual ~UAnimNotifyLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
