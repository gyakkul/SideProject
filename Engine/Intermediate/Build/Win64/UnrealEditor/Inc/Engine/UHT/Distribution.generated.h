// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/Distribution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Distribution_generated_h
#error "Distribution.generated.h already included, missing '#pragma once' in Distribution.h"
#endif
#define ENGINE_Distribution_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistribution(); \
	friend struct Z_Construct_UClass_UDistribution_Statics; \
public: \
	DECLARE_CLASS(UDistribution, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDistribution)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUDistribution(); \
	friend struct Z_Construct_UClass_UDistribution_Statics; \
public: \
	DECLARE_CLASS(UDistribution, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDistribution)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistribution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistribution) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistribution); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistribution); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDistribution(UDistribution&&); \
	ENGINE_API UDistribution(const UDistribution&); \
public: \
	ENGINE_API virtual ~UDistribution();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistribution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDistribution(UDistribution&&); \
	ENGINE_API UDistribution(const UDistribution&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistribution); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistribution); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistribution) \
	ENGINE_API virtual ~UDistribution();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_64_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Distribution."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDistribution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_Distribution_h


#define FOREACH_ENUM_DISTRIBUTIONPARAMMODE(op) \
	op(DPM_Normal) \
	op(DPM_Abs) \
	op(DPM_Direct) 

enum DistributionParamMode : int;
template<> ENGINE_API UEnum* StaticEnum<DistributionParamMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
