// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookedMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CookedMetaData_generated_h
#error "CookedMetaData.generated.h already included, missing '#pragma once' in CookedMetaData.h"
#endif
#define ENGINE_CookedMetaData_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FObjectCookedMetaDataStore>();

#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFieldCookedMetaDataStore>();

#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStructCookedMetaDataStore>();

#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnumCookedMetaData(); \
	friend struct Z_Construct_UClass_UEnumCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UEnumCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEnumCookedMetaData) \
	DECLARE_WITHIN(UEnum)


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUEnumCookedMetaData(); \
	friend struct Z_Construct_UClass_UEnumCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UEnumCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEnumCookedMetaData) \
	DECLARE_WITHIN(UEnum)


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnumCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumCookedMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnumCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumCookedMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnumCookedMetaData(UEnumCookedMetaData&&); \
	NO_API UEnumCookedMetaData(const UEnumCookedMetaData&); \
public: \
	NO_API virtual ~UEnumCookedMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnumCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnumCookedMetaData(UEnumCookedMetaData&&); \
	NO_API UEnumCookedMetaData(const UEnumCookedMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnumCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumCookedMetaData) \
	NO_API virtual ~UEnumCookedMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_69_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_73_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEnumCookedMetaData>();

#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructCookedMetaData(); \
	friend struct Z_Construct_UClass_UStructCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UStructCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStructCookedMetaData) \
	DECLARE_WITHIN(UScriptStruct)


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUStructCookedMetaData(); \
	friend struct Z_Construct_UClass_UStructCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UStructCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStructCookedMetaData) \
	DECLARE_WITHIN(UScriptStruct)


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructCookedMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructCookedMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStructCookedMetaData(UStructCookedMetaData&&); \
	NO_API UStructCookedMetaData(const UStructCookedMetaData&); \
public: \
	NO_API virtual ~UStructCookedMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStructCookedMetaData(UStructCookedMetaData&&); \
	NO_API UStructCookedMetaData(const UStructCookedMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructCookedMetaData) \
	NO_API virtual ~UStructCookedMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_93_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStructCookedMetaData>();

#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassCookedMetaData(); \
	friend struct Z_Construct_UClass_UClassCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UClassCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UClassCookedMetaData) \
	DECLARE_WITHIN(UClass)


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUClassCookedMetaData(); \
	friend struct Z_Construct_UClass_UClassCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UClassCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UClassCookedMetaData) \
	DECLARE_WITHIN(UClass)


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassCookedMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassCookedMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClassCookedMetaData(UClassCookedMetaData&&); \
	NO_API UClassCookedMetaData(const UClassCookedMetaData&); \
public: \
	NO_API virtual ~UClassCookedMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClassCookedMetaData(UClassCookedMetaData&&); \
	NO_API UClassCookedMetaData(const UClassCookedMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassCookedMetaData) \
	NO_API virtual ~UClassCookedMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_109_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h_113_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UClassCookedMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_CookedMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
