// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/LocalPlayerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayerSubsystem_generated_h
#error "LocalPlayerSubsystem.generated.h already included, missing '#pragma once' in LocalPlayerSubsystem.h"
#endif
#define ENGINE_LocalPlayerSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayerSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayerSubsystem) \
	DECLARE_WITHIN(ULocalPlayer)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayerSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayerSubsystem) \
	DECLARE_WITHIN(ULocalPlayer)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayerSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalPlayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayerSubsystem(ULocalPlayerSubsystem&&); \
	NO_API ULocalPlayerSubsystem(const ULocalPlayerSubsystem&); \
public: \
	NO_API virtual ~ULocalPlayerSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayerSubsystem(ULocalPlayerSubsystem&&); \
	NO_API ULocalPlayerSubsystem(const ULocalPlayerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalPlayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayerSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULocalPlayerSubsystem) \
	NO_API virtual ~ULocalPlayerSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalPlayerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
