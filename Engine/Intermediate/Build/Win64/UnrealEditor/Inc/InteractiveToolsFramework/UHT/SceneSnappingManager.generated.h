// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneQueries/SceneSnappingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_SceneSnappingManager_generated_h
#error "SceneSnappingManager.generated.h already included, missing '#pragma once' in SceneSnappingManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SceneSnappingManager_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneSnappingManager(); \
	friend struct Z_Construct_UClass_USceneSnappingManager_Statics; \
public: \
	DECLARE_CLASS(USceneSnappingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(USceneSnappingManager)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_INCLASS \
private: \
	static void StaticRegisterNativesUSceneSnappingManager(); \
	friend struct Z_Construct_UClass_USceneSnappingManager_Statics; \
public: \
	DECLARE_CLASS(USceneSnappingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(USceneSnappingManager)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneSnappingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneSnappingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneSnappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneSnappingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneSnappingManager(USceneSnappingManager&&); \
	NO_API USceneSnappingManager(const USceneSnappingManager&); \
public: \
	NO_API virtual ~USceneSnappingManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneSnappingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneSnappingManager(USceneSnappingManager&&); \
	NO_API USceneSnappingManager(const USceneSnappingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneSnappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneSnappingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneSnappingManager) \
	NO_API virtual ~USceneSnappingManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_176_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_INCLASS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class USceneSnappingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h


#define FOREACH_ENUM_ESCENESNAPQUERYTYPE(op) \
	op(ESceneSnapQueryType::Position) \
	op(ESceneSnapQueryType::Rotation) 

enum class ESceneSnapQueryType : uint8;
template<> struct TIsUEnumClass<ESceneSnapQueryType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryType>();

#define FOREACH_ENUM_ESCENESNAPQUERYTARGETTYPE(op) \
	op(ESceneSnapQueryTargetType::None) \
	op(ESceneSnapQueryTargetType::MeshVertex) \
	op(ESceneSnapQueryTargetType::MeshEdge) \
	op(ESceneSnapQueryTargetType::Grid) \
	op(ESceneSnapQueryTargetType::All) 

enum class ESceneSnapQueryTargetType : uint8;
template<> struct TIsUEnumClass<ESceneSnapQueryTargetType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
