// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageWriteBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FImageWriteOptions;
#ifdef IMAGEWRITEQUEUE_ImageWriteBlueprintLibrary_generated_h
#error "ImageWriteBlueprintLibrary.generated.h already included, missing '#pragma once' in ImageWriteBlueprintLibrary.h"
#endif
#define IMAGEWRITEQUEUE_ImageWriteBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_14_DELEGATE \
IMAGEWRITEQUEUE_API void FOnImageWriteComplete_DelegateWrapper(const FScriptDelegate& OnImageWriteComplete, bool bSuccess);


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImageWriteOptions_Statics; \
	IMAGEWRITEQUEUE_API static class UScriptStruct* StaticStruct();


template<> IMAGEWRITEQUEUE_API UScriptStruct* StaticStruct<struct FImageWriteOptions>();

#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_SPARSE_DATA
#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportToDisk);


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportToDisk);


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ACCESSORS
#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageWriteBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageWriteBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageWriteQueue"), NO_API) \
	DECLARE_SERIALIZER(UImageWriteBlueprintLibrary)


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUImageWriteBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageWriteBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageWriteQueue"), NO_API) \
	DECLARE_SERIALIZER(UImageWriteBlueprintLibrary)


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageWriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageWriteBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageWriteBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageWriteBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageWriteBlueprintLibrary(UImageWriteBlueprintLibrary&&); \
	NO_API UImageWriteBlueprintLibrary(const UImageWriteBlueprintLibrary&); \
public: \
	NO_API virtual ~UImageWriteBlueprintLibrary();


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageWriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageWriteBlueprintLibrary(UImageWriteBlueprintLibrary&&); \
	NO_API UImageWriteBlueprintLibrary(const UImageWriteBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageWriteBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageWriteBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageWriteBlueprintLibrary) \
	NO_API virtual ~UImageWriteBlueprintLibrary();


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_59_PROLOG
#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_SPARSE_DATA \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ACCESSORS \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_SPARSE_DATA \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ACCESSORS \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGEWRITEQUEUE_API UClass* StaticClass<class UImageWriteBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
