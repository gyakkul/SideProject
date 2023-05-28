// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSourceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeSourceData_generated_h
#error "InterchangeSourceData.generated.h already included, missing '#pragma once' in InterchangeSourceData.h"
#endif
#define INTERCHANGECORE_InterchangeSourceData_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFilename); \
	DECLARE_FUNCTION(execGetFilename);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFilename); \
	DECLARE_FUNCTION(execGetFilename);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSourceData(); \
	friend struct Z_Construct_UClass_UInterchangeSourceData_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSourceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSourceData)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeSourceData(); \
	friend struct Z_Construct_UClass_UInterchangeSourceData_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSourceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSourceData)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSourceData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSourceData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSourceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSourceData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSourceData(UInterchangeSourceData&&); \
	NO_API UInterchangeSourceData(const UInterchangeSourceData&); \
public: \
	NO_API virtual ~UInterchangeSourceData();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSourceData(UInterchangeSourceData&&); \
	NO_API UInterchangeSourceData(const UInterchangeSourceData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSourceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSourceData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSourceData) \
	NO_API virtual ~UInterchangeSourceData();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_21_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeSourceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
