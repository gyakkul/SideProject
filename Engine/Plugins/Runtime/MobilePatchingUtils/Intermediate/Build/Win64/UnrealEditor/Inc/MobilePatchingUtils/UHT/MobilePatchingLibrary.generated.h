// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MobilePatchingLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMobileInstalledContent;
class UMobilePendingContent;
#ifdef MOBILEPATCHINGUTILS_MobilePatchingLibrary_generated_h
#error "MobilePatchingLibrary.generated.h already included, missing '#pragma once' in MobilePatchingLibrary.h"
#endif
#define MOBILEPATCHINGUTILS_MobilePatchingLibrary_generated_h

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_10_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnContentInstallSucceeded_DelegateWrapper(const FScriptDelegate& OnContentInstallSucceeded);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_11_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnContentInstallFailed_DelegateWrapper(const FScriptDelegate& OnContentInstallFailed, const FText& ErrorText, int32 ErrorCode);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMount); \
	DECLARE_FUNCTION(execGetInstalledContentSize); \
	DECLARE_FUNCTION(execGetDiskFreeSpace);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMount); \
	DECLARE_FUNCTION(execGetInstalledContentSize); \
	DECLARE_FUNCTION(execGetDiskFreeSpace);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_ACCESSORS
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobileInstalledContent(); \
	friend struct Z_Construct_UClass_UMobileInstalledContent_Statics; \
public: \
	DECLARE_CLASS(UMobileInstalledContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobileInstalledContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMobileInstalledContent(); \
	friend struct Z_Construct_UClass_UMobileInstalledContent_Statics; \
public: \
	DECLARE_CLASS(UMobileInstalledContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobileInstalledContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobileInstalledContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileInstalledContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobileInstalledContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileInstalledContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobileInstalledContent(UMobileInstalledContent&&); \
	NO_API UMobileInstalledContent(const UMobileInstalledContent&); \
public: \
	NO_API virtual ~UMobileInstalledContent();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobileInstalledContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobileInstalledContent(UMobileInstalledContent&&); \
	NO_API UMobileInstalledContent(const UMobileInstalledContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobileInstalledContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileInstalledContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileInstalledContent) \
	NO_API virtual ~UMobileInstalledContent();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<class UMobileInstalledContent>();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartInstall); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetDownloadSize);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartInstall); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetDownloadSize);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_ACCESSORS
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobilePendingContent(); \
	friend struct Z_Construct_UClass_UMobilePendingContent_Statics; \
public: \
	DECLARE_CLASS(UMobilePendingContent, UMobileInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePendingContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUMobilePendingContent(); \
	friend struct Z_Construct_UClass_UMobilePendingContent_Statics; \
public: \
	DECLARE_CLASS(UMobilePendingContent, UMobileInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePendingContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePendingContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePendingContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePendingContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePendingContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePendingContent(UMobilePendingContent&&); \
	NO_API UMobilePendingContent(const UMobilePendingContent&); \
public: \
	NO_API virtual ~UMobilePendingContent();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePendingContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePendingContent(UMobilePendingContent&&); \
	NO_API UMobilePendingContent(const UMobilePendingContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePendingContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePendingContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePendingContent) \
	NO_API virtual ~UMobilePendingContent();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_INCLASS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<class UMobilePendingContent>();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_108_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnRequestContentSucceeded_DelegateWrapper(const FScriptDelegate& OnRequestContentSucceeded, UMobilePendingContent* MobilePendingContent);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_109_DELEGATE \
MOBILEPATCHINGUTILS_API void FOnRequestContentFailed_DelegateWrapper(const FScriptDelegate& OnRequestContentFailed, const FText& ErrorText, int32 ErrorCode);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execRequestContent); \
	DECLARE_FUNCTION(execGetInstalledContent);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execRequestContent); \
	DECLARE_FUNCTION(execGetInstalledContent);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_ACCESSORS
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobilePatchingLibrary(); \
	friend struct Z_Construct_UClass_UMobilePatchingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMobilePatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePatchingLibrary)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUMobilePatchingLibrary(); \
	friend struct Z_Construct_UClass_UMobilePatchingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMobilePatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePatchingLibrary)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePatchingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePatchingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePatchingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePatchingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePatchingLibrary(UMobilePatchingLibrary&&); \
	NO_API UMobilePatchingLibrary(const UMobilePatchingLibrary&); \
public: \
	NO_API virtual ~UMobilePatchingLibrary();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePatchingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePatchingLibrary(UMobilePatchingLibrary&&); \
	NO_API UMobilePatchingLibrary(const UMobilePatchingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePatchingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePatchingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePatchingLibrary) \
	NO_API virtual ~UMobilePatchingLibrary();


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_111_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_ACCESSORS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_INCLASS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_ACCESSORS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<class UMobilePatchingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
