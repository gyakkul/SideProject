// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APEXDESTRUCTION_DestructibleMesh_generated_h
#error "DestructibleMesh.generated.h already included, missing '#pragma once' in DestructibleMesh.h"
#endif
#define APEXDESTRUCTION_DestructibleMesh_generated_h

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleDepthParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleDepthParameters>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleParametersFlag_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleParametersFlag>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleDamageParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleDamageParameters>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleDebrisParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleDebrisParameters>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_271_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleAdvancedParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleAdvancedParameters>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_317_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleSpecialHierarchyDepths_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleSpecialHierarchyDepths>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_373_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructibleParameters_Statics; \
	APEXDESTRUCTION_API static class UScriptStruct* StaticStruct();


template<> APEXDESTRUCTION_API UScriptStruct* StaticStruct<struct FDestructibleParameters>();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ACCESSORS
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleMesh, APEXDESTRUCTION_API)


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestructibleMesh(); \
	friend struct Z_Construct_UClass_UDestructibleMesh_Statics; \
public: \
	DECLARE_CLASS(UDestructibleMesh, USkeletalMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ApexDestruction"), APEXDESTRUCTION_API) \
	DECLARE_SERIALIZER(UDestructibleMesh) \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleMesh(); \
	friend struct Z_Construct_UClass_UDestructibleMesh_Statics; \
public: \
	DECLARE_CLASS(UDestructibleMesh, USkeletalMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ApexDestruction"), APEXDESTRUCTION_API) \
	DECLARE_SERIALIZER(UDestructibleMesh) \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTION_API UDestructibleMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APEXDESTRUCTION_API, UDestructibleMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APEXDESTRUCTION_API UDestructibleMesh(UDestructibleMesh&&); \
	APEXDESTRUCTION_API UDestructibleMesh(const UDestructibleMesh&); \
public: \
	APEXDESTRUCTION_API virtual ~UDestructibleMesh();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APEXDESTRUCTION_API UDestructibleMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APEXDESTRUCTION_API UDestructibleMesh(UDestructibleMesh&&); \
	APEXDESTRUCTION_API UDestructibleMesh(const UDestructibleMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APEXDESTRUCTION_API, UDestructibleMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleMesh) \
	APEXDESTRUCTION_API virtual ~UDestructibleMesh();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_408_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ACCESSORS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ACCESSORS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h_411_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DestructibleMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APEXDESTRUCTION_API UClass* StaticClass<class UDestructibleMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleMesh_h


#define FOREACH_ENUM_EIMPACTDAMAGEOVERRIDE(op) \
	op(IDO_None) \
	op(IDO_On) \
	op(IDO_Off) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
