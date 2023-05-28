// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CollisionProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CollisionProfile_generated_h
#error "CollisionProfile.generated.h already included, missing '#pragma once' in CollisionProfile.h"
#endif
#define ENGINE_CollisionProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionProfileName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollisionProfileName>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollisionResponseTemplate>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomChannelSetup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomChannelSetup>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomProfile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomProfile>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollisionProfile(); \
	friend struct Z_Construct_UClass_UCollisionProfile_Statics; \
public: \
	DECLARE_CLASS(UCollisionProfile, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCollisionProfile) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUCollisionProfile(); \
	friend struct Z_Construct_UClass_UCollisionProfile_Statics; \
public: \
	DECLARE_CLASS(UCollisionProfile, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCollisionProfile) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCollisionProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCollisionProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCollisionProfile(UCollisionProfile&&); \
	ENGINE_API UCollisionProfile(const UCollisionProfile&); \
public: \
	ENGINE_API virtual ~UCollisionProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCollisionProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCollisionProfile(UCollisionProfile&&); \
	ENGINE_API UCollisionProfile(const UCollisionProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCollisionProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionProfile) \
	ENGINE_API virtual ~UCollisionProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_159_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CollisionProfile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCollisionProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
