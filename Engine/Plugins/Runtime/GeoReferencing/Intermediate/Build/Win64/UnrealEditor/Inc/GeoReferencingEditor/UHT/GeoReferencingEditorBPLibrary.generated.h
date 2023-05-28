// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoReferencingEditorBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef GEOREFERENCINGEDITOR_GeoReferencingEditorBPLibrary_generated_h
#error "GeoReferencingEditorBPLibrary.generated.h already included, missing '#pragma once' in GeoReferencingEditorBPLibrary.h"
#endif
#define GEOREFERENCINGEDITOR_GeoReferencingEditorBPLibrary_generated_h

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLineTrace); \
	DECLARE_FUNCTION(execLineTraceViewport); \
	DECLARE_FUNCTION(execGetViewportCursorInformation); \
	DECLARE_FUNCTION(execGetViewportCursorLocation);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLineTrace); \
	DECLARE_FUNCTION(execLineTraceViewport); \
	DECLARE_FUNCTION(execGetViewportCursorInformation); \
	DECLARE_FUNCTION(execGetViewportCursorLocation);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeoReferencingEditorBPLibrary(); \
	friend struct Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGeoReferencingEditorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencingEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeoReferencingEditorBPLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGeoReferencingEditorBPLibrary(); \
	friend struct Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGeoReferencingEditorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencingEditor"), NO_API) \
	DECLARE_SERIALIZER(UGeoReferencingEditorBPLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeoReferencingEditorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoReferencingEditorBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoReferencingEditorBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoReferencingEditorBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeoReferencingEditorBPLibrary(UGeoReferencingEditorBPLibrary&&); \
	NO_API UGeoReferencingEditorBPLibrary(const UGeoReferencingEditorBPLibrary&); \
public: \
	NO_API virtual ~UGeoReferencingEditorBPLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeoReferencingEditorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeoReferencingEditorBPLibrary(UGeoReferencingEditorBPLibrary&&); \
	NO_API UGeoReferencingEditorBPLibrary(const UGeoReferencingEditorBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoReferencingEditorBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoReferencingEditorBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoReferencingEditorBPLibrary) \
	NO_API virtual ~UGeoReferencingEditorBPLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOREFERENCINGEDITOR_API UClass* StaticClass<class UGeoReferencingEditorBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
