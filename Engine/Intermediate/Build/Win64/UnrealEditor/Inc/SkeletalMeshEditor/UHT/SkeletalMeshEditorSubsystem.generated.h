// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMeshEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsAsset;
class USkeletalMesh;
struct FSkeletalMeshBuildSettings;
#ifdef SKELETALMESHEDITOR_SkeletalMeshEditorSubsystem_generated_h
#error "SkeletalMeshEditorSubsystem.generated.h already included, missing '#pragma once' in SkeletalMeshEditorSubsystem.h"
#endif
#define SKELETALMESHEDITOR_SkeletalMeshEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_SPARSE_DATA
#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePhysicsAsset); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execGetLODCount); \
	DECLARE_FUNCTION(execRenameSocket); \
	DECLARE_FUNCTION(execGetLODMaterialSlot); \
	DECLARE_FUNCTION(execSetSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execGetSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execSetSectionCastShadow); \
	DECLARE_FUNCTION(execGetSectionCastShadow); \
	DECLARE_FUNCTION(execSetSectionRecomputeTangentsVertexMaskChannel); \
	DECLARE_FUNCTION(execGetSectionRecomputeTangentsVertexMaskChannel); \
	DECLARE_FUNCTION(execSetSectionRecomputeTangent); \
	DECLARE_FUNCTION(execGetSectionRecomputeTangent); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetNumVerts); \
	DECLARE_FUNCTION(execRegenerateLOD);


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePhysicsAsset); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execGetLODCount); \
	DECLARE_FUNCTION(execRenameSocket); \
	DECLARE_FUNCTION(execGetLODMaterialSlot); \
	DECLARE_FUNCTION(execSetSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execGetSectionVisibleInRayTracing); \
	DECLARE_FUNCTION(execSetSectionCastShadow); \
	DECLARE_FUNCTION(execGetSectionCastShadow); \
	DECLARE_FUNCTION(execSetSectionRecomputeTangentsVertexMaskChannel); \
	DECLARE_FUNCTION(execGetSectionRecomputeTangentsVertexMaskChannel); \
	DECLARE_FUNCTION(execSetSectionRecomputeTangent); \
	DECLARE_FUNCTION(execGetSectionRecomputeTangent); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetNumVerts); \
	DECLARE_FUNCTION(execRegenerateLOD);


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_ACCESSORS
#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorSubsystem(); \
	friend struct Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshEditor"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshEditorSubsystem)


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorSubsystem(); \
	friend struct Z_Construct_UClass_USkeletalMeshEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshEditor"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshEditorSubsystem)


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshEditorSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshEditorSubsystem(USkeletalMeshEditorSubsystem&&); \
	NO_API USkeletalMeshEditorSubsystem(const USkeletalMeshEditorSubsystem&); \
public: \
	NO_API virtual ~USkeletalMeshEditorSubsystem();


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshEditorSubsystem(USkeletalMeshEditorSubsystem&&); \
	NO_API USkeletalMeshEditorSubsystem(const USkeletalMeshEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkeletalMeshEditorSubsystem) \
	NO_API virtual ~USkeletalMeshEditorSubsystem();


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_18_PROLOG
#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_SPARSE_DATA \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_ACCESSORS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_INCLASS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_SPARSE_DATA \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_ACCESSORS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETALMESHEDITOR_API UClass* StaticClass<class USkeletalMeshEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SkeletalMeshEditor_Public_SkeletalMeshEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
