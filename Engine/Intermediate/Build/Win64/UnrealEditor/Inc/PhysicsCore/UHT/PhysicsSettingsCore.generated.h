// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsSettingsCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_PhysicsSettingsCore_generated_h
#error "PhysicsSettingsCore.generated.h already included, missing '#pragma once' in PhysicsSettingsCore.h"
#endif
#define PHYSICSCORE_PhysicsSettingsCore_generated_h

#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsSettingsCore(); \
	friend struct Z_Construct_UClass_UPhysicsSettingsCore_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettingsCore, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsCore"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSettingsCore) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSettingsCore(); \
	friend struct Z_Construct_UClass_UPhysicsSettingsCore_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettingsCore, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsCore"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSettingsCore) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSettingsCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettingsCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSettingsCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettingsCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSettingsCore(UPhysicsSettingsCore&&); \
	NO_API UPhysicsSettingsCore(const UPhysicsSettingsCore&); \
public: \
	NO_API virtual ~UPhysicsSettingsCore();


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSettingsCore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSettingsCore(UPhysicsSettingsCore&&); \
	NO_API UPhysicsSettingsCore(const UPhysicsSettingsCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSettingsCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettingsCore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettingsCore) \
	NO_API virtual ~UPhysicsSettingsCore();


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_18_PROLOG
#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsSettingsCore."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCORE_API UClass* StaticClass<class UPhysicsSettingsCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
