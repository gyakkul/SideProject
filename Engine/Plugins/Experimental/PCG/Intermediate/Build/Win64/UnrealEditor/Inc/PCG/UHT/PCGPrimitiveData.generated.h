// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPrimitiveData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGPrimitiveData_generated_h
#error "PCGPrimitiveData.generated.h already included, missing '#pragma once' in PCGPrimitiveData.h"
#endif
#define PCG_PCGPrimitiveData_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPrimitiveData(); \
	friend struct Z_Construct_UClass_UPCGPrimitiveData_Statics; \
public: \
	DECLARE_CLASS(UPCGPrimitiveData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPrimitiveData)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPCGPrimitiveData(); \
	friend struct Z_Construct_UClass_UPCGPrimitiveData_Statics; \
public: \
	DECLARE_CLASS(UPCGPrimitiveData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPrimitiveData)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPrimitiveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPrimitiveData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPrimitiveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPrimitiveData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPrimitiveData(UPCGPrimitiveData&&); \
	NO_API UPCGPrimitiveData(const UPCGPrimitiveData&); \
public: \
	NO_API virtual ~UPCGPrimitiveData();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPrimitiveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPrimitiveData(UPCGPrimitiveData&&); \
	NO_API UPCGPrimitiveData(const UPCGPrimitiveData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPrimitiveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPrimitiveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPrimitiveData) \
	NO_API virtual ~UPCGPrimitiveData();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_INCLASS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGPrimitiveData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
