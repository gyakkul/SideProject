// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshSocket.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef ENGINE_SkeletalMeshSocket_generated_h
#error "SkeletalMeshSocket.generated.h already included, missing '#pragma once' in SkeletalMeshSocket.h"
#endif
#define ENGINE_SkeletalMeshSocket_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeSocketFromLocation); \
	DECLARE_FUNCTION(execGetSocketLocation);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeSocketFromLocation); \
	DECLARE_FUNCTION(execGetSocketLocation);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshSocket, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshSocket(); \
	friend struct Z_Construct_UClass_USkeletalMeshSocket_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshSocket) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshSocket(); \
	friend struct Z_Construct_UClass_USkeletalMeshSocket_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshSocket) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshSocket(USkeletalMeshSocket&&); \
	ENGINE_API USkeletalMeshSocket(const USkeletalMeshSocket&); \
public: \
	ENGINE_API virtual ~USkeletalMeshSocket();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshSocket(USkeletalMeshSocket&&); \
	ENGINE_API USkeletalMeshSocket(const USkeletalMeshSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshSocket) \
	ENGINE_API virtual ~USkeletalMeshSocket();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshSocket."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
