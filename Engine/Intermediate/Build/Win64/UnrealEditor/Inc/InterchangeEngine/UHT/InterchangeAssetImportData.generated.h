// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAssetImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEENGINE_InterchangeAssetImportData_generated_h
#error "InterchangeAssetImportData.generated.h already included, missing '#pragma once' in InterchangeAssetImportData.h"
#endif
#define INTERCHANGEENGINE_InterchangeAssetImportData_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScriptExtractDisplayLabels); \
	DECLARE_FUNCTION(execScriptExtractFilenames); \
	DECLARE_FUNCTION(execScriptGetFirstFilename);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScriptExtractDisplayLabels); \
	DECLARE_FUNCTION(execScriptExtractFilenames); \
	DECLARE_FUNCTION(execScriptGetFirstFilename);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAssetImportData(); \
	friend struct Z_Construct_UClass_UInterchangeAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAssetImportData)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeAssetImportData(); \
	friend struct Z_Construct_UClass_UInterchangeAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAssetImportData, UAssetImportData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAssetImportData)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAssetImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeAssetImportData(UInterchangeAssetImportData&&); \
	NO_API UInterchangeAssetImportData(const UInterchangeAssetImportData&); \
public: \
	NO_API virtual ~UInterchangeAssetImportData();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeAssetImportData(UInterchangeAssetImportData&&); \
	NO_API UInterchangeAssetImportData(const UInterchangeAssetImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAssetImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAssetImportData) \
	NO_API virtual ~UInterchangeAssetImportData();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_17_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeAssetImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeAssetImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
