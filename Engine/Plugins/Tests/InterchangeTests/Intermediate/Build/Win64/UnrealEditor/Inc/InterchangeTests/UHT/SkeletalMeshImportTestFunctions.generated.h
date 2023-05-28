// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/SkeletalMeshImportTestFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
struct FInterchangeTestFunctionResult;
#ifdef INTERCHANGETESTS_SkeletalMeshImportTestFunctions_generated_h
#error "SkeletalMeshImportTestFunctions.generated.h already included, missing '#pragma once' in SkeletalMeshImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_SkeletalMeshImportTestFunctions_generated_h

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckSkinnedVertexCountForBone); \
	DECLARE_FUNCTION(execCheckBonePosition); \
	DECLARE_FUNCTION(execCheckBoneCount); \
	DECLARE_FUNCTION(execCheckVertexIndexNormal); \
	DECLARE_FUNCTION(execCheckVertexIndexPosition); \
	DECLARE_FUNCTION(execCheckSectionImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckSectionMaterialName); \
	DECLARE_FUNCTION(execCheckUVChannelCount); \
	DECLARE_FUNCTION(execCheckTriangleCountInSection); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckMaterialSlotCount); \
	DECLARE_FUNCTION(execCheckLodCount); \
	DECLARE_FUNCTION(execCheckRenderTriangleCount); \
	DECLARE_FUNCTION(execCheckRenderVertexCount); \
	DECLARE_FUNCTION(execCheckImportedSkeletalMeshCount);


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckSkinnedVertexCountForBone); \
	DECLARE_FUNCTION(execCheckBonePosition); \
	DECLARE_FUNCTION(execCheckBoneCount); \
	DECLARE_FUNCTION(execCheckVertexIndexNormal); \
	DECLARE_FUNCTION(execCheckVertexIndexPosition); \
	DECLARE_FUNCTION(execCheckSectionImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckSectionMaterialName); \
	DECLARE_FUNCTION(execCheckUVChannelCount); \
	DECLARE_FUNCTION(execCheckTriangleCountInSection); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckMaterialSlotCount); \
	DECLARE_FUNCTION(execCheckLodCount); \
	DECLARE_FUNCTION(execCheckRenderTriangleCount); \
	DECLARE_FUNCTION(execCheckRenderVertexCount); \
	DECLARE_FUNCTION(execCheckImportedSkeletalMeshCount);


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_ACCESSORS
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshImportTestFunctions(); \
	friend struct Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshImportTestFunctions(); \
	friend struct Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshImportTestFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshImportTestFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshImportTestFunctions(USkeletalMeshImportTestFunctions&&); \
	NO_API USkeletalMeshImportTestFunctions(const USkeletalMeshImportTestFunctions&); \
public: \
	NO_API virtual ~USkeletalMeshImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshImportTestFunctions(USkeletalMeshImportTestFunctions&&); \
	NO_API USkeletalMeshImportTestFunctions(const USkeletalMeshImportTestFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshImportTestFunctions) \
	NO_API virtual ~USkeletalMeshImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_12_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_ACCESSORS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_INCLASS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_ACCESSORS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGETESTS_API UClass* StaticClass<class USkeletalMeshImportTestFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
