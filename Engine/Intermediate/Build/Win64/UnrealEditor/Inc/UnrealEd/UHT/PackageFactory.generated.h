// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PackageFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PackageFactory_generated_h
#error "PackageFactory.generated.h already included, missing '#pragma once' in PackageFactory.h"
#endif
#define UNREALED_PackageFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageFactory(); \
	friend struct Z_Construct_UClass_UPackageFactory_Statics; \
public: \
	DECLARE_CLASS(UPackageFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPackageFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPackageFactory(); \
	friend struct Z_Construct_UClass_UPackageFactory_Statics; \
public: \
	DECLARE_CLASS(UPackageFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPackageFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageFactory(UPackageFactory&&); \
	NO_API UPackageFactory(const UPackageFactory&); \
public: \
	NO_API virtual ~UPackageFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageFactory(UPackageFactory&&); \
	NO_API UPackageFactory(const UPackageFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageFactory) \
	NO_API virtual ~UPackageFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PackageFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPackageFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PackageFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
