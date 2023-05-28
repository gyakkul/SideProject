// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantManagerBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALevelVariantSetsActor;
class ULevelVariantSets;
class UObject;
class UPropertyValue;
class UVariant;
class UVariantSet;
struct FColor;
struct FLinearColor;
struct FVariantDependency;
#ifdef VARIANTMANAGER_VariantManagerBlueprintLibrary_generated_h
#error "VariantManagerBlueprintLibrary.generated.h already included, missing '#pragma once' in VariantManagerBlueprintLibrary.h"
#endif
#define VARIANTMANAGER_VariantManagerBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValueIntPoint); \
	DECLARE_FUNCTION(execSetValueIntPoint); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector4); \
	DECLARE_FUNCTION(execSetValueVector4); \
	DECLARE_FUNCTION(execGetValueQuat); \
	DECLARE_FUNCTION(execSetValueQuat); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execGetValueObject); \
	DECLARE_FUNCTION(execSetValueObject); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execGetValueInt); \
	DECLARE_FUNCTION(execSetValueInt); \
	DECLARE_FUNCTION(execGetValueBool); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetPropertyTypeString); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execRecord); \
	DECLARE_FUNCTION(execRemoveCapturedPropertyByName); \
	DECLARE_FUNCTION(execRemoveActorBindingByName); \
	DECLARE_FUNCTION(execRemoveVariantByName); \
	DECLARE_FUNCTION(execRemoveVariantSetByName); \
	DECLARE_FUNCTION(execRemoveCapturedProperty); \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execRemoveVariant); \
	DECLARE_FUNCTION(execRemoveVariantSet); \
	DECLARE_FUNCTION(execGetCapturedProperties); \
	DECLARE_FUNCTION(execDeleteDependency); \
	DECLARE_FUNCTION(execSetDependency); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execCaptureProperty); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execAddVariant); \
	DECLARE_FUNCTION(execAddVariantSet); \
	DECLARE_FUNCTION(execGetCapturableProperties); \
	DECLARE_FUNCTION(execCreateLevelVariantSetsActor); \
	DECLARE_FUNCTION(execCreateLevelVariantSetsAsset);


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValueIntPoint); \
	DECLARE_FUNCTION(execSetValueIntPoint); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector4); \
	DECLARE_FUNCTION(execSetValueVector4); \
	DECLARE_FUNCTION(execGetValueQuat); \
	DECLARE_FUNCTION(execSetValueQuat); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execGetValueObject); \
	DECLARE_FUNCTION(execSetValueObject); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execGetValueInt); \
	DECLARE_FUNCTION(execSetValueInt); \
	DECLARE_FUNCTION(execGetValueBool); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetPropertyTypeString); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execRecord); \
	DECLARE_FUNCTION(execRemoveCapturedPropertyByName); \
	DECLARE_FUNCTION(execRemoveActorBindingByName); \
	DECLARE_FUNCTION(execRemoveVariantByName); \
	DECLARE_FUNCTION(execRemoveVariantSetByName); \
	DECLARE_FUNCTION(execRemoveCapturedProperty); \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execRemoveVariant); \
	DECLARE_FUNCTION(execRemoveVariantSet); \
	DECLARE_FUNCTION(execGetCapturedProperties); \
	DECLARE_FUNCTION(execDeleteDependency); \
	DECLARE_FUNCTION(execSetDependency); \
	DECLARE_FUNCTION(execAddDependency); \
	DECLARE_FUNCTION(execCaptureProperty); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execAddVariant); \
	DECLARE_FUNCTION(execAddVariantSet); \
	DECLARE_FUNCTION(execGetCapturableProperties); \
	DECLARE_FUNCTION(execCreateLevelVariantSetsActor); \
	DECLARE_FUNCTION(execCreateLevelVariantSetsAsset);


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_ACCESSORS
#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVariantManagerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVariantManagerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManager"), NO_API) \
	DECLARE_SERIALIZER(UVariantManagerBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUVariantManagerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVariantManagerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManager"), NO_API) \
	DECLARE_SERIALIZER(UVariantManagerBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantManagerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantManagerBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantManagerBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantManagerBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariantManagerBlueprintLibrary(UVariantManagerBlueprintLibrary&&); \
	NO_API UVariantManagerBlueprintLibrary(const UVariantManagerBlueprintLibrary&); \
public: \
	NO_API virtual ~UVariantManagerBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantManagerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariantManagerBlueprintLibrary(UVariantManagerBlueprintLibrary&&); \
	NO_API UVariantManagerBlueprintLibrary(const UVariantManagerBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantManagerBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantManagerBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantManagerBlueprintLibrary) \
	NO_API virtual ~UVariantManagerBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_23_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_ACCESSORS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_ACCESSORS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VariantManagerBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGER_API UClass* StaticClass<class UVariantManagerBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
