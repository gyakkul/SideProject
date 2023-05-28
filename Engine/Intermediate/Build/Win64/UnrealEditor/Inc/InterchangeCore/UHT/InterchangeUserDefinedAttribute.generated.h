// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeUserDefinedAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNode;
struct FInterchangeUserDefinedAttributeInfo;
#ifdef INTERCHANGECORE_InterchangeUserDefinedAttribute_generated_h
#error "InterchangeUserDefinedAttribute.generated.h already included, missing '#pragma once' in InterchangeUserDefinedAttribute.h"
#endif
#define INTERCHANGECORE_InterchangeUserDefinedAttribute_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<struct FInterchangeUserDefinedAttributeInfo>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDuplicateAllUserDefinedAttribute); \
	DECLARE_FUNCTION(execGetUserDefinedAttributeInfos); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_FString); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Int32); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Double); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Float); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Boolean); \
	DECLARE_FUNCTION(execRemoveUserDefinedAttribute); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_FString); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Int32); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Double); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Float); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Boolean);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDuplicateAllUserDefinedAttribute); \
	DECLARE_FUNCTION(execGetUserDefinedAttributeInfos); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_FString); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Int32); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Double); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Float); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Boolean); \
	DECLARE_FUNCTION(execRemoveUserDefinedAttribute); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_FString); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Int32); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Double); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Float); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Boolean);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUserDefinedAttributesAPI(); \
	friend struct Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics; \
public: \
	DECLARE_CLASS(UInterchangeUserDefinedAttributesAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeUserDefinedAttributesAPI)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeUserDefinedAttributesAPI(); \
	friend struct Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics; \
public: \
	DECLARE_CLASS(UInterchangeUserDefinedAttributesAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeUserDefinedAttributesAPI)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeUserDefinedAttributesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeUserDefinedAttributesAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeUserDefinedAttributesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUserDefinedAttributesAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeUserDefinedAttributesAPI(UInterchangeUserDefinedAttributesAPI&&); \
	NO_API UInterchangeUserDefinedAttributesAPI(const UInterchangeUserDefinedAttributesAPI&); \
public: \
	NO_API virtual ~UInterchangeUserDefinedAttributesAPI();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeUserDefinedAttributesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeUserDefinedAttributesAPI(UInterchangeUserDefinedAttributesAPI&&); \
	NO_API UInterchangeUserDefinedAttributesAPI(const UInterchangeUserDefinedAttributesAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeUserDefinedAttributesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUserDefinedAttributesAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeUserDefinedAttributesAPI) \
	NO_API virtual ~UInterchangeUserDefinedAttributesAPI();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_40_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeUserDefinedAttributesAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
