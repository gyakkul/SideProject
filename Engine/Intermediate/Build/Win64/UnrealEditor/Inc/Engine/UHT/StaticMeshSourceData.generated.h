// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StaticMeshSourceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StaticMeshSourceData_generated_h
#error "StaticMeshSourceData.generated.h already included, missing '#pragma once' in StaticMeshSourceData.h"
#endif
#define ENGINE_StaticMeshSourceData_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshDescriptionBulkData(); \
	friend struct Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshDescriptionBulkData, UMeshDescriptionBaseBulkData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshDescriptionBulkData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshDescriptionBulkData(); \
	friend struct Z_Construct_UClass_UStaticMeshDescriptionBulkData_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshDescriptionBulkData, UMeshDescriptionBaseBulkData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshDescriptionBulkData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshDescriptionBulkData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshDescriptionBulkData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshDescriptionBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshDescriptionBulkData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshDescriptionBulkData(UStaticMeshDescriptionBulkData&&); \
	NO_API UStaticMeshDescriptionBulkData(const UStaticMeshDescriptionBulkData&); \
public: \
	NO_API virtual ~UStaticMeshDescriptionBulkData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshDescriptionBulkData(UStaticMeshDescriptionBulkData&&); \
	NO_API UStaticMeshDescriptionBulkData(const UStaticMeshDescriptionBulkData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshDescriptionBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshDescriptionBulkData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaticMeshDescriptionBulkData) \
	NO_API virtual ~UStaticMeshDescriptionBulkData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStaticMeshDescriptionBulkData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMeshSourceModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSourceData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
