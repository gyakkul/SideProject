// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreServicesFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARPin;
class UCloudARPin;
class UObject;
enum class EARPinCloudTaskResult : uint8;
struct FGoogleARCoreServicesConfig;
struct FLatentActionInfo;
#ifdef GOOGLEARCORESERVICES_GoogleARCoreServicesFunctionLibrary_generated_h
#error "GoogleARCoreServicesFunctionLibrary.generated.h already included, missing '#pragma once' in GoogleARCoreServicesFunctionLibrary.h"
#endif
#define GOOGLEARCORESERVICES_GoogleARCoreServicesFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllCloudARPin); \
	DECLARE_FUNCTION(execRemoveCloudARPin); \
	DECLARE_FUNCTION(execCreateAndResolveCloudARPin); \
	DECLARE_FUNCTION(execCreateAndHostCloudARPin); \
	DECLARE_FUNCTION(execCreateAndResolveCloudARPinLatentAction); \
	DECLARE_FUNCTION(execCreateAndHostCloudARPinLatentAction); \
	DECLARE_FUNCTION(execConfigGoogleARCoreServices);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllCloudARPin); \
	DECLARE_FUNCTION(execRemoveCloudARPin); \
	DECLARE_FUNCTION(execCreateAndResolveCloudARPin); \
	DECLARE_FUNCTION(execCreateAndHostCloudARPin); \
	DECLARE_FUNCTION(execCreateAndResolveCloudARPinLatentAction); \
	DECLARE_FUNCTION(execCreateAndHostCloudARPinLatentAction); \
	DECLARE_FUNCTION(execConfigGoogleARCoreServices);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreServicesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreServicesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreServices"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreServicesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGoogleARCoreServicesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreServicesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreServices"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreServicesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreServicesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreServicesFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreServicesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreServicesFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreServicesFunctionLibrary(UGoogleARCoreServicesFunctionLibrary&&); \
	NO_API UGoogleARCoreServicesFunctionLibrary(const UGoogleARCoreServicesFunctionLibrary&); \
public: \
	NO_API virtual ~UGoogleARCoreServicesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreServicesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreServicesFunctionLibrary(UGoogleARCoreServicesFunctionLibrary&&); \
	NO_API UGoogleARCoreServicesFunctionLibrary(const UGoogleARCoreServicesFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreServicesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreServicesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreServicesFunctionLibrary) \
	NO_API virtual ~UGoogleARCoreServicesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEARCORESERVICES_API UClass* StaticClass<class UGoogleARCoreServicesFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
