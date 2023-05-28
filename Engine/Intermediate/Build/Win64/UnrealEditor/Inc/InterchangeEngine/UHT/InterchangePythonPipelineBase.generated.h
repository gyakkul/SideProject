// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePythonPipelineBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEENGINE_InterchangePythonPipelineBase_generated_h
#error "InterchangePythonPipelineBase.generated.h already included, missing '#pragma once' in InterchangePythonPipelineBase.h"
#endif
#define INTERCHANGEENGINE_InterchangePythonPipelineBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePythonPipelineBase(); \
	friend struct Z_Construct_UClass_UInterchangePythonPipelineBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangePythonPipelineBase, UInterchangePipelineBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePythonPipelineBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangePythonPipelineBase(); \
	friend struct Z_Construct_UClass_UInterchangePythonPipelineBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangePythonPipelineBase, UInterchangePipelineBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePythonPipelineBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePythonPipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePythonPipelineBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePythonPipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePythonPipelineBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePythonPipelineBase(UInterchangePythonPipelineBase&&); \
	NO_API UInterchangePythonPipelineBase(const UInterchangePythonPipelineBase&); \
public: \
	NO_API virtual ~UInterchangePythonPipelineBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePythonPipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePythonPipelineBase(UInterchangePythonPipelineBase&&); \
	NO_API UInterchangePythonPipelineBase(const UInterchangePythonPipelineBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePythonPipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePythonPipelineBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePythonPipelineBase) \
	NO_API virtual ~UInterchangePythonPipelineBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_16_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangePythonPipelineBase>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyData_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FPropertyData>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePythonPipelineAsset(); \
	friend struct Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics; \
public: \
	DECLARE_CLASS(UInterchangePythonPipelineAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePythonPipelineAsset)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangePythonPipelineAsset(); \
	friend struct Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics; \
public: \
	DECLARE_CLASS(UInterchangePythonPipelineAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePythonPipelineAsset)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePythonPipelineAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePythonPipelineAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePythonPipelineAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePythonPipelineAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePythonPipelineAsset(UInterchangePythonPipelineAsset&&); \
	NO_API UInterchangePythonPipelineAsset(const UInterchangePythonPipelineAsset&); \
public: \
	NO_API virtual ~UInterchangePythonPipelineAsset();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePythonPipelineAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePythonPipelineAsset(UInterchangePythonPipelineAsset&&); \
	NO_API UInterchangePythonPipelineAsset(const UInterchangePythonPipelineAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePythonPipelineAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePythonPipelineAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePythonPipelineAsset) \
	NO_API virtual ~UInterchangePythonPipelineAsset();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_46_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangePythonPipelineAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
