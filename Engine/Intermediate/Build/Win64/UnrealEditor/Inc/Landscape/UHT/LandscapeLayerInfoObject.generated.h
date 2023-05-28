// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeLayerInfoObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeLayerInfoObject_generated_h
#error "LandscapeLayerInfoObject.generated.h already included, missing '#pragma once' in LandscapeLayerInfoObject.h"
#endif
#define LANDSCAPE_LandscapeLayerInfoObject_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeLayerInfoObject(); \
	friend struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics; \
public: \
	DECLARE_CLASS(ULandscapeLayerInfoObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeLayerInfoObject)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeLayerInfoObject(); \
	friend struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics; \
public: \
	DECLARE_CLASS(ULandscapeLayerInfoObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeLayerInfoObject)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeLayerInfoObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLayerInfoObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeLayerInfoObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLayerInfoObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeLayerInfoObject(ULandscapeLayerInfoObject&&); \
	LANDSCAPE_API ULandscapeLayerInfoObject(const ULandscapeLayerInfoObject&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeLayerInfoObject();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeLayerInfoObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeLayerInfoObject(ULandscapeLayerInfoObject&&); \
	LANDSCAPE_API ULandscapeLayerInfoObject(const ULandscapeLayerInfoObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeLayerInfoObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLayerInfoObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLayerInfoObject) \
	LANDSCAPE_API virtual ~ULandscapeLayerInfoObject();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_23_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeLayerInfoObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeLayerInfoObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h


#define FOREACH_ENUM_ESPLINEMODULATIONCOLORMASK(op) \
	op(ESplineModulationColorMask::Red) \
	op(ESplineModulationColorMask::Green) \
	op(ESplineModulationColorMask::Blue) \
	op(ESplineModulationColorMask::Alpha) 

enum class ESplineModulationColorMask : uint8;
template<> struct TIsUEnumClass<ESplineModulationColorMask> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ESplineModulationColorMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
