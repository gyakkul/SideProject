// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryTest_Distance_generated_h
#error "EnvQueryTest_Distance.generated.h already included, missing '#pragma once' in EnvQueryTest_Distance.h"
#endif
#define AIMODULE_EnvQueryTest_Distance_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Distance(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Distance_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Distance, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Distance)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Distance(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Distance_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Distance, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Distance)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest_Distance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Distance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Distance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Distance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest_Distance(UEnvQueryTest_Distance&&); \
	NO_API UEnvQueryTest_Distance(const UEnvQueryTest_Distance&); \
public: \
	NO_API virtual ~UEnvQueryTest_Distance();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest_Distance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest_Distance(UEnvQueryTest_Distance&&); \
	NO_API UEnvQueryTest_Distance(const UEnvQueryTest_Distance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest_Distance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Distance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Distance) \
	NO_API virtual ~UEnvQueryTest_Distance();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_24_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryTest_Distance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryTest_Distance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Distance_h


#define FOREACH_ENUM_EENVTESTDISTANCE(op) \
	op(EEnvTestDistance::Distance3D) \
	op(EEnvTestDistance::Distance2D) \
	op(EEnvTestDistance::DistanceZ) \
	op(EEnvTestDistance::DistanceAbsoluteZ) 

namespace EEnvTestDistance { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDistance::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
