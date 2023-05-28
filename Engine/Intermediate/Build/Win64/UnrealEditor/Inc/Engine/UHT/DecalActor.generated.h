// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DecalActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef ENGINE_DecalActor_generated_h
#error "DecalActor.generated.h already included, missing '#pragma once' in DecalActor.h"
#endif
#define ENGINE_DecalActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetDecalMaterial); \
	DECLARE_FUNCTION(execSetDecalMaterial);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ADecalActor, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecalActor(); \
	friend struct Z_Construct_UClass_ADecalActor_Statics; \
public: \
	DECLARE_CLASS(ADecalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADecalActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesADecalActor(); \
	friend struct Z_Construct_UClass_ADecalActor_Statics; \
public: \
	DECLARE_CLASS(ADecalActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADecalActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecalActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecalActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecalActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecalActor(ADecalActor&&); \
	NO_API ADecalActor(const ADecalActor&); \
public: \
	NO_API virtual ~ADecalActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecalActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecalActor(ADecalActor&&); \
	NO_API ADecalActor(const ADecalActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecalActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecalActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecalActor) \
	NO_API virtual ~ADecalActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DecalActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADecalActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
