// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshVertexPainter/MeshVertexPainterKismetLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
enum class EVertexPaintAxis : uint8;
struct FLinearColor;
#ifdef ENGINE_MeshVertexPainterKismetLibrary_generated_h
#error "MeshVertexPainterKismetLibrary.generated.h already included, missing '#pragma once' in MeshVertexPainterKismetLibrary.h"
#endif
#define ENGINE_MeshVertexPainterKismetLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePaintedVertices); \
	DECLARE_FUNCTION(execPaintVerticesLerpAlongAxis); \
	DECLARE_FUNCTION(execPaintVerticesSingleColor);


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePaintedVertices); \
	DECLARE_FUNCTION(execPaintVerticesLerpAlongAxis); \
	DECLARE_FUNCTION(execPaintVerticesSingleColor);


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshVertexPainterKismetLibrary(); \
	friend struct Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics; \
public: \
	DECLARE_CLASS(UMeshVertexPainterKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMeshVertexPainterKismetLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMeshVertexPainterKismetLibrary(); \
	friend struct Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics; \
public: \
	DECLARE_CLASS(UMeshVertexPainterKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMeshVertexPainterKismetLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshVertexPainterKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshVertexPainterKismetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshVertexPainterKismetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshVertexPainterKismetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMeshVertexPainterKismetLibrary(UMeshVertexPainterKismetLibrary&&); \
	ENGINE_API UMeshVertexPainterKismetLibrary(const UMeshVertexPainterKismetLibrary&); \
public: \
	ENGINE_API virtual ~UMeshVertexPainterKismetLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMeshVertexPainterKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMeshVertexPainterKismetLibrary(UMeshVertexPainterKismetLibrary&&); \
	ENGINE_API UMeshVertexPainterKismetLibrary(const UMeshVertexPainterKismetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMeshVertexPainterKismetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshVertexPainterKismetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshVertexPainterKismetLibrary) \
	ENGINE_API virtual ~UMeshVertexPainterKismetLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshVertexPainterKismetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainterKismetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
