// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlatformInterfaceWebResponse.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlatformInterfaceWebResponse_generated_h
#error "PlatformInterfaceWebResponse.generated.h already included, missing '#pragma once' in PlatformInterfaceWebResponse.h"
#endif
#define ENGINE_PlatformInterfaceWebResponse_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeaderValue); \
	DECLARE_FUNCTION(execGetHeader); \
	DECLARE_FUNCTION(execGetNumHeaders);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeaderValue); \
	DECLARE_FUNCTION(execGetHeader); \
	DECLARE_FUNCTION(execGetNumHeaders);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceWebResponse(); \
	friend struct Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterfaceWebResponse, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceWebResponse)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceWebResponse(); \
	friend struct Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterfaceWebResponse, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceWebResponse)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceWebResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceWebResponse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceWebResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceWebResponse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlatformInterfaceWebResponse(UPlatformInterfaceWebResponse&&); \
	ENGINE_API UPlatformInterfaceWebResponse(const UPlatformInterfaceWebResponse&); \
public: \
	ENGINE_API virtual ~UPlatformInterfaceWebResponse();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceWebResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlatformInterfaceWebResponse(UPlatformInterfaceWebResponse&&); \
	ENGINE_API UPlatformInterfaceWebResponse(const UPlatformInterfaceWebResponse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceWebResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceWebResponse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceWebResponse) \
	ENGINE_API virtual ~UPlatformInterfaceWebResponse();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlatformInterfaceWebResponse."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformInterfaceWebResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
