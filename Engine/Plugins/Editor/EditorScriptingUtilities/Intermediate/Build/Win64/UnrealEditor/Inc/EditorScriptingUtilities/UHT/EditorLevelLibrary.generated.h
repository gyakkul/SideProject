// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorLevelLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AStaticMeshActor;
class UActorComponent;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UStaticMesh;
class UStaticMeshComponent;
class UWorld;
struct FCreateProxyMeshActorOptions;
struct FJoinStaticMeshActorsOptions;
struct FMergeStaticMeshActorsOptions;
#ifdef EDITORSCRIPTINGUTILITIES_EditorLevelLibrary_generated_h
#error "EditorLevelLibrary.generated.h already included, missing '#pragma once' in EditorLevelLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorLevelLibrary_generated_h

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingJoinStaticMeshActorsOptions_Deprecated>();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorScriptingJoinStaticMeshActorsOptions_Deprecated Super;


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingMergeStaticMeshActorsOptions_Deprecated>();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FEditorScriptingJoinStaticMeshActorsOptions_Deprecated Super;


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorScriptingCreateProxyMeshActorOptions_Deprecated>();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_SPARSE_DATA
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyMeshActor); \
	DECLARE_FUNCTION(execMergeStaticMeshActors); \
	DECLARE_FUNCTION(execJoinStaticMeshActors); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials); \
	DECLARE_FUNCTION(execSetCurrentLevelByName); \
	DECLARE_FUNCTION(execSaveAllDirtyLevels); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execNewLevelFromTemplate); \
	DECLARE_FUNCTION(execNewLevel); \
	DECLARE_FUNCTION(execGetPIEWorlds); \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execEjectPilotLevelActor); \
	DECLARE_FUNCTION(execPilotLevelActor); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyMeshActor); \
	DECLARE_FUNCTION(execMergeStaticMeshActors); \
	DECLARE_FUNCTION(execJoinStaticMeshActors); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshesOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMeshes); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterialsOnActors); \
	DECLARE_FUNCTION(execReplaceMeshComponentsMaterials); \
	DECLARE_FUNCTION(execSetCurrentLevelByName); \
	DECLARE_FUNCTION(execSaveAllDirtyLevels); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execNewLevelFromTemplate); \
	DECLARE_FUNCTION(execNewLevel); \
	DECLARE_FUNCTION(execGetPIEWorlds); \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execEjectPilotLevelActor); \
	DECLARE_FUNCTION(execPilotLevelActor); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors);


#if WITH_EDITOR
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplaceSelectedActors); \
	DECLARE_FUNCTION(execEditorInvalidateViewports); \
	DECLARE_FUNCTION(execEditorEndPlay); \
	DECLARE_FUNCTION(execEditorPlaySimulate);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplaceSelectedActors); \
	DECLARE_FUNCTION(execEditorInvalidateViewports); \
	DECLARE_FUNCTION(execEditorEndPlay); \
	DECLARE_FUNCTION(execEditorPlaySimulate);


#else
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_ACCESSORS
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLevelLibrary(); \
	friend struct Z_Construct_UClass_UEditorLevelLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLevelLibrary(); \
	friend struct Z_Construct_UClass_UEditorLevelLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorLevelLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorLevelLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelLibrary(UEditorLevelLibrary&&); \
	NO_API UEditorLevelLibrary(const UEditorLevelLibrary&); \
public: \
	NO_API virtual ~UEditorLevelLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLevelLibrary(UEditorLevelLibrary&&); \
	NO_API UEditorLevelLibrary(const UEditorLevelLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelLibrary) \
	NO_API virtual ~UEditorLevelLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_83_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_INCLASS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorLevelLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
