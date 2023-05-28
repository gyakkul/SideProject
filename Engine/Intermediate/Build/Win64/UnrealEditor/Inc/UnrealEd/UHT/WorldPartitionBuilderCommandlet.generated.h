// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/WorldPartitionBuilderCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldPartitionBuilderCommandlet_generated_h
#error "WorldPartitionBuilderCommandlet.generated.h already included, missing '#pragma once' in WorldPartitionBuilderCommandlet.h"
#endif
#define UNREALED_WorldPartitionBuilderCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionBuilderCommandlet(); \
	friend struct Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionBuilderCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionBuilderCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionBuilderCommandlet(); \
	friend struct Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionBuilderCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionBuilderCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionBuilderCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBuilderCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionBuilderCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBuilderCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionBuilderCommandlet(UWorldPartitionBuilderCommandlet&&); \
	NO_API UWorldPartitionBuilderCommandlet(const UWorldPartitionBuilderCommandlet&); \
public: \
	NO_API virtual ~UWorldPartitionBuilderCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionBuilderCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionBuilderCommandlet(UWorldPartitionBuilderCommandlet&&); \
	NO_API UWorldPartitionBuilderCommandlet(const UWorldPartitionBuilderCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionBuilderCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionBuilderCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionBuilderCommandlet) \
	NO_API virtual ~UWorldPartitionBuilderCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldPartitionBuilderCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldPartitionBuilderCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
