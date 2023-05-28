// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef ENGINE_SceneCaptureComponent_generated_h
#error "SceneCaptureComponent.generated.h already included, missing '#pragma once' in SceneCaptureComponent.h"
#endif
#define ENGINE_SceneCaptureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEngineShowFlagsSetting>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCaptureSortPriority); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCaptureSortPriority); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent(USceneCaptureComponent&&); \
	NO_API USceneCaptureComponent(const USceneCaptureComponent&); \
public: \
	NO_API virtual ~USceneCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent(USceneCaptureComponent&&); \
	NO_API USceneCaptureComponent(const USceneCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent) \
	NO_API virtual ~USceneCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_67_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h


#define FOREACH_ENUM_ESCENECAPTUREPRIMITIVERENDERMODE(op) \
	op(ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture) \
	op(ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives) \
	op(ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList) 

enum class ESceneCapturePrimitiveRenderMode : uint8;
template<> struct TIsUEnumClass<ESceneCapturePrimitiveRenderMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESceneCapturePrimitiveRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
