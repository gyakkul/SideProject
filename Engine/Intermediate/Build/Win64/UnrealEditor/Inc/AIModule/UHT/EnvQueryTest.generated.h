// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryTest_generated_h
#error "EnvQueryTest.generated.h already included, missing '#pragma once' in EnvQueryTest.h"
#endif
#define AIMODULE_EnvQueryTest_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryTest)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest(UEnvQueryTest&&); \
	NO_API UEnvQueryTest(const UEnvQueryTest&); \
public: \
	NO_API virtual ~UEnvQueryTest();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryTest(UEnvQueryTest&&); \
	NO_API UEnvQueryTest(const UEnvQueryTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest) \
	NO_API virtual ~UEnvQueryTest();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_60_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryTest."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h


#define FOREACH_ENUM_EEQSNORMALIZATIONTYPE(op) \
	op(EEQSNormalizationType::Absolute) \
	op(EEQSNormalizationType::RelativeToScores) 

enum class EEQSNormalizationType : uint8;
template<> struct TIsUEnumClass<EEQSNormalizationType> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<EEQSNormalizationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
