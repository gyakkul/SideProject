// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dom/WebAPIType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBAPIEDITOR_WebAPIType_generated_h
#error "WebAPIType.generated.h already included, missing '#pragma once' in WebAPIType.h"
#endif
#define WEBAPIEDITOR_WebAPIType_generated_h

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ACCESSORS
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPITypeInfo(); \
	friend struct Z_Construct_UClass_UWebAPITypeInfo_Statics; \
public: \
	DECLARE_CLASS(UWebAPITypeInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), NO_API) \
	DECLARE_SERIALIZER(UWebAPITypeInfo)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUWebAPITypeInfo(); \
	friend struct Z_Construct_UClass_UWebAPITypeInfo_Statics; \
public: \
	DECLARE_CLASS(UWebAPITypeInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), NO_API) \
	DECLARE_SERIALIZER(UWebAPITypeInfo)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPITypeInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPITypeInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPITypeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPITypeInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebAPITypeInfo(UWebAPITypeInfo&&); \
	NO_API UWebAPITypeInfo(const UWebAPITypeInfo&); \
public: \
	NO_API virtual ~UWebAPITypeInfo();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebAPITypeInfo(UWebAPITypeInfo&&); \
	NO_API UWebAPITypeInfo(const UWebAPITypeInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPITypeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPITypeInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebAPITypeInfo) \
	NO_API virtual ~UWebAPITypeInfo();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ACCESSORS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_INCLASS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ACCESSORS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBAPIEDITOR_API UClass* StaticClass<class UWebAPITypeInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h


#define FOREACH_ENUM_EWEBAPISCHEMATYPE(op) \
	op(EWebAPISchemaType::Model) \
	op(EWebAPISchemaType::Service) \
	op(EWebAPISchemaType::Operation) \
	op(EWebAPISchemaType::Property) \
	op(EWebAPISchemaType::Parameter) \
	op(EWebAPISchemaType::Unspecified) 

enum class EWebAPISchemaType : uint8;
template<> struct TIsUEnumClass<EWebAPISchemaType> { enum { Value = true }; };
template<> WEBAPIEDITOR_API UEnum* StaticEnum<EWebAPISchemaType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
