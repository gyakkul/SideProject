// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingObjectsCreationAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateMeshObjectParams;
struct FCreateMeshObjectResult;
struct FCreateTextureObjectParams;
struct FCreateTextureObjectResult;
#ifdef MODELINGCOMPONENTS_ModelingObjectsCreationAPI_generated_h
#error "ModelingObjectsCreationAPI.generated.h already included, missing '#pragma once' in ModelingObjectsCreationAPI.h"
#endif
#define MODELINGCOMPONENTS_ModelingObjectsCreationAPI_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<struct FCreateMeshObjectParams>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<struct FCreateMeshObjectResult>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<struct FCreateTextureObjectParams>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_282_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<struct FCreateTextureObjectResult>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTextureObject); \
	DECLARE_FUNCTION(execCreateMeshObject);


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTextureObject); \
	DECLARE_FUNCTION(execCreateMeshObject);


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_ACCESSORS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingObjectsCreationAPI(); \
	friend struct Z_Construct_UClass_UModelingObjectsCreationAPI_Statics; \
public: \
	DECLARE_CLASS(UModelingObjectsCreationAPI, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UModelingObjectsCreationAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_INCLASS \
private: \
	static void StaticRegisterNativesUModelingObjectsCreationAPI(); \
	friend struct Z_Construct_UClass_UModelingObjectsCreationAPI_Statics; \
public: \
	DECLARE_CLASS(UModelingObjectsCreationAPI, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UModelingObjectsCreationAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingObjectsCreationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelingObjectsCreationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingObjectsCreationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModelingObjectsCreationAPI(UModelingObjectsCreationAPI&&); \
	NO_API UModelingObjectsCreationAPI(const UModelingObjectsCreationAPI&); \
public: \
	NO_API virtual ~UModelingObjectsCreationAPI();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModelingObjectsCreationAPI(UModelingObjectsCreationAPI&&); \
	NO_API UModelingObjectsCreationAPI(const UModelingObjectsCreationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelingObjectsCreationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingObjectsCreationAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingObjectsCreationAPI) \
	NO_API virtual ~UModelingObjectsCreationAPI();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_321_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_ACCESSORS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_INCLASS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_ACCESSORS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UModelingObjectsCreationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h


#define FOREACH_ENUM_ECREATEMODELINGOBJECTRESULT(op) \
	op(ECreateModelingObjectResult::Ok) \
	op(ECreateModelingObjectResult::Cancelled) \
	op(ECreateModelingObjectResult::Failed_Unknown) \
	op(ECreateModelingObjectResult::Failed_NoAPIFound) \
	op(ECreateModelingObjectResult::Failed_InvalidWorld) \
	op(ECreateModelingObjectResult::Failed_InvalidMesh) \
	op(ECreateModelingObjectResult::Failed_InvalidTexture) \
	op(ECreateModelingObjectResult::Failed_AssetCreationFailed) \
	op(ECreateModelingObjectResult::Failed_ActorCreationFailed) 

enum class ECreateModelingObjectResult : uint8;
template<> struct TIsUEnumClass<ECreateModelingObjectResult> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateModelingObjectResult>();

#define FOREACH_ENUM_ECREATEMESHOBJECTSOURCEMESHTYPE(op) \
	op(ECreateMeshObjectSourceMeshType::MeshDescription) \
	op(ECreateMeshObjectSourceMeshType::DynamicMesh) 

enum class ECreateMeshObjectSourceMeshType : uint8;
template<> struct TIsUEnumClass<ECreateMeshObjectSourceMeshType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateMeshObjectSourceMeshType>();

#define FOREACH_ENUM_ECREATEOBJECTTYPEHINT(op) \
	op(ECreateObjectTypeHint::Undefined) \
	op(ECreateObjectTypeHint::StaticMesh) \
	op(ECreateObjectTypeHint::Volume) \
	op(ECreateObjectTypeHint::DynamicMeshActor) 

enum class ECreateObjectTypeHint : uint8;
template<> struct TIsUEnumClass<ECreateObjectTypeHint> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateObjectTypeHint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
