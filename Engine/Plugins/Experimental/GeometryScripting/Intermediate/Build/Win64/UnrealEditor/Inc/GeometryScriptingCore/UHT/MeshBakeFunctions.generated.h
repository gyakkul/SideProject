// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBakeFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDynamicMesh;
class UGeometryScriptDebug;
class UTexture2D;
enum class EGeometryScriptBakeCurvatureClampMode : uint8;
enum class EGeometryScriptBakeCurvatureColorMode : uint8;
enum class EGeometryScriptBakeCurvatureTypeMode : uint8;
struct FGeometryScriptBakeOutputType;
struct FGeometryScriptBakeRenderCaptureOptions;
struct FGeometryScriptBakeSourceMeshOptions;
struct FGeometryScriptBakeTargetMeshOptions;
struct FGeometryScriptBakeTextureOptions;
struct FGeometryScriptBakeTypeOptions;
struct FGeometryScriptBakeVertexOptions;
struct FGeometryScriptRenderCaptureTextures;
#ifdef GEOMETRYSCRIPTINGCORE_MeshBakeFunctions_generated_h
#error "MeshBakeFunctions.generated.h already included, missing '#pragma once' in MeshBakeFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBakeFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeTypeOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeTypeOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeTextureOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeTextureOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeVertexOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeVertexOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeOutputType_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeOutputType>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_278_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeTargetMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeTargetMeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_287_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeSourceMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeSourceMeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBakeRenderCaptureOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_377_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRenderCaptureTextures>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBakeTextureFromRenderCaptures); \
	DECLARE_FUNCTION(execBakeVertex); \
	DECLARE_FUNCTION(execBakeTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeMaterialID); \
	DECLARE_FUNCTION(execMakeBakeTypeVertexColor); \
	DECLARE_FUNCTION(execMakeBakeTypeMultiTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeAmbientOcclusion); \
	DECLARE_FUNCTION(execMakeBakeTypeCurvature); \
	DECLARE_FUNCTION(execMakeBakeTypePosition); \
	DECLARE_FUNCTION(execMakeBakeTypeBentNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeFaceNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeObjectNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeTangentNormal);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBakeTextureFromRenderCaptures); \
	DECLARE_FUNCTION(execBakeVertex); \
	DECLARE_FUNCTION(execBakeTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeMaterialID); \
	DECLARE_FUNCTION(execMakeBakeTypeVertexColor); \
	DECLARE_FUNCTION(execMakeBakeTypeMultiTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeTexture); \
	DECLARE_FUNCTION(execMakeBakeTypeAmbientOcclusion); \
	DECLARE_FUNCTION(execMakeBakeTypeCurvature); \
	DECLARE_FUNCTION(execMakeBakeTypePosition); \
	DECLARE_FUNCTION(execMakeBakeTypeBentNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeFaceNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeObjectNormal); \
	DECLARE_FUNCTION(execMakeBakeTypeTangentNormal);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBakeFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBakeFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBakeFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBakeFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBakeFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBakeFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBakeFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBakeFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBakeFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBakeFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBakeFunctions(UGeometryScriptLibrary_MeshBakeFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBakeFunctions(const UGeometryScriptLibrary_MeshBakeFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshBakeFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBakeFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBakeFunctions(UGeometryScriptLibrary_MeshBakeFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBakeFunctions(const UGeometryScriptLibrary_MeshBakeFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBakeFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBakeFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBakeFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshBakeFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_434_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h_437_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshBakeFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBakeFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKERESOLUTION(op) \
	op(EGeometryScriptBakeResolution::Resolution16) \
	op(EGeometryScriptBakeResolution::Resolution32) \
	op(EGeometryScriptBakeResolution::Resolution64) \
	op(EGeometryScriptBakeResolution::Resolution128) \
	op(EGeometryScriptBakeResolution::Resolution256) \
	op(EGeometryScriptBakeResolution::Resolution512) \
	op(EGeometryScriptBakeResolution::Resolution1024) \
	op(EGeometryScriptBakeResolution::Resolution2048) \
	op(EGeometryScriptBakeResolution::Resolution4096) \
	op(EGeometryScriptBakeResolution::Resolution8192) 

enum class EGeometryScriptBakeResolution : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeResolution> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeResolution>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEBITDEPTH(op) \
	op(EGeometryScriptBakeBitDepth::ChannelBits8) \
	op(EGeometryScriptBakeBitDepth::ChannelBits16) 

enum class EGeometryScriptBakeBitDepth : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeBitDepth> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeBitDepth>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKESAMPLESPERPIXEL(op) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample1) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample4) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample16) \
	op(EGeometryScriptBakeSamplesPerPixel::Sample64) \
	op(EGeometryScriptBakeSamplesPerPixel::Samples256) 

enum class EGeometryScriptBakeSamplesPerPixel : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeSamplesPerPixel> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeSamplesPerPixel>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKETYPES(op) \
	op(EGeometryScriptBakeTypes::TangentSpaceNormal) \
	op(EGeometryScriptBakeTypes::ObjectSpaceNormal) \
	op(EGeometryScriptBakeTypes::FaceNormal) \
	op(EGeometryScriptBakeTypes::BentNormal) \
	op(EGeometryScriptBakeTypes::Position) \
	op(EGeometryScriptBakeTypes::Curvature) \
	op(EGeometryScriptBakeTypes::AmbientOcclusion) \
	op(EGeometryScriptBakeTypes::Texture) \
	op(EGeometryScriptBakeTypes::MultiTexture) \
	op(EGeometryScriptBakeTypes::VertexColor) \
	op(EGeometryScriptBakeTypes::MaterialID) 

enum class EGeometryScriptBakeTypes : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeTypes> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeTypes>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKEOUTPUTMODE(op) \
	op(EGeometryScriptBakeOutputMode::RGBA) \
	op(EGeometryScriptBakeOutputMode::PerChannel) 

enum class EGeometryScriptBakeOutputMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeOutputMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeOutputMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKENORMALSPACE(op) \
	op(EGeometryScriptBakeNormalSpace::Tangent) \
	op(EGeometryScriptBakeNormalSpace::Object) 

enum class EGeometryScriptBakeNormalSpace : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeNormalSpace> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeNormalSpace>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKECURVATURETYPEMODE(op) \
	op(EGeometryScriptBakeCurvatureTypeMode::Mean) \
	op(EGeometryScriptBakeCurvatureTypeMode::Max) \
	op(EGeometryScriptBakeCurvatureTypeMode::Min) \
	op(EGeometryScriptBakeCurvatureTypeMode::Gaussian) 

enum class EGeometryScriptBakeCurvatureTypeMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeCurvatureTypeMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureTypeMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKECURVATURECOLORMODE(op) \
	op(EGeometryScriptBakeCurvatureColorMode::Grayscale) \
	op(EGeometryScriptBakeCurvatureColorMode::RedBlue) \
	op(EGeometryScriptBakeCurvatureColorMode::RedGreenBlue) 

enum class EGeometryScriptBakeCurvatureColorMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeCurvatureColorMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureColorMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTBAKECURVATURECLAMPMODE(op) \
	op(EGeometryScriptBakeCurvatureClampMode::None) \
	op(EGeometryScriptBakeCurvatureClampMode::OnlyPositive) \
	op(EGeometryScriptBakeCurvatureClampMode::OnlyNegative) 

enum class EGeometryScriptBakeCurvatureClampMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBakeCurvatureClampMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBakeCurvatureClampMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
