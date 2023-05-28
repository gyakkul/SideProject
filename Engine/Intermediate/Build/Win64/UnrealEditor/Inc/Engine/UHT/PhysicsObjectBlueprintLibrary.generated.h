// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsObjectBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FClosestPhysicsObjectResult;
#ifdef ENGINE_PhysicsObjectBlueprintLibrary_generated_h
#error "PhysicsObjectBlueprintLibrary.generated.h already included, missing '#pragma once' in PhysicsObjectBlueprintLibrary.h"
#endif
#define ENGINE_PhysicsObjectBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPhysicsObjectWorldTransform); \
	DECLARE_FUNCTION(execExtractClosestPhysicsObjectResults); \
	DECLARE_FUNCTION(execGetClosestPhysicsObjectFromWorldLocation);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPhysicsObjectWorldTransform); \
	DECLARE_FUNCTION(execExtractClosestPhysicsObjectResults); \
	DECLARE_FUNCTION(execGetClosestPhysicsObjectFromWorldLocation);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsObjectBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPhysicsObjectBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsObjectBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsObjectBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPhysicsObjectBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsObjectBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsObjectBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsObjectBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsObjectBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsObjectBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsObjectBlueprintLibrary(UPhysicsObjectBlueprintLibrary&&); \
	NO_API UPhysicsObjectBlueprintLibrary(const UPhysicsObjectBlueprintLibrary&); \
public: \
	NO_API virtual ~UPhysicsObjectBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsObjectBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsObjectBlueprintLibrary(UPhysicsObjectBlueprintLibrary&&); \
	NO_API UPhysicsObjectBlueprintLibrary(const UPhysicsObjectBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsObjectBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsObjectBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsObjectBlueprintLibrary) \
	NO_API virtual ~UPhysicsObjectBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsObjectBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
