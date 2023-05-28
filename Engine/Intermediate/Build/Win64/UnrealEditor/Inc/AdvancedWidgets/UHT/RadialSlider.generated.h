// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RadialSlider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FRuntimeFloatCurve;
#ifdef ADVANCEDWIDGETS_RadialSlider_generated_h
#error "RadialSlider.generated.h already included, missing '#pragma once' in RadialSlider.h"
#endif
#define ADVANCEDWIDGETS_RadialSlider_generated_h

#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_SPARSE_DATA
#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetShowSliderHand); \
	DECLARE_FUNCTION(execSetShowSliderHandle); \
	DECLARE_FUNCTION(execSetUseVerticalDrag); \
	DECLARE_FUNCTION(execSetCenterBackgroundColor); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderProgressColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetHandStartEndRatio); \
	DECLARE_FUNCTION(execSetAngularOffset); \
	DECLARE_FUNCTION(execSetSliderHandleEndAngle); \
	DECLARE_FUNCTION(execSetSliderHandleStartAngle); \
	DECLARE_FUNCTION(execSetValueTags); \
	DECLARE_FUNCTION(execSetSliderRange); \
	DECLARE_FUNCTION(execSetCustomDefaultValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetNormalizedSliderHandlePosition); \
	DECLARE_FUNCTION(execGetCustomDefaultValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetShowSliderHand); \
	DECLARE_FUNCTION(execSetShowSliderHandle); \
	DECLARE_FUNCTION(execSetUseVerticalDrag); \
	DECLARE_FUNCTION(execSetCenterBackgroundColor); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderProgressColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetHandStartEndRatio); \
	DECLARE_FUNCTION(execSetAngularOffset); \
	DECLARE_FUNCTION(execSetSliderHandleEndAngle); \
	DECLARE_FUNCTION(execSetSliderHandleStartAngle); \
	DECLARE_FUNCTION(execSetValueTags); \
	DECLARE_FUNCTION(execSetSliderRange); \
	DECLARE_FUNCTION(execSetCustomDefaultValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetNormalizedSliderHandlePosition); \
	DECLARE_FUNCTION(execGetCustomDefaultValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_ACCESSORS
#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadialSlider(); \
	friend struct Z_Construct_UClass_URadialSlider_Statics; \
public: \
	DECLARE_CLASS(URadialSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedWidgets"), NO_API) \
	DECLARE_SERIALIZER(URadialSlider)


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_INCLASS \
private: \
	static void StaticRegisterNativesURadialSlider(); \
	friend struct Z_Construct_UClass_URadialSlider_Statics; \
public: \
	DECLARE_CLASS(URadialSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedWidgets"), NO_API) \
	DECLARE_SERIALIZER(URadialSlider)


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialSlider(URadialSlider&&); \
	NO_API URadialSlider(const URadialSlider&); \
public: \
	NO_API virtual ~URadialSlider();


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialSlider(URadialSlider&&); \
	NO_API URadialSlider(const URadialSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialSlider) \
	NO_API virtual ~URadialSlider();


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_26_PROLOG
#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_INCLASS \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RadialSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDWIDGETS_API UClass* StaticClass<class URadialSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
