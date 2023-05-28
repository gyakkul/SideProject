// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubobjectDataBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UObject;
struct FSubobjectData;
struct FSubobjectDataHandle;
#ifdef SUBOBJECTDATAINTERFACE_SubobjectDataBlueprintFunctionLibrary_generated_h
#error "SubobjectDataBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in SubobjectDataBlueprintFunctionLibrary.h"
#endif
#define SUBOBJECTDATAINTERFACE_SubobjectDataBlueprintFunctionLibrary_generated_h

#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActor); \
	DECLARE_FUNCTION(execIsRootActor); \
	DECLARE_FUNCTION(execIsChildActor); \
	DECLARE_FUNCTION(execIsComponent); \
	DECLARE_FUNCTION(execIsDefaultSceneRoot); \
	DECLARE_FUNCTION(execIsRootComponent); \
	DECLARE_FUNCTION(execIsSceneComponent); \
	DECLARE_FUNCTION(execIsInheritedComponent); \
	DECLARE_FUNCTION(execIsNativeComponent); \
	DECLARE_FUNCTION(execIsInstancedActor); \
	DECLARE_FUNCTION(execIsInstancedComponent); \
	DECLARE_FUNCTION(execGetBlueprint); \
	DECLARE_FUNCTION(execGetObjectForBlueprint); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execCanRename); \
	DECLARE_FUNCTION(execCanReparent); \
	DECLARE_FUNCTION(execCanCopy); \
	DECLARE_FUNCTION(execCanDuplicate); \
	DECLARE_FUNCTION(execCanDelete); \
	DECLARE_FUNCTION(execCanEdit); \
	DECLARE_FUNCTION(execIsAttachedTo); \
	DECLARE_FUNCTION(execGetVariableName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetHandle); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execIsHandleValid); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActor); \
	DECLARE_FUNCTION(execIsRootActor); \
	DECLARE_FUNCTION(execIsChildActor); \
	DECLARE_FUNCTION(execIsComponent); \
	DECLARE_FUNCTION(execIsDefaultSceneRoot); \
	DECLARE_FUNCTION(execIsRootComponent); \
	DECLARE_FUNCTION(execIsSceneComponent); \
	DECLARE_FUNCTION(execIsInheritedComponent); \
	DECLARE_FUNCTION(execIsNativeComponent); \
	DECLARE_FUNCTION(execIsInstancedActor); \
	DECLARE_FUNCTION(execIsInstancedComponent); \
	DECLARE_FUNCTION(execGetBlueprint); \
	DECLARE_FUNCTION(execGetObjectForBlueprint); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execCanRename); \
	DECLARE_FUNCTION(execCanReparent); \
	DECLARE_FUNCTION(execCanCopy); \
	DECLARE_FUNCTION(execCanDuplicate); \
	DECLARE_FUNCTION(execCanDelete); \
	DECLARE_FUNCTION(execCanEdit); \
	DECLARE_FUNCTION(execIsAttachedTo); \
	DECLARE_FUNCTION(execGetVariableName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetHandle); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execIsHandleValid); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectDataBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USubobjectDataBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubobjectDataInterface"), NO_API) \
	DECLARE_SERIALIZER(USubobjectDataBlueprintFunctionLibrary)


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSubobjectDataBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USubobjectDataBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubobjectDataInterface"), NO_API) \
	DECLARE_SERIALIZER(USubobjectDataBlueprintFunctionLibrary)


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectDataBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectDataBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectDataBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectDataBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubobjectDataBlueprintFunctionLibrary(USubobjectDataBlueprintFunctionLibrary&&); \
	NO_API USubobjectDataBlueprintFunctionLibrary(const USubobjectDataBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~USubobjectDataBlueprintFunctionLibrary();


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectDataBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubobjectDataBlueprintFunctionLibrary(USubobjectDataBlueprintFunctionLibrary&&); \
	NO_API USubobjectDataBlueprintFunctionLibrary(const USubobjectDataBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectDataBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectDataBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectDataBlueprintFunctionLibrary) \
	NO_API virtual ~USubobjectDataBlueprintFunctionLibrary();


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_24_PROLOG
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_INCLASS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBOBJECTDATAINTERFACE_API UClass* StaticClass<class USubobjectDataBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
