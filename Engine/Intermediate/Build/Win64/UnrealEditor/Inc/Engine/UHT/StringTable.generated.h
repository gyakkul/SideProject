// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Internationalization/StringTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StringTable_generated_h
#error "StringTable.generated.h already included, missing '#pragma once' in StringTable.h"
#endif
#define ENGINE_StringTable_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStringTable, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringTable(); \
	friend struct Z_Construct_UClass_UStringTable_Statics; \
public: \
	DECLARE_CLASS(UStringTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStringTable) \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStringTable(); \
	friend struct Z_Construct_UClass_UStringTable_Statics; \
public: \
	DECLARE_CLASS(UStringTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStringTable) \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringTable(UStringTable&&); \
	NO_API UStringTable(const UStringTable&); \
public: \
	NO_API virtual ~UStringTable();


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringTable(UStringTable&&); \
	NO_API UStringTable(const UStringTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStringTable) \
	NO_API virtual ~UStringTable();


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStringTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
