// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/TextureMapFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryScriptDebug;
class UTexture2D;
class UTextureRenderTarget2D;
struct FGeometryScriptColorList;
struct FGeometryScriptSampleTextureOptions;
struct FGeometryScriptUVList;
#ifdef GEOMETRYSCRIPTINGCORE_TextureMapFunctions_generated_h
#error "TextureMapFunctions.generated.h already included, missing '#pragma once' in TextureMapFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_TextureMapFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSampleTextureOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSampleTextureOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSampleTextureRenderTarget2DAtUVPositions); \
	DECLARE_FUNCTION(execSampleTexture2DAtUVPositions);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSampleTextureRenderTarget2DAtUVPositions); \
	DECLARE_FUNCTION(execSampleTexture2DAtUVPositions);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_TextureMapFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_TextureMapFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_TextureMapFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_TextureMapFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_TextureMapFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_TextureMapFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_TextureMapFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_TextureMapFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_TextureMapFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_TextureMapFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_TextureMapFunctions(UGeometryScriptLibrary_TextureMapFunctions&&); \
	NO_API UGeometryScriptLibrary_TextureMapFunctions(const UGeometryScriptLibrary_TextureMapFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_TextureMapFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_TextureMapFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_TextureMapFunctions(UGeometryScriptLibrary_TextureMapFunctions&&); \
	NO_API UGeometryScriptLibrary_TextureMapFunctions(const UGeometryScriptLibrary_TextureMapFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_TextureMapFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_TextureMapFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_TextureMapFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_TextureMapFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_TextureMapFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_TextureMapFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTPIXELSAMPLINGMETHOD(op) \
	op(EGeometryScriptPixelSamplingMethod::Bilinear) \
	op(EGeometryScriptPixelSamplingMethod::Nearest) 

enum class EGeometryScriptPixelSamplingMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPixelSamplingMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPixelSamplingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
