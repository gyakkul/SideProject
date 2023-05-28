// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborTrainingModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNearestNeighborModel;
#ifdef NEARESTNEIGHBORMODELEDITOR_NearestNeighborTrainingModel_generated_h
#error "NearestNeighborTrainingModel.generated.h already included, missing '#pragma once' in NearestNeighborTrainingModel.h"
#endif
#define NEARESTNEIGHBORMODELEDITOR_NearestNeighborTrainingModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeshIndexBuffer); \
	DECLARE_FUNCTION(execGetUnskinnedVertexPositions); \
	DECLARE_FUNCTION(execGetKmeansNumClusters); \
	DECLARE_FUNCTION(execGetKmeansAnimNumFrames); \
	DECLARE_FUNCTION(execGetKmeansNumAnims); \
	DECLARE_FUNCTION(execSampleKmeansFrame); \
	DECLARE_FUNCTION(execSampleKmeansAnim); \
	DECLARE_FUNCTION(execGetPartNumNeighbors); \
	DECLARE_FUNCTION(execSetSamplerPartData); \
	DECLARE_FUNCTION(execSamplePart); \
	DECLARE_FUNCTION(execGetPartVertexMap); \
	DECLARE_FUNCTION(execGetNearestNeighborModel);


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeshIndexBuffer); \
	DECLARE_FUNCTION(execGetUnskinnedVertexPositions); \
	DECLARE_FUNCTION(execGetKmeansNumClusters); \
	DECLARE_FUNCTION(execGetKmeansAnimNumFrames); \
	DECLARE_FUNCTION(execGetKmeansNumAnims); \
	DECLARE_FUNCTION(execSampleKmeansFrame); \
	DECLARE_FUNCTION(execSampleKmeansAnim); \
	DECLARE_FUNCTION(execGetPartNumNeighbors); \
	DECLARE_FUNCTION(execSetSamplerPartData); \
	DECLARE_FUNCTION(execSamplePart); \
	DECLARE_FUNCTION(execGetPartVertexMap); \
	DECLARE_FUNCTION(execGetNearestNeighborModel);


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_ACCESSORS
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborTrainingModel(); \
	friend struct Z_Construct_UClass_UNearestNeighborTrainingModel_Statics; \
public: \
	DECLARE_CLASS(UNearestNeighborTrainingModel, UMLDeformerTrainingModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModelEditor"), NO_API) \
	DECLARE_SERIALIZER(UNearestNeighborTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNearestNeighborTrainingModel(); \
	friend struct Z_Construct_UClass_UNearestNeighborTrainingModel_Statics; \
public: \
	DECLARE_CLASS(UNearestNeighborTrainingModel, UMLDeformerTrainingModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModelEditor"), NO_API) \
	DECLARE_SERIALIZER(UNearestNeighborTrainingModel)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborTrainingModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborTrainingModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNearestNeighborTrainingModel(UNearestNeighborTrainingModel&&); \
	NO_API UNearestNeighborTrainingModel(const UNearestNeighborTrainingModel&); \
public: \
	NO_API virtual ~UNearestNeighborTrainingModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborTrainingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNearestNeighborTrainingModel(UNearestNeighborTrainingModel&&); \
	NO_API UNearestNeighborTrainingModel(const UNearestNeighborTrainingModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborTrainingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborTrainingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborTrainingModel) \
	NO_API virtual ~UNearestNeighborTrainingModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_16_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_INCLASS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEARESTNEIGHBORMODELEDITOR_API UClass* StaticClass<class UNearestNeighborTrainingModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModelEditor_Public_NearestNeighborTrainingModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
