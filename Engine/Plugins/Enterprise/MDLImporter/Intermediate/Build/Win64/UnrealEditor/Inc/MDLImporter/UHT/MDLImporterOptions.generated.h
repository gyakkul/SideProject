// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MDLImporterOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MDLIMPORTER_MDLImporterOptions_generated_h
#error "MDLImporterOptions.generated.h already included, missing '#pragma once' in MDLImporterOptions.h"
#endif
#define MDLIMPORTER_MDLImporterOptions_generated_h

#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_RPC_WRAPPERS
#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_ACCESSORS
#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMDLImporterOptions(); \
	friend struct Z_Construct_UClass_UMDLImporterOptions_Statics; \
public: \
	DECLARE_CLASS(UMDLImporterOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MDLImporter"), NO_API) \
	DECLARE_SERIALIZER(UMDLImporterOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMDLImporterOptions(); \
	friend struct Z_Construct_UClass_UMDLImporterOptions_Statics; \
public: \
	DECLARE_CLASS(UMDLImporterOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MDLImporter"), NO_API) \
	DECLARE_SERIALIZER(UMDLImporterOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMDLImporterOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMDLImporterOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMDLImporterOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMDLImporterOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMDLImporterOptions(UMDLImporterOptions&&); \
	NO_API UMDLImporterOptions(const UMDLImporterOptions&); \
public: \
	NO_API virtual ~UMDLImporterOptions();


#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMDLImporterOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMDLImporterOptions(UMDLImporterOptions&&); \
	NO_API UMDLImporterOptions(const UMDLImporterOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMDLImporterOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMDLImporterOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMDLImporterOptions) \
	NO_API virtual ~UMDLImporterOptions();


#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_12_PROLOG
#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_ACCESSORS \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_INCLASS \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_ACCESSORS \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MDLImporterOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MDLIMPORTER_API UClass* StaticClass<class UMDLImporterOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Public_MDLImporterOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
