// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSkeletalMeshLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsAsset;
class USkeletalMesh;
class UTexture2D;
struct FSkeletalMeshBuildSettings;
#ifdef EDITORSCRIPTINGUTILITIES_EditorSkeletalMeshLibrary_generated_h
#error "EditorSkeletalMeshLibrary.generated.h already included, missing '#pragma once' in EditorSkeletalMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorSkeletalMeshLibrary_generated_h

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePhysicsAsset); \
	DECLARE_FUNCTION(execStripLODGeometry); \
	DECLARE_FUNCTION(execRemoveLODs); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execGetLODCount); \
	DECLARE_FUNCTION(execRenameSocket); \
	DECLARE_FUNCTION(execGetNumVerts); \
	DECLARE_FUNCTION(execRegenerateLOD);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePhysicsAsset); \
	DECLARE_FUNCTION(execStripLODGeometry); \
	DECLARE_FUNCTION(execRemoveLODs); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execGetLODCount); \
	DECLARE_FUNCTION(execRenameSocket); \
	DECLARE_FUNCTION(execGetNumVerts); \
	DECLARE_FUNCTION(execRegenerateLOD);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_ACCESSORS
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EditorSkeletalMeshLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_EditorSkeletalMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_EditorSkeletalMeshLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EditorSkeletalMeshLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_EditorSkeletalMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_EditorSkeletalMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_EditorSkeletalMeshLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_EditorSkeletalMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_EditorSkeletalMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_EditorSkeletalMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EditorSkeletalMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_EditorSkeletalMeshLibrary(UDEPRECATED_EditorSkeletalMeshLibrary&&); \
	NO_API UDEPRECATED_EditorSkeletalMeshLibrary(const UDEPRECATED_EditorSkeletalMeshLibrary&); \
public: \
	NO_API virtual ~UDEPRECATED_EditorSkeletalMeshLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_EditorSkeletalMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_EditorSkeletalMeshLibrary(UDEPRECATED_EditorSkeletalMeshLibrary&&); \
	NO_API UDEPRECATED_EditorSkeletalMeshLibrary(const UDEPRECATED_EditorSkeletalMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_EditorSkeletalMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EditorSkeletalMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_EditorSkeletalMeshLibrary) \
	NO_API virtual ~UDEPRECATED_EditorSkeletalMeshLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_19_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_INCLASS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UDEPRECATED_EditorSkeletalMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorSkeletalMeshLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
