// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMLink.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMGraph;
class URigVMPin;
#ifdef RIGVMDEVELOPER_RigVMLink_generated_h
#error "RigVMLink.generated.h already included, missing '#pragma once' in RigVMLink.h"
#endif
#define RIGVMDEVELOPER_RigVMLink_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPinPathRepresentation); \
	DECLARE_FUNCTION(execGetOppositePin); \
	DECLARE_FUNCTION(execGetTargetPin); \
	DECLARE_FUNCTION(execGetSourcePin); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetLinkIndex);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPinPathRepresentation); \
	DECLARE_FUNCTION(execGetOppositePin); \
	DECLARE_FUNCTION(execGetTargetPin); \
	DECLARE_FUNCTION(execGetSourcePin); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetLinkIndex);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMLink, NO_API)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMLink(); \
	friend struct Z_Construct_UClass_URigVMLink_Statics; \
public: \
	DECLARE_CLASS(URigVMLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMLink) \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURigVMLink(); \
	friend struct Z_Construct_UClass_URigVMLink_Statics; \
public: \
	DECLARE_CLASS(URigVMLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMLink) \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMLink(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMLink(URigVMLink&&); \
	NO_API URigVMLink(const URigVMLink&); \
public: \
	NO_API virtual ~URigVMLink();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMLink(URigVMLink&&); \
	NO_API URigVMLink(const URigVMLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMLink); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMLink) \
	NO_API virtual ~URigVMLink();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_18_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
