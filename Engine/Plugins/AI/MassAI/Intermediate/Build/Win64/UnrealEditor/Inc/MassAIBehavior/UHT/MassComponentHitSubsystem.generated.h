// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassComponentHitSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MASSAIBEHAVIOR_MassComponentHitSubsystem_generated_h
#error "MassComponentHitSubsystem.generated.h already included, missing '#pragma once' in MassComponentHitSubsystem.h"
#endif
#define MASSAIBEHAVIOR_MassComponentHitSubsystem_generated_h

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_SPARSE_DATA
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHitCallback);


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHitCallback);


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ACCESSORS
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassComponentHitSubsystem(); \
	friend struct Z_Construct_UClass_UMassComponentHitSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassComponentHitSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), NO_API) \
	DECLARE_SERIALIZER(UMassComponentHitSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMassComponentHitSubsystem(); \
	friend struct Z_Construct_UClass_UMassComponentHitSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassComponentHitSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassAIBehavior"), NO_API) \
	DECLARE_SERIALIZER(UMassComponentHitSubsystem)


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassComponentHitSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassComponentHitSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassComponentHitSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassComponentHitSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassComponentHitSubsystem(UMassComponentHitSubsystem&&); \
	NO_API UMassComponentHitSubsystem(const UMassComponentHitSubsystem&); \
public: \
	NO_API virtual ~UMassComponentHitSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassComponentHitSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassComponentHitSubsystem(UMassComponentHitSubsystem&&); \
	NO_API UMassComponentHitSubsystem(const UMassComponentHitSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassComponentHitSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassComponentHitSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassComponentHitSubsystem) \
	NO_API virtual ~UMassComponentHitSubsystem();


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_SPARSE_DATA \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ACCESSORS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_INCLASS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_SPARSE_DATA \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ACCESSORS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSAIBEHAVIOR_API UClass* StaticClass<class UMassComponentHitSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
