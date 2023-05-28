// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImagePlateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FImagePlateParameters;
#ifdef IMAGEPLATE_ImagePlateComponent_generated_h
#error "ImagePlateComponent.generated.h already included, missing '#pragma once' in ImagePlateComponent.h"
#endif
#define IMAGEPLATE_ImagePlateComponent_generated_h

#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImagePlateParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IMAGEPLATE_API UScriptStruct* StaticStruct<struct FImagePlateParameters>();

#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRenderTextureChanged); \
	DECLARE_FUNCTION(execGetPlate); \
	DECLARE_FUNCTION(execSetImagePlate);


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRenderTextureChanged); \
	DECLARE_FUNCTION(execGetPlate); \
	DECLARE_FUNCTION(execSetImagePlate);


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_ACCESSORS
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImagePlateComponent(); \
	friend struct Z_Construct_UClass_UImagePlateComponent_Statics; \
public: \
	DECLARE_CLASS(UImagePlateComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImagePlate"), NO_API) \
	DECLARE_SERIALIZER(UImagePlateComponent)


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUImagePlateComponent(); \
	friend struct Z_Construct_UClass_UImagePlateComponent_Statics; \
public: \
	DECLARE_CLASS(UImagePlateComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImagePlate"), NO_API) \
	DECLARE_SERIALIZER(UImagePlateComponent)


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImagePlateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImagePlateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImagePlateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImagePlateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImagePlateComponent(UImagePlateComponent&&); \
	NO_API UImagePlateComponent(const UImagePlateComponent&); \
public: \
	NO_API virtual ~UImagePlateComponent();


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImagePlateComponent(UImagePlateComponent&&); \
	NO_API UImagePlateComponent(const UImagePlateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImagePlateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImagePlateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImagePlateComponent) \
	NO_API virtual ~UImagePlateComponent();


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_ACCESSORS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_INCLASS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_ACCESSORS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_60_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGEPLATE_API UClass* StaticClass<class UImagePlateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
