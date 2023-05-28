// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/Exporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetExportTask;
#ifdef ENGINE_Exporter_generated_h
#error "Exporter.generated.h already included, missing '#pragma once' in Exporter.h"
#endif
#define ENGINE_Exporter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunAssetExportTasks); \
	DECLARE_FUNCTION(execRunAssetExportTask);


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunAssetExportTasks); \
	DECLARE_FUNCTION(execRunAssetExportTask);


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UExporter, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExporter(); \
	friend struct Z_Construct_UClass_UExporter_Statics; \
public: \
	DECLARE_CLASS(UExporter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UExporter) \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUExporter(); \
	friend struct Z_Construct_UClass_UExporter_Statics; \
public: \
	DECLARE_CLASS(UExporter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UExporter) \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UExporter(UExporter&&); \
	ENGINE_API UExporter(const UExporter&); \
public: \
	ENGINE_API virtual ~UExporter();


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UExporter(UExporter&&); \
	ENGINE_API UExporter(const UExporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExporter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExporter) \
	ENGINE_API virtual ~UExporter();


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Exporter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UExporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
