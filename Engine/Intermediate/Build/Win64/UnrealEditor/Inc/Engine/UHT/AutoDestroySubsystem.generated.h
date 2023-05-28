// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AutoDestroySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_AutoDestroySubsystem_generated_h
#error "AutoDestroySubsystem.generated.h already included, missing '#pragma once' in AutoDestroySubsystem.h"
#endif
#define ENGINE_AutoDestroySubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorEndPlay);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorEndPlay);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoDestroySubsystem(); \
	friend struct Z_Construct_UClass_UAutoDestroySubsystem_Statics; \
public: \
	DECLARE_CLASS(UAutoDestroySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAutoDestroySubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAutoDestroySubsystem(); \
	friend struct Z_Construct_UClass_UAutoDestroySubsystem_Statics; \
public: \
	DECLARE_CLASS(UAutoDestroySubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAutoDestroySubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoDestroySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoDestroySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoDestroySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoDestroySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoDestroySubsystem(UAutoDestroySubsystem&&); \
	NO_API UAutoDestroySubsystem(const UAutoDestroySubsystem&); \
public: \
	NO_API virtual ~UAutoDestroySubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoDestroySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoDestroySubsystem(UAutoDestroySubsystem&&); \
	NO_API UAutoDestroySubsystem(const UAutoDestroySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoDestroySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoDestroySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutoDestroySubsystem) \
	NO_API virtual ~UAutoDestroySubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAutoDestroySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
