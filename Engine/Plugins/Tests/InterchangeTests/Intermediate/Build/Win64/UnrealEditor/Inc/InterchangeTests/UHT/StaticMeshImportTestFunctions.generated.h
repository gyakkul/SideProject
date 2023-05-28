// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/StaticMeshImportTestFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FColor;
struct FInterchangeTestFunctionResult;
struct FMeshBuildSettings;
struct FMeshNaniteSettings;
#ifdef INTERCHANGETESTS_StaticMeshImportTestFunctions_generated_h
#error "StaticMeshImportTestFunctions.generated.h already included, missing '#pragma once' in StaticMeshImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_StaticMeshImportTestFunctions_generated_h

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckNaniteSettings); \
	DECLARE_FUNCTION(execCheckBuildSettings); \
	DECLARE_FUNCTION(execCheckAgainstGroundTruth); \
	DECLARE_FUNCTION(execCheckSocketLocation); \
	DECLARE_FUNCTION(execCheckSocketName); \
	DECLARE_FUNCTION(execCheckSocketCount); \
	DECLARE_FUNCTION(execCheckSimpleCollisionPrimitiveCount); \
	DECLARE_FUNCTION(execCheckRenderUVChannelCount); \
	DECLARE_FUNCTION(execCheckUVChannelCount); \
	DECLARE_FUNCTION(execCheckPolygonCountInPolygonGroup); \
	DECLARE_FUNCTION(execCheckTriangleCountInPolygonGroup); \
	DECLARE_FUNCTION(execCheckThatMeshHasQuadsOrNgons); \
	DECLARE_FUNCTION(execCheckPolygonCount); \
	DECLARE_FUNCTION(execCheckRenderTriangleCount); \
	DECLARE_FUNCTION(execCheckTriangleCount); \
	DECLARE_FUNCTION(execCheckRenderHasVertexColors); \
	DECLARE_FUNCTION(execCheckRenderVertexIndexColor); \
	DECLARE_FUNCTION(execCheckRenderVertexIndexNormal); \
	DECLARE_FUNCTION(execCheckVertexIndexPosition); \
	DECLARE_FUNCTION(execCheckRenderVertexCount); \
	DECLARE_FUNCTION(execCheckVertexCount); \
	DECLARE_FUNCTION(execCheckSectionImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckSectionMaterialName); \
	DECLARE_FUNCTION(execCheckSectionMaterialIndex); \
	DECLARE_FUNCTION(execCheckPolygonGroupImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckPolygonGroupCount); \
	DECLARE_FUNCTION(execCheckImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckMaterialSlotCount); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckLodCount); \
	DECLARE_FUNCTION(execCheckImportedStaticMeshCount);


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckNaniteSettings); \
	DECLARE_FUNCTION(execCheckBuildSettings); \
	DECLARE_FUNCTION(execCheckAgainstGroundTruth); \
	DECLARE_FUNCTION(execCheckSocketLocation); \
	DECLARE_FUNCTION(execCheckSocketName); \
	DECLARE_FUNCTION(execCheckSocketCount); \
	DECLARE_FUNCTION(execCheckSimpleCollisionPrimitiveCount); \
	DECLARE_FUNCTION(execCheckRenderUVChannelCount); \
	DECLARE_FUNCTION(execCheckUVChannelCount); \
	DECLARE_FUNCTION(execCheckPolygonCountInPolygonGroup); \
	DECLARE_FUNCTION(execCheckTriangleCountInPolygonGroup); \
	DECLARE_FUNCTION(execCheckThatMeshHasQuadsOrNgons); \
	DECLARE_FUNCTION(execCheckPolygonCount); \
	DECLARE_FUNCTION(execCheckRenderTriangleCount); \
	DECLARE_FUNCTION(execCheckTriangleCount); \
	DECLARE_FUNCTION(execCheckRenderHasVertexColors); \
	DECLARE_FUNCTION(execCheckRenderVertexIndexColor); \
	DECLARE_FUNCTION(execCheckRenderVertexIndexNormal); \
	DECLARE_FUNCTION(execCheckVertexIndexPosition); \
	DECLARE_FUNCTION(execCheckRenderVertexCount); \
	DECLARE_FUNCTION(execCheckVertexCount); \
	DECLARE_FUNCTION(execCheckSectionImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckSectionMaterialName); \
	DECLARE_FUNCTION(execCheckSectionMaterialIndex); \
	DECLARE_FUNCTION(execCheckPolygonGroupImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckPolygonGroupCount); \
	DECLARE_FUNCTION(execCheckImportedMaterialSlotName); \
	DECLARE_FUNCTION(execCheckMaterialSlotCount); \
	DECLARE_FUNCTION(execCheckSectionCount); \
	DECLARE_FUNCTION(execCheckLodCount); \
	DECLARE_FUNCTION(execCheckImportedStaticMeshCount);


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_ACCESSORS
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshImportTestFunctions(); \
	friend struct Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshImportTestFunctions(); \
	friend struct Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshImportTestFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshImportTestFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshImportTestFunctions(UStaticMeshImportTestFunctions&&); \
	NO_API UStaticMeshImportTestFunctions(const UStaticMeshImportTestFunctions&); \
public: \
	NO_API virtual ~UStaticMeshImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshImportTestFunctions(UStaticMeshImportTestFunctions&&); \
	NO_API UStaticMeshImportTestFunctions(const UStaticMeshImportTestFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshImportTestFunctions) \
	NO_API virtual ~UStaticMeshImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_29_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_ACCESSORS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_INCLASS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_ACCESSORS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGETESTS_API UClass* StaticClass<class UStaticMeshImportTestFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h


#define FOREACH_ENUM_ESTATICMESHIMPORTTESTGROUNDTRUTHBITFLAGS(op) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckLodCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckVertexCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckTriangleCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckUVChannelCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckCollisionPrimitiveCountEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckVertexPositionsEqual) \
	op(EStaticMeshImportTestGroundTruthBitflags::CheckNormalsEqual) 

enum class EStaticMeshImportTestGroundTruthBitflags : uint32;
template<> struct TIsUEnumClass<EStaticMeshImportTestGroundTruthBitflags> { enum { Value = true }; };
template<> INTERCHANGETESTS_API UEnum* StaticEnum<EStaticMeshImportTestGroundTruthBitflags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
