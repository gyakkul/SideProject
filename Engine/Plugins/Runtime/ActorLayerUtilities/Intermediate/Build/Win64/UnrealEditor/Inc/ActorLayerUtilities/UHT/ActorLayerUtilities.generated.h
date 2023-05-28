// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorLayerUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FActorLayer;
#ifdef ACTORLAYERUTILITIES_ActorLayerUtilities_generated_h
#error "ActorLayerUtilities.generated.h already included, missing '#pragma once' in ActorLayerUtilities.h"
#endif
#define ACTORLAYERUTILITIES_ActorLayerUtilities_generated_h

#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorLayer_Statics; \
	ACTORLAYERUTILITIES_API static class UScriptStruct* StaticStruct();


template<> ACTORLAYERUTILITIES_API UScriptStruct* StaticStruct<struct FActorLayer>();

#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveActorFromLayer); \
	DECLARE_FUNCTION(execAddActorToLayer); \
	DECLARE_FUNCTION(execGetActors);


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveActorFromLayer); \
	DECLARE_FUNCTION(execAddActorToLayer); \
	DECLARE_FUNCTION(execGetActors);


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ACCESSORS
#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayersBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULayersBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLayerUtilities"), NO_API) \
	DECLARE_SERIALIZER(ULayersBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_INCLASS \
private: \
	static void StaticRegisterNativesULayersBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULayersBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLayerUtilities"), NO_API) \
	DECLARE_SERIALIZER(ULayersBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayersBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayersBlueprintLibrary(ULayersBlueprintLibrary&&); \
	NO_API ULayersBlueprintLibrary(const ULayersBlueprintLibrary&); \
public: \
	NO_API virtual ~ULayersBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayersBlueprintLibrary(ULayersBlueprintLibrary&&); \
	NO_API ULayersBlueprintLibrary(const ULayersBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayersBlueprintLibrary) \
	NO_API virtual ~ULayersBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ACCESSORS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ACCESSORS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORLAYERUTILITIES_API UClass* StaticClass<class ULayersBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
