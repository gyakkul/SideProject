// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMrcFocalDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIXEDREALITYCAPTUREFRAMEWORK_IMrcFocalDriver_generated_h
#error "IMrcFocalDriver.generated.h already included, missing '#pragma once' in IMrcFocalDriver.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_IMrcFocalDriver_generated_h

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_RPC_WRAPPERS \
	virtual float GetHorizontalFieldOfView_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetHorizontalFieldOfView_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_ACCESSORS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcFocalDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcFocalDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcFocalDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcFocalDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMrcFocalDriver(UMrcFocalDriver&&); \
	NO_API UMrcFocalDriver(const UMrcFocalDriver&); \
public: \
	NO_API virtual ~UMrcFocalDriver();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcFocalDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMrcFocalDriver(UMrcFocalDriver&&); \
	NO_API UMrcFocalDriver(const UMrcFocalDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcFocalDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcFocalDriver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcFocalDriver) \
	NO_API virtual ~UMrcFocalDriver();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMrcFocalDriver(); \
	friend struct Z_Construct_UClass_UMrcFocalDriver_Statics; \
public: \
	DECLARE_CLASS(UMrcFocalDriver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(UMrcFocalDriver)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMrcFocalDriver() {} \
public: \
	typedef UMrcFocalDriver UClassType; \
	typedef IMrcFocalDriver ThisClass; \
	static float Execute_GetHorizontalFieldOfView(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IMrcFocalDriver() {} \
public: \
	typedef UMrcFocalDriver UClassType; \
	typedef IMrcFocalDriver ThisClass; \
	static float Execute_GetHorizontalFieldOfView(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<class UMrcFocalDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_IMrcFocalDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
