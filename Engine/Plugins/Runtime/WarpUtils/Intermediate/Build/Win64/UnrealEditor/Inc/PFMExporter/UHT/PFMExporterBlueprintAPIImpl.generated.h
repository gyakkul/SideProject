// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PFMExporterBlueprintAPIImpl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UStaticMeshComponent;
#ifdef PFMEXPORTER_PFMExporterBlueprintAPIImpl_generated_h
#error "PFMExporterBlueprintAPIImpl.generated.h already included, missing '#pragma once' in PFMExporterBlueprintAPIImpl.h"
#endif
#define PFMEXPORTER_PFMExporterBlueprintAPIImpl_generated_h

#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportPFM);


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportPFM);


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFMExporterAPIImpl(); \
	friend struct Z_Construct_UClass_UPFMExporterAPIImpl_Statics; \
public: \
	DECLARE_CLASS(UPFMExporterAPIImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PFMExporter"), NO_API) \
	DECLARE_SERIALIZER(UPFMExporterAPIImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UPFMExporterAPIImpl*>(this); }


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPFMExporterAPIImpl(); \
	friend struct Z_Construct_UClass_UPFMExporterAPIImpl_Statics; \
public: \
	DECLARE_CLASS(UPFMExporterAPIImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PFMExporter"), NO_API) \
	DECLARE_SERIALIZER(UPFMExporterAPIImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UPFMExporterAPIImpl*>(this); }


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMExporterAPIImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMExporterAPIImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMExporterAPIImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMExporterAPIImpl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFMExporterAPIImpl(UPFMExporterAPIImpl&&); \
	NO_API UPFMExporterAPIImpl(const UPFMExporterAPIImpl&); \
public: \
	NO_API virtual ~UPFMExporterAPIImpl();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMExporterAPIImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFMExporterAPIImpl(UPFMExporterAPIImpl&&); \
	NO_API UPFMExporterAPIImpl(const UPFMExporterAPIImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMExporterAPIImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMExporterAPIImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMExporterAPIImpl) \
	NO_API virtual ~UPFMExporterAPIImpl();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PFMEXPORTER_API UClass* StaticClass<class UPFMExporterAPIImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
