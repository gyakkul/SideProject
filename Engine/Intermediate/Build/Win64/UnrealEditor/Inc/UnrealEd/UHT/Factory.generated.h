// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetImportTask;
#ifdef UNREALED_Factory_generated_h
#error "Factory.generated.h already included, missing '#pragma once' in Factory.h"
#endif
#define UNREALED_Factory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFactory(); \
	friend struct Z_Construct_UClass_UFactory_Statics; \
public: \
	DECLARE_CLASS(UFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFactory(); \
	friend struct Z_Construct_UClass_UFactory_Statics; \
public: \
	DECLARE_CLASS(UFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactory(UFactory&&); \
	NO_API UFactory(const UFactory&); \
public: \
	NO_API virtual ~UFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFactory(UFactory&&); \
	NO_API UFactory(const UFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactory) \
	NO_API virtual ~UFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Factory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
