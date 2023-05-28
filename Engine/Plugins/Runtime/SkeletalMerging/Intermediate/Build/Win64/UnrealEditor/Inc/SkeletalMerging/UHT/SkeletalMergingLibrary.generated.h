// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMergingLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeleton;
struct FSkeletalMeshMergeParams;
struct FSkeletonMergeParams;
#ifdef SKELETALMERGING_SkeletalMergingLibrary_generated_h
#error "SkeletalMergingLibrary.generated.h already included, missing '#pragma once' in SkeletalMergingLibrary.h"
#endif
#define SKELETALMERGING_SkeletalMergingLibrary_generated_h

#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SKELETALMERGING_API UScriptStruct* StaticStruct<struct FSkeletalMeshMergeParams>();

#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SKELETALMERGING_API UScriptStruct* StaticStruct<struct FSkeletonMergeParams>();

#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMergeSkeletons); \
	DECLARE_FUNCTION(execMergeMeshes);


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMergeSkeletons); \
	DECLARE_FUNCTION(execMergeMeshes);


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_ACCESSORS
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMergingLibrary(); \
	friend struct Z_Construct_UClass_USkeletalMergingLibrary_Statics; \
public: \
	DECLARE_CLASS(USkeletalMergingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMerging"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMergingLibrary)


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMergingLibrary(); \
	friend struct Z_Construct_UClass_USkeletalMergingLibrary_Statics; \
public: \
	DECLARE_CLASS(USkeletalMergingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMerging"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMergingLibrary)


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMergingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMergingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMergingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMergingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMergingLibrary(USkeletalMergingLibrary&&); \
	NO_API USkeletalMergingLibrary(const USkeletalMergingLibrary&); \
public: \
	NO_API virtual ~USkeletalMergingLibrary();


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMergingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMergingLibrary(USkeletalMergingLibrary&&); \
	NO_API USkeletalMergingLibrary(const USkeletalMergingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMergingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMergingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMergingLibrary) \
	NO_API virtual ~USkeletalMergingLibrary();


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_101_PROLOG
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_ACCESSORS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_INCLASS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_ACCESSORS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETALMERGING_API UClass* StaticClass<class USkeletalMergingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
