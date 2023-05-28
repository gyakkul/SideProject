// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpRequestProxyObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpRequestProxyObject;
struct FHttpHeader;
#ifdef HTTPBLUEPRINTGRAPH_HttpRequestProxyObject_generated_h
#error "HttpRequestProxyObject.generated.h already included, missing '#pragma once' in HttpRequestProxyObject.h"
#endif
#define HTTPBLUEPRINTGRAPH_HttpRequestProxyObject_generated_h

#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_10_DELEGATE \
HTTPBLUEPRINTGRAPH_API void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, const FString& Response, bool bSuccessful, FHttpHeader OutHeader);


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateHttpRequestProxyObject);


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateHttpRequestProxyObject);


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_ACCESSORS
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpRequestProxyObject(); \
	friend struct Z_Construct_UClass_UHttpRequestProxyObject_Statics; \
public: \
	DECLARE_CLASS(UHttpRequestProxyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpBlueprintGraph"), HTTPBLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UHttpRequestProxyObject)


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHttpRequestProxyObject(); \
	friend struct Z_Construct_UClass_UHttpRequestProxyObject_Statics; \
public: \
	DECLARE_CLASS(UHttpRequestProxyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpBlueprintGraph"), HTTPBLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UHttpRequestProxyObject)


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPBLUEPRINTGRAPH_API UHttpRequestProxyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpRequestProxyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPBLUEPRINTGRAPH_API, UHttpRequestProxyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpRequestProxyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPBLUEPRINTGRAPH_API UHttpRequestProxyObject(UHttpRequestProxyObject&&); \
	HTTPBLUEPRINTGRAPH_API UHttpRequestProxyObject(const UHttpRequestProxyObject&); \
public: \
	HTTPBLUEPRINTGRAPH_API virtual ~UHttpRequestProxyObject();


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HTTPBLUEPRINTGRAPH_API UHttpRequestProxyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HTTPBLUEPRINTGRAPH_API UHttpRequestProxyObject(UHttpRequestProxyObject&&); \
	HTTPBLUEPRINTGRAPH_API UHttpRequestProxyObject(const UHttpRequestProxyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HTTPBLUEPRINTGRAPH_API, UHttpRequestProxyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpRequestProxyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpRequestProxyObject) \
	HTTPBLUEPRINTGRAPH_API virtual ~UHttpRequestProxyObject();


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_12_PROLOG
#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_ACCESSORS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_INCLASS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_ACCESSORS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPBLUEPRINTGRAPH_API UClass* StaticClass<class UHttpRequestProxyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprintGraph_Private_HttpRequestProxyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
