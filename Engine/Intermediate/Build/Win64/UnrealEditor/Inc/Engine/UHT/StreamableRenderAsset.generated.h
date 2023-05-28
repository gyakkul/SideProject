// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StreamableRenderAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StreamableRenderAsset_generated_h
#error "StreamableRenderAsset.generated.h already included, missing '#pragma once' in StreamableRenderAsset.h"
#endif
#define ENGINE_StreamableRenderAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamableRenderAsset(); \
	friend struct Z_Construct_UClass_UStreamableRenderAsset_Statics; \
public: \
	DECLARE_CLASS(UStreamableRenderAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStreamableRenderAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUStreamableRenderAsset(); \
	friend struct Z_Construct_UClass_UStreamableRenderAsset_Statics; \
public: \
	DECLARE_CLASS(UStreamableRenderAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStreamableRenderAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStreamableRenderAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamableRenderAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamableRenderAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamableRenderAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStreamableRenderAsset(UStreamableRenderAsset&&); \
	ENGINE_API UStreamableRenderAsset(const UStreamableRenderAsset&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStreamableRenderAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStreamableRenderAsset(UStreamableRenderAsset&&); \
	ENGINE_API UStreamableRenderAsset(const UStreamableRenderAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamableRenderAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamableRenderAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamableRenderAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StreamableRenderAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStreamableRenderAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
