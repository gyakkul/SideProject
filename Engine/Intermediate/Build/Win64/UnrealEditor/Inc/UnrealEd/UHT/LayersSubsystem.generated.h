// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/LayersSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULayer;
class ULevel;
class UWorld;
#ifdef UNREALED_LayersSubsystem_generated_h
#error "LayersSubsystem.generated.h already included, missing '#pragma once' in LayersSubsystem.h"
#endif
#define UNREALED_LayersSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorRefreshLayerBrowser); \
	DECLARE_FUNCTION(execEditorMapChange); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execRenameLayer); \
	DECLARE_FUNCTION(execDeleteLayer); \
	DECLARE_FUNCTION(execDeleteLayers); \
	DECLARE_FUNCTION(execCreateLayer); \
	DECLARE_FUNCTION(execAddAllLayersTo); \
	DECLARE_FUNCTION(execAddAllLayerNamesTo); \
	DECLARE_FUNCTION(execTryGetLayer); \
	DECLARE_FUNCTION(execIsLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execMakeAllLayersVisible); \
	DECLARE_FUNCTION(execToggleLayersVisibility); \
	DECLARE_FUNCTION(execToggleLayerVisibility); \
	DECLARE_FUNCTION(execSetLayersVisibility); \
	DECLARE_FUNCTION(execSetLayerVisibility); \
	DECLARE_FUNCTION(execGetActorsFromLayers); \
	DECLARE_FUNCTION(execGetActorsFromLayer); \
	DECLARE_FUNCTION(execAppendActorsFromLayers); \
	DECLARE_FUNCTION(execAppendActorsFromLayer); \
	DECLARE_FUNCTION(execUpdateAllActorsVisibility); \
	DECLARE_FUNCTION(execUpdateActorVisibility); \
	DECLARE_FUNCTION(execUpdateActorAllViewsVisibility); \
	DECLARE_FUNCTION(execUpdateAllViewVisibility); \
	DECLARE_FUNCTION(execSelectActorsInLayers); \
	DECLARE_FUNCTION(execSelectActorsInLayer); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromLayers); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromLayer); \
	DECLARE_FUNCTION(execAddSelectedActorsToLayers); \
	DECLARE_FUNCTION(execAddSelectedActorsToLayer); \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execRemoveActorsFromLayers); \
	DECLARE_FUNCTION(execRemoveActorsFromLayer); \
	DECLARE_FUNCTION(execDisassociateActorsFromLayers); \
	DECLARE_FUNCTION(execAddActorsToLayers); \
	DECLARE_FUNCTION(execAddActorsToLayer); \
	DECLARE_FUNCTION(execRemoveActorFromLayers); \
	DECLARE_FUNCTION(execRemoveActorFromLayer); \
	DECLARE_FUNCTION(execAddActorToLayers); \
	DECLARE_FUNCTION(execAddActorToLayer); \
	DECLARE_FUNCTION(execDisassociateActorFromLayers); \
	DECLARE_FUNCTION(execInitializeNewActorLayers); \
	DECLARE_FUNCTION(execIsActorValidForLayer); \
	DECLARE_FUNCTION(execRemoveLevelLayerInformation); \
	DECLARE_FUNCTION(execAddLevelLayerInformation);


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorRefreshLayerBrowser); \
	DECLARE_FUNCTION(execEditorMapChange); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execRenameLayer); \
	DECLARE_FUNCTION(execDeleteLayer); \
	DECLARE_FUNCTION(execDeleteLayers); \
	DECLARE_FUNCTION(execCreateLayer); \
	DECLARE_FUNCTION(execAddAllLayersTo); \
	DECLARE_FUNCTION(execAddAllLayerNamesTo); \
	DECLARE_FUNCTION(execTryGetLayer); \
	DECLARE_FUNCTION(execIsLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execMakeAllLayersVisible); \
	DECLARE_FUNCTION(execToggleLayersVisibility); \
	DECLARE_FUNCTION(execToggleLayerVisibility); \
	DECLARE_FUNCTION(execSetLayersVisibility); \
	DECLARE_FUNCTION(execSetLayerVisibility); \
	DECLARE_FUNCTION(execGetActorsFromLayers); \
	DECLARE_FUNCTION(execGetActorsFromLayer); \
	DECLARE_FUNCTION(execAppendActorsFromLayers); \
	DECLARE_FUNCTION(execAppendActorsFromLayer); \
	DECLARE_FUNCTION(execUpdateAllActorsVisibility); \
	DECLARE_FUNCTION(execUpdateActorVisibility); \
	DECLARE_FUNCTION(execUpdateActorAllViewsVisibility); \
	DECLARE_FUNCTION(execUpdateAllViewVisibility); \
	DECLARE_FUNCTION(execSelectActorsInLayers); \
	DECLARE_FUNCTION(execSelectActorsInLayer); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromLayers); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromLayer); \
	DECLARE_FUNCTION(execAddSelectedActorsToLayers); \
	DECLARE_FUNCTION(execAddSelectedActorsToLayer); \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execRemoveActorsFromLayers); \
	DECLARE_FUNCTION(execRemoveActorsFromLayer); \
	DECLARE_FUNCTION(execDisassociateActorsFromLayers); \
	DECLARE_FUNCTION(execAddActorsToLayers); \
	DECLARE_FUNCTION(execAddActorsToLayer); \
	DECLARE_FUNCTION(execRemoveActorFromLayers); \
	DECLARE_FUNCTION(execRemoveActorFromLayer); \
	DECLARE_FUNCTION(execAddActorToLayers); \
	DECLARE_FUNCTION(execAddActorToLayer); \
	DECLARE_FUNCTION(execDisassociateActorFromLayers); \
	DECLARE_FUNCTION(execInitializeNewActorLayers); \
	DECLARE_FUNCTION(execIsActorValidForLayer); \
	DECLARE_FUNCTION(execRemoveLevelLayerInformation); \
	DECLARE_FUNCTION(execAddLevelLayerInformation);


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayersSubsystem(); \
	friend struct Z_Construct_UClass_ULayersSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULayersSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULayersSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_INCLASS \
private: \
	static void StaticRegisterNativesULayersSubsystem(); \
	friend struct Z_Construct_UClass_ULayersSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULayersSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULayersSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayersSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayersSubsystem(ULayersSubsystem&&); \
	NO_API ULayersSubsystem(const ULayersSubsystem&); \
public:


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayersSubsystem(ULayersSubsystem&&); \
	NO_API ULayersSubsystem(const ULayersSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULayersSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULayersSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
