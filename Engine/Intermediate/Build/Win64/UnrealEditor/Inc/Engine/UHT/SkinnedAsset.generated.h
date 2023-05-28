// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkinnedAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshSocket;
#ifdef ENGINE_SkinnedAsset_generated_h
#error "SkinnedAsset.generated.h already included, missing '#pragma once' in SkinnedAsset.h"
#endif
#define ENGINE_SkinnedAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindSocketInfo); \
	DECLARE_FUNCTION(execFindSocket);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindSocketInfo); \
	DECLARE_FUNCTION(execFindSocket);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinnedAsset(); \
	friend struct Z_Construct_UClass_USkinnedAsset_Statics; \
public: \
	DECLARE_CLASS(USkinnedAsset, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedAsset) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USkinnedAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUSkinnedAsset(); \
	friend struct Z_Construct_UClass_USkinnedAsset_Statics; \
public: \
	DECLARE_CLASS(USkinnedAsset, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedAsset) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USkinnedAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedAsset(USkinnedAsset&&); \
	NO_API USkinnedAsset(const USkinnedAsset&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedAsset(USkinnedAsset&&); \
	NO_API USkinnedAsset(const USkinnedAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkinnedAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
