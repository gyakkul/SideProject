// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AVPViewportTickableActorBase;
class UObject;
class USplineMeshComponent;
class UVPBookmark;
class UWorld;
struct FGameplayTagContainer;
struct FVPBookmarkCreationContext;
#ifdef VPUTILITIES_VPBlueprintLibrary_generated_h
#error "VPBlueprintLibrary.generated.h already included, missing '#pragma once' in VPBlueprintLibrary.h"
#endif
#define VPUTILITIES_VPBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVPBookmarkSplineMeshIndicatorDisable); \
	DECLARE_FUNCTION(execVPBookmarkSplineMeshIndicatorSetStartAndEnd); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execEditorDeleteSelectedObjects); \
	DECLARE_FUNCTION(execEditorDuplicate); \
	DECLARE_FUNCTION(execEditorRedo); \
	DECLARE_FUNCTION(execEditorUndo); \
	DECLARE_FUNCTION(execGetVREditorLaserHoverLocation); \
	DECLARE_FUNCTION(execIsVREditorModeActive); \
	DECLARE_FUNCTION(execSetGrabSpeed); \
	DECLARE_FUNCTION(execGetEditorVRRoomTransform); \
	DECLARE_FUNCTION(execGetEditorVRHeadTransform); \
	DECLARE_FUNCTION(execGetEditorViewportTransform); \
	DECLARE_FUNCTION(execGetVirtualProductionRole); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditor); \
	DECLARE_FUNCTION(execSpawnBookmarkAtCurrentLevelEditorPosition); \
	DECLARE_FUNCTION(execSpawnVPTickableActor); \
	DECLARE_FUNCTION(execRefresh3DEditorViewport);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVPBookmarkSplineMeshIndicatorDisable); \
	DECLARE_FUNCTION(execVPBookmarkSplineMeshIndicatorSetStartAndEnd); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execEditorDeleteSelectedObjects); \
	DECLARE_FUNCTION(execEditorDuplicate); \
	DECLARE_FUNCTION(execEditorRedo); \
	DECLARE_FUNCTION(execEditorUndo); \
	DECLARE_FUNCTION(execGetVREditorLaserHoverLocation); \
	DECLARE_FUNCTION(execIsVREditorModeActive); \
	DECLARE_FUNCTION(execSetGrabSpeed); \
	DECLARE_FUNCTION(execGetEditorVRRoomTransform); \
	DECLARE_FUNCTION(execGetEditorVRHeadTransform); \
	DECLARE_FUNCTION(execGetEditorViewportTransform); \
	DECLARE_FUNCTION(execGetVirtualProductionRole); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditor); \
	DECLARE_FUNCTION(execSpawnBookmarkAtCurrentLevelEditorPosition); \
	DECLARE_FUNCTION(execSpawnVPTickableActor); \
	DECLARE_FUNCTION(execRefresh3DEditorViewport);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(UVPBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVPBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(UVPBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBlueprintLibrary(UVPBlueprintLibrary&&); \
	NO_API UVPBlueprintLibrary(const UVPBlueprintLibrary&); \
public: \
	NO_API virtual ~UVPBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBlueprintLibrary(UVPBlueprintLibrary&&); \
	NO_API UVPBlueprintLibrary(const UVPBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBlueprintLibrary) \
	NO_API virtual ~UVPBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class UVPBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
