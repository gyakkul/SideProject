// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveFunctionCollapseModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh; class UStaticMesh;
enum class EWaveFunctionCollapseAdjacency : uint8;
struct FWaveFunctionCollapseOption;
struct FWaveFunctionCollapseOptions;
#ifdef WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseModel_generated_h
#error "WaveFunctionCollapseModel.generated.h already included, missing '#pragma once' in WaveFunctionCollapseModel.h"
#endif
#define WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseModel_generated_h

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<struct FWaveFunctionCollapseOption>();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<struct FWaveFunctionCollapseOptions>();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<struct FWaveFunctionCollapseAdjacencyToOptionsMap>();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwapMeshes); \
	DECLARE_FUNCTION(execGetConstraintCount); \
	DECLARE_FUNCTION(execGetOptionContribution); \
	DECLARE_FUNCTION(execGetOptionWeight); \
	DECLARE_FUNCTION(execSetOptionContribution); \
	DECLARE_FUNCTION(execSetAllContributions); \
	DECLARE_FUNCTION(execSetAllWeights); \
	DECLARE_FUNCTION(execSetWeightsFromContributions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execAddConstraint);


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapMeshes); \
	DECLARE_FUNCTION(execGetConstraintCount); \
	DECLARE_FUNCTION(execGetOptionContribution); \
	DECLARE_FUNCTION(execGetOptionWeight); \
	DECLARE_FUNCTION(execSetOptionContribution); \
	DECLARE_FUNCTION(execSetAllContributions); \
	DECLARE_FUNCTION(execSetAllWeights); \
	DECLARE_FUNCTION(execSetWeightsFromContributions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execAddConstraint);


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ACCESSORS
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseModel(); \
	friend struct Z_Construct_UClass_UWaveFunctionCollapseModel_Statics; \
public: \
	DECLARE_CLASS(UWaveFunctionCollapseModel, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), NO_API) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseModel)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseModel(); \
	friend struct Z_Construct_UClass_UWaveFunctionCollapseModel_Statics; \
public: \
	DECLARE_CLASS(UWaveFunctionCollapseModel, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), NO_API) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseModel)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveFunctionCollapseModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaveFunctionCollapseModel(UWaveFunctionCollapseModel&&); \
	NO_API UWaveFunctionCollapseModel(const UWaveFunctionCollapseModel&); \
public: \
	NO_API virtual ~UWaveFunctionCollapseModel();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaveFunctionCollapseModel(UWaveFunctionCollapseModel&&); \
	NO_API UWaveFunctionCollapseModel(const UWaveFunctionCollapseModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveFunctionCollapseModel) \
	NO_API virtual ~UWaveFunctionCollapseModel();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_121_PROLOG
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ACCESSORS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_INCLASS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ACCESSORS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVEFUNCTIONCOLLAPSE_API UClass* StaticClass<class UWaveFunctionCollapseModel>();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<struct FWaveFunctionCollapseTile>();

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<struct FWaveFunctionCollapseQueueElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h


#define FOREACH_ENUM_EWAVEFUNCTIONCOLLAPSEADJACENCY(op) \
	op(EWaveFunctionCollapseAdjacency::Front) \
	op(EWaveFunctionCollapseAdjacency::Back) \
	op(EWaveFunctionCollapseAdjacency::Right) \
	op(EWaveFunctionCollapseAdjacency::Left) \
	op(EWaveFunctionCollapseAdjacency::Up) \
	op(EWaveFunctionCollapseAdjacency::Down) 

enum class EWaveFunctionCollapseAdjacency : uint8;
template<> struct TIsUEnumClass<EWaveFunctionCollapseAdjacency> { enum { Value = true }; };
template<> WAVEFUNCTIONCOLLAPSE_API UEnum* StaticEnum<EWaveFunctionCollapseAdjacency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
