// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaniteDisplacedMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NANITEDISPLACEDMESH_NaniteDisplacedMesh_generated_h
#error "NaniteDisplacedMesh.generated.h already included, missing '#pragma once' in NaniteDisplacedMesh.h"
#endif
#define NANITEDISPLACEDMESH_NaniteDisplacedMesh_generated_h

#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics; \
	NANITEDISPLACEDMESH_API static class UScriptStruct* StaticStruct();


template<> NANITEDISPLACEDMESH_API UScriptStruct* StaticStruct<struct FNaniteDisplacedMeshDisplacementMap>();

#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NANITEDISPLACEDMESH_API UScriptStruct* StaticStruct<struct FNaniteDisplacedMeshParams>();

#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ACCESSORS
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNaniteDisplacedMesh, NO_API)


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaniteDisplacedMesh(); \
	friend struct Z_Construct_UClass_UNaniteDisplacedMesh_Statics; \
public: \
	DECLARE_CLASS(UNaniteDisplacedMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NaniteDisplacedMesh"), NO_API) \
	DECLARE_SERIALIZER(UNaniteDisplacedMesh) \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UNaniteDisplacedMesh*>(this); }


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUNaniteDisplacedMesh(); \
	friend struct Z_Construct_UClass_UNaniteDisplacedMesh_Statics; \
public: \
	DECLARE_CLASS(UNaniteDisplacedMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NaniteDisplacedMesh"), NO_API) \
	DECLARE_SERIALIZER(UNaniteDisplacedMesh) \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UNaniteDisplacedMesh*>(this); }


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNaniteDisplacedMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaniteDisplacedMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaniteDisplacedMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaniteDisplacedMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNaniteDisplacedMesh(UNaniteDisplacedMesh&&); \
	NO_API UNaniteDisplacedMesh(const UNaniteDisplacedMesh&); \
public: \
	NO_API virtual ~UNaniteDisplacedMesh();


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNaniteDisplacedMesh(UNaniteDisplacedMesh&&); \
	NO_API UNaniteDisplacedMesh(const UNaniteDisplacedMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaniteDisplacedMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaniteDisplacedMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaniteDisplacedMesh) \
	NO_API virtual ~UNaniteDisplacedMesh();


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_124_PROLOG
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ACCESSORS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_INCLASS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ACCESSORS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NANITEDISPLACEDMESH_API UClass* StaticClass<class UNaniteDisplacedMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
