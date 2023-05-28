// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IO/LidarPointCloudFileIO_ASCII.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;
class UObject;
enum class ELidarPointCloudAsyncMode : uint8;
struct FLatentActionInfo;
struct FLidarPointCloudImportSettings_ASCII_Columns;
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_ASCII_generated_h
#error "LidarPointCloudFileIO_ASCII.generated.h already included, missing '#pragma once' in LidarPointCloudFileIO_ASCII.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudFileIO_ASCII_generated_h

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics; \
	LIDARPOINTCLOUDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FLidarPointCloudImportSettings_ASCII_Columns>();

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePointCloudFromFile);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePointCloudFromFile);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ACCESSORS
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO_ASCII(); \
	friend struct Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudFileIO_ASCII, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO_ASCII)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudFileIO_ASCII(); \
	friend struct Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudFileIO_ASCII, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudFileIO_ASCII)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudFileIO_ASCII(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudFileIO_ASCII) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO_ASCII); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO_ASCII); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudFileIO_ASCII(ULidarPointCloudFileIO_ASCII&&); \
	NO_API ULidarPointCloudFileIO_ASCII(const ULidarPointCloudFileIO_ASCII&); \
public: \
	NO_API virtual ~ULidarPointCloudFileIO_ASCII();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudFileIO_ASCII(ULidarPointCloudFileIO_ASCII&&); \
	NO_API ULidarPointCloudFileIO_ASCII(const ULidarPointCloudFileIO_ASCII&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudFileIO_ASCII); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudFileIO_ASCII); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloudFileIO_ASCII) \
	NO_API virtual ~ULidarPointCloudFileIO_ASCII();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_165_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ACCESSORS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_INCLASS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ACCESSORS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloudFileIO_ASCII>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
