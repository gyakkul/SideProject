// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGeometryCollectionHistogram.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_SGeometryCollectionHistogram_generated_h
#error "SGeometryCollectionHistogram.generated.h already included, missing '#pragma once' in SGeometryCollectionHistogram.h"
#endif
#define FRACTUREEDITOR_SGeometryCollectionHistogram_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHistogramSettings(); \
	friend struct Z_Construct_UClass_UHistogramSettings_Statics; \
public: \
	DECLARE_CLASS(UHistogramSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UHistogramSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHistogramSettings(); \
	friend struct Z_Construct_UClass_UHistogramSettings_Statics; \
public: \
	DECLARE_CLASS(UHistogramSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UHistogramSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHistogramSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHistogramSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHistogramSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHistogramSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHistogramSettings(UHistogramSettings&&); \
	NO_API UHistogramSettings(const UHistogramSettings&); \
public: \
	NO_API virtual ~UHistogramSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHistogramSettings(UHistogramSettings&&); \
	NO_API UHistogramSettings(const UHistogramSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHistogramSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHistogramSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHistogramSettings) \
	NO_API virtual ~UHistogramSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UHistogramSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h


#define FOREACH_ENUM_EINSPECTEDATTRIBUTEENUM(op) \
	op(EInspectedAttributeEnum::Volume) \
	op(EInspectedAttributeEnum::Level) \
	op(EInspectedAttributeEnum::InitialDynamicState) \
	op(EInspectedAttributeEnum::Size) 

enum class EInspectedAttributeEnum : uint8;
template<> struct TIsUEnumClass<EInspectedAttributeEnum> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EInspectedAttributeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
