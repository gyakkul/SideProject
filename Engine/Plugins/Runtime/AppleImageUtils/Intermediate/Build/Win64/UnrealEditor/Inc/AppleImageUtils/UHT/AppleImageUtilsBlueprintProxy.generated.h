// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleImageUtilsBlueprintProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
class UTexture;
enum class ETextureRotationDirection : uint8;
struct FAppleImageUtilsImageConversionResult;
#ifdef APPLEIMAGEUTILS_AppleImageUtilsBlueprintProxy_generated_h
#error "AppleImageUtilsBlueprintProxy.generated.h already included, missing '#pragma once' in AppleImageUtilsBlueprintProxy.h"
#endif
#define APPLEIMAGEUTILS_AppleImageUtilsBlueprintProxy_generated_h

#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_Statics; \
	APPLEIMAGEUTILS_API static class UScriptStruct* StaticStruct();


template<> APPLEIMAGEUTILS_API UScriptStruct* StaticStruct<struct FAppleImageUtilsImageConversionResult>();

#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_27_DELEGATE \
APPLEIMAGEUTILS_API void FAppleImageConversionDelegate_DelegateWrapper(const FMulticastScriptDelegate& AppleImageConversionDelegate, FAppleImageUtilsImageConversionResult const& ConversionResult);


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToPNG); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToTIFF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToHEIF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToJPEG);


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToPNG); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToTIFF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToHEIF); \
	DECLARE_FUNCTION(execCreateProxyObjectForConvertToJPEG);


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_ACCESSORS
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), APPLEIMAGEUTILS_API) \
	DECLARE_SERIALIZER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy)


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UAppleImageUtilsBaseAsyncTaskBlueprintProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), APPLEIMAGEUTILS_API) \
	DECLARE_SERIALIZER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy)


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEIMAGEUTILS_API, UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(UAppleImageUtilsBaseAsyncTaskBlueprintProxy&&); \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const UAppleImageUtilsBaseAsyncTaskBlueprintProxy&); \
public: \
	APPLEIMAGEUTILS_API virtual ~UAppleImageUtilsBaseAsyncTaskBlueprintProxy();


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(UAppleImageUtilsBaseAsyncTaskBlueprintProxy&&); \
	APPLEIMAGEUTILS_API UAppleImageUtilsBaseAsyncTaskBlueprintProxy(const UAppleImageUtilsBaseAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEIMAGEUTILS_API, UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageUtilsBaseAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageUtilsBaseAsyncTaskBlueprintProxy) \
	APPLEIMAGEUTILS_API virtual ~UAppleImageUtilsBaseAsyncTaskBlueprintProxy();


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_INCLASS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AppleImageUtilsBaseAsyncTaskBlueprintProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEIMAGEUTILS_API UClass* StaticClass<class UAppleImageUtilsBaseAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsBlueprintProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
