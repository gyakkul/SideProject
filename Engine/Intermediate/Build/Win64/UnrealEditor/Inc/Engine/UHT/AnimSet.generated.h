// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSet_generated_h
#error "AnimSet.generated.h already included, missing '#pragma once' in AnimSet.h"
#endif
#define ENGINE_AnimSet_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSetMeshLinkup>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSet(); \
	friend struct Z_Construct_UClass_UAnimSet_Statics; \
public: \
	DECLARE_CLASS(UAnimSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSet)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSet(); \
	friend struct Z_Construct_UClass_UAnimSet_Statics; \
public: \
	DECLARE_CLASS(UAnimSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSet)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimSet(UAnimSet&&); \
	ENGINE_API UAnimSet(const UAnimSet&); \
public: \
	ENGINE_API virtual ~UAnimSet();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimSet(UAnimSet&&); \
	ENGINE_API UAnimSet(const UAnimSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSet) \
	ENGINE_API virtual ~UAnimSet();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
