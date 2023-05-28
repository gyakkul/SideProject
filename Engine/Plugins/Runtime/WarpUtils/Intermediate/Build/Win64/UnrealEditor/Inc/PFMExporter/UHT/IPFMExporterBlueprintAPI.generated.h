// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/IPFMExporterBlueprintAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UStaticMeshComponent;
#ifdef PFMEXPORTER_IPFMExporterBlueprintAPI_generated_h
#error "IPFMExporterBlueprintAPI.generated.h already included, missing '#pragma once' in IPFMExporterBlueprintAPI.h"
#endif
#define PFMEXPORTER_IPFMExporterBlueprintAPI_generated_h

#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportPFM);


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportPFM);


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMExporterBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMExporterBlueprintAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMExporterBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMExporterBlueprintAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFMExporterBlueprintAPI(UPFMExporterBlueprintAPI&&); \
	NO_API UPFMExporterBlueprintAPI(const UPFMExporterBlueprintAPI&); \
public: \
	NO_API virtual ~UPFMExporterBlueprintAPI();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMExporterBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFMExporterBlueprintAPI(UPFMExporterBlueprintAPI&&); \
	NO_API UPFMExporterBlueprintAPI(const UPFMExporterBlueprintAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMExporterBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMExporterBlueprintAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMExporterBlueprintAPI) \
	NO_API virtual ~UPFMExporterBlueprintAPI();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPFMExporterBlueprintAPI(); \
	friend struct Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics; \
public: \
	DECLARE_CLASS(UPFMExporterBlueprintAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PFMExporter"), NO_API) \
	DECLARE_SERIALIZER(UPFMExporterBlueprintAPI)


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPFMExporterBlueprintAPI() {} \
public: \
	typedef UPFMExporterBlueprintAPI UClassType; \
	typedef IPFMExporterBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IPFMExporterBlueprintAPI() {} \
public: \
	typedef UPFMExporterBlueprintAPI UClassType; \
	typedef IPFMExporterBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PFMEXPORTER_API UClass* StaticClass<class UPFMExporterBlueprintAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
