// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/AsyncTaskDownloadImage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncTaskDownloadImage;
class UTexture2DDynamic;
#ifdef UMG_AsyncTaskDownloadImage_generated_h
#error "AsyncTaskDownloadImage.generated.h already included, missing '#pragma once' in AsyncTaskDownloadImage.h"
#endif
#define UMG_AsyncTaskDownloadImage_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_14_DELEGATE \
UMG_API void FDownloadImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageDelegate, UTexture2DDynamic* Texture);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadImage);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadImage);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadImage)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadImage)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskDownloadImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskDownloadImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskDownloadImage(UAsyncTaskDownloadImage&&); \
	NO_API UAsyncTaskDownloadImage(const UAsyncTaskDownloadImage&); \
public: \
	NO_API virtual ~UAsyncTaskDownloadImage();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskDownloadImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskDownloadImage(UAsyncTaskDownloadImage&&); \
	NO_API UAsyncTaskDownloadImage(const UAsyncTaskDownloadImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskDownloadImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadImage) \
	NO_API virtual ~UAsyncTaskDownloadImage();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncTaskDownloadImage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UAsyncTaskDownloadImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
