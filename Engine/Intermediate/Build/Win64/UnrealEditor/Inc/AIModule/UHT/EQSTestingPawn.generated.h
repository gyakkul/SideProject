// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EQSTestingPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EQSTestingPawn_generated_h
#error "EQSTestingPawn.generated.h already included, missing '#pragma once' in EQSTestingPawn.h"
#endif
#define AIMODULE_EQSTestingPawn_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEQSTestingPawn(); \
	friend struct Z_Construct_UClass_AEQSTestingPawn_Statics; \
public: \
	DECLARE_CLASS(AEQSTestingPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AEQSTestingPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AEQSTestingPawn*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAEQSTestingPawn(); \
	friend struct Z_Construct_UClass_AEQSTestingPawn_Statics; \
public: \
	DECLARE_CLASS(AEQSTestingPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AEQSTestingPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AEQSTestingPawn*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEQSTestingPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEQSTestingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEQSTestingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEQSTestingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEQSTestingPawn(AEQSTestingPawn&&); \
	NO_API AEQSTestingPawn(const AEQSTestingPawn&); \
public: \
	NO_API virtual ~AEQSTestingPawn();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEQSTestingPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEQSTestingPawn(AEQSTestingPawn&&); \
	NO_API AEQSTestingPawn(const AEQSTestingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEQSTestingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEQSTestingPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEQSTestingPawn) \
	NO_API virtual ~AEQSTestingPawn();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_24_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EQSTestingPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class AEQSTestingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h


#define FOREACH_ENUM_EENVQUERYHIGHTLIGHTMODE(op) \
	op(EEnvQueryHightlightMode::All) \
	op(EEnvQueryHightlightMode::Best5Pct) \
	op(EEnvQueryHightlightMode::Best25Pct) 

enum class EEnvQueryHightlightMode : uint8;
template<> struct TIsUEnumClass<EEnvQueryHightlightMode> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryHightlightMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
