// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithContentBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatasmithAssetUserData;
class UObject;
#ifdef DATASMITHCONTENT_DatasmithContentBlueprintLibrary_generated_h
#error "DatasmithContentBlueprintLibrary.generated.h already included, missing '#pragma once' in DatasmithContentBlueprintLibrary.h"
#endif
#define DATASMITHCONTENT_DatasmithContentBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDatasmithUserDataKeysAndValuesForValue); \
	DECLARE_FUNCTION(execGetDatasmithUserDataValuesForKey); \
	DECLARE_FUNCTION(execGetDatasmithUserDataValueForKey); \
	DECLARE_FUNCTION(execGetDatasmithUserData);


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDatasmithUserDataKeysAndValuesForValue); \
	DECLARE_FUNCTION(execGetDatasmithUserDataValuesForKey); \
	DECLARE_FUNCTION(execGetDatasmithUserDataValueForKey); \
	DECLARE_FUNCTION(execGetDatasmithUserData);


#if WITH_EDITOR
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllObjectsAndValuesForKey); \
	DECLARE_FUNCTION(execGetAllDatasmithUserData);


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllObjectsAndValuesForKey); \
	DECLARE_FUNCTION(execGetAllDatasmithUserData);


#else
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithContentBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatasmithContentBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithContentBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithContentBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatasmithContentBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatasmithContentBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithContentBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithContentBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithContentBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithContentBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithContentBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithContentBlueprintLibrary(UDatasmithContentBlueprintLibrary&&); \
	NO_API UDatasmithContentBlueprintLibrary(const UDatasmithContentBlueprintLibrary&); \
public: \
	NO_API virtual ~UDatasmithContentBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithContentBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithContentBlueprintLibrary(UDatasmithContentBlueprintLibrary&&); \
	NO_API UDatasmithContentBlueprintLibrary(const UDatasmithContentBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithContentBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithContentBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithContentBlueprintLibrary) \
	NO_API virtual ~UDatasmithContentBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHCONTENT_API UClass* StaticClass<class UDatasmithContentBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithContentBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
