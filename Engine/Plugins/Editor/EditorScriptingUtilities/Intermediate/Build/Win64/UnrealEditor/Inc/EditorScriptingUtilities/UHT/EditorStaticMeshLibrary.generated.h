// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorStaticMeshLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UStaticMeshComponent;
enum class EScriptCollisionShapeType : uint8;
struct FMeshBuildSettings;
struct FMeshReductionSettings;
struct FStaticMeshReductionOptions;
#ifdef EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h
#error "EditorStaticMeshLibrary.generated.h already included, missing '#pragma once' in EditorStaticMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMeshReductionSettings_Deprecated>();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMeshReductionOptions_Deprecated>();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_SPARSE_DATA
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSimpleCollisions); \
	DECLARE_FUNCTION(execAddSimpleCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetLods); \
	DECLARE_FUNCTION(execSetLodsWithNotification); \
	DECLARE_FUNCTION(execGenerateBoxUVChannel); \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel); \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel); \
	DECLARE_FUNCTION(execRemoveUVChannel); \
	DECLARE_FUNCTION(execInsertUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetNumUVChannels); \
	DECLARE_FUNCTION(execSetAllowCPUAccess); \
	DECLARE_FUNCTION(execGetNumberMaterials); \
	DECLARE_FUNCTION(execGetNumberVerts); \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execHasInstanceVertexColors); \
	DECLARE_FUNCTION(execHasVertexColors); \
	DECLARE_FUNCTION(execEnableSectionCastShadow); \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled); \
	DECLARE_FUNCTION(execEnableSectionCollision); \
	DECLARE_FUNCTION(execRemoveCollisions); \
	DECLARE_FUNCTION(execRemoveCollisionsWithNotification); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetConvexCollisionCount); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execGetSimpleCollisionCount); \
	DECLARE_FUNCTION(execGetLodScreenSizes); \
	DECLARE_FUNCTION(execRemoveLods); \
	DECLARE_FUNCTION(execGetLodCount); \
	DECLARE_FUNCTION(execSetLodFromStaticMesh); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execSetLodReductionSettings); \
	DECLARE_FUNCTION(execGetLodReductionSettings);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSimpleCollisions); \
	DECLARE_FUNCTION(execAddSimpleCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetLods); \
	DECLARE_FUNCTION(execSetLodsWithNotification); \
	DECLARE_FUNCTION(execGenerateBoxUVChannel); \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel); \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel); \
	DECLARE_FUNCTION(execRemoveUVChannel); \
	DECLARE_FUNCTION(execInsertUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetNumUVChannels); \
	DECLARE_FUNCTION(execSetAllowCPUAccess); \
	DECLARE_FUNCTION(execGetNumberMaterials); \
	DECLARE_FUNCTION(execGetNumberVerts); \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execHasInstanceVertexColors); \
	DECLARE_FUNCTION(execHasVertexColors); \
	DECLARE_FUNCTION(execEnableSectionCastShadow); \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled); \
	DECLARE_FUNCTION(execEnableSectionCollision); \
	DECLARE_FUNCTION(execRemoveCollisions); \
	DECLARE_FUNCTION(execRemoveCollisionsWithNotification); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetConvexCollisionCount); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execGetSimpleCollisionCount); \
	DECLARE_FUNCTION(execGetLodScreenSizes); \
	DECLARE_FUNCTION(execRemoveLods); \
	DECLARE_FUNCTION(execGetLodCount); \
	DECLARE_FUNCTION(execSetLodFromStaticMesh); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execSetLodReductionSettings); \
	DECLARE_FUNCTION(execGetLodReductionSettings);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_ACCESSORS
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EditorStaticMeshLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_EditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_EditorStaticMeshLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EditorStaticMeshLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_EditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_EditorStaticMeshLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_EditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_EditorStaticMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_EditorStaticMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EditorStaticMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_EditorStaticMeshLibrary(UDEPRECATED_EditorStaticMeshLibrary&&); \
	NO_API UDEPRECATED_EditorStaticMeshLibrary(const UDEPRECATED_EditorStaticMeshLibrary&); \
public: \
	NO_API virtual ~UDEPRECATED_EditorStaticMeshLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_EditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_EditorStaticMeshLibrary(UDEPRECATED_EditorStaticMeshLibrary&&); \
	NO_API UDEPRECATED_EditorStaticMeshLibrary(const UDEPRECATED_EditorStaticMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_EditorStaticMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EditorStaticMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_EditorStaticMeshLibrary) \
	NO_API virtual ~UDEPRECATED_EditorStaticMeshLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_72_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_INCLASS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UDEPRECATED_EditorStaticMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h


#define FOREACH_ENUM_ESCRIPTINGCOLLISIONSHAPETYPE_DEPRECATED(op) \
	op(EScriptingCollisionShapeType_Deprecated::Box) \
	op(EScriptingCollisionShapeType_Deprecated::Sphere) \
	op(EScriptingCollisionShapeType_Deprecated::Capsule) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP10_X) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP10_Y) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP10_Z) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP18) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP26) 

enum class EScriptingCollisionShapeType_Deprecated : uint8;
template<> struct TIsUEnumClass<EScriptingCollisionShapeType_Deprecated> { enum { Value = true }; };
template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EScriptingCollisionShapeType_Deprecated>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
