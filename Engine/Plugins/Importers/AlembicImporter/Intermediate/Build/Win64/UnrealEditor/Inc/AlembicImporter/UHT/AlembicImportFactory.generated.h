// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlembicImportFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALEMBICIMPORTER_AlembicImportFactory_generated_h
#error "AlembicImportFactory.generated.h already included, missing '#pragma once' in AlembicImportFactory.h"
#endif
#define ALEMBICIMPORTER_AlembicImportFactory_generated_h

#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_RPC_WRAPPERS
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_ACCESSORS
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlembicImportFactory(); \
	friend struct Z_Construct_UClass_UAlembicImportFactory_Statics; \
public: \
	DECLARE_CLASS(UAlembicImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AlembicImporter"), NO_API) \
	DECLARE_SERIALIZER(UAlembicImportFactory)


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAlembicImportFactory(); \
	friend struct Z_Construct_UClass_UAlembicImportFactory_Statics; \
public: \
	DECLARE_CLASS(UAlembicImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AlembicImporter"), NO_API) \
	DECLARE_SERIALIZER(UAlembicImportFactory)


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlembicImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlembicImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlembicImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlembicImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlembicImportFactory(UAlembicImportFactory&&); \
	NO_API UAlembicImportFactory(const UAlembicImportFactory&); \
public: \
	NO_API virtual ~UAlembicImportFactory();


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlembicImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlembicImportFactory(UAlembicImportFactory&&); \
	NO_API UAlembicImportFactory(const UAlembicImportFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlembicImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlembicImportFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlembicImportFactory) \
	NO_API virtual ~UAlembicImportFactory();


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_20_PROLOG
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_ACCESSORS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_INCLASS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_ACCESSORS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AlembicImportFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALEMBICIMPORTER_API UClass* StaticClass<class UAlembicImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
