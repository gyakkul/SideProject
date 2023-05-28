// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KismetProceduralMeshLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UProceduralMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
enum class EProcMeshSliceCapOption : uint8;
struct FProcMeshTangent;
#ifdef PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h
#error "KismetProceduralMeshLibrary.generated.h already included, missing '#pragma once' in KismetProceduralMeshLibrary.h"
#endif
#define PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h

#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_ACCESSORS
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetProceduralMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&); \
	NO_API UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&); \
public: \
	NO_API virtual ~UKismetProceduralMeshLibrary();


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&); \
	NO_API UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetProceduralMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary) \
	NO_API virtual ~UKismetProceduralMeshLibrary();


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_ACCESSORS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_INCLASS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_ACCESSORS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UKismetProceduralMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h


#define FOREACH_ENUM_EPROCMESHSLICECAPOPTION(op) \
	op(EProcMeshSliceCapOption::NoCap) \
	op(EProcMeshSliceCapOption::CreateNewSectionForCap) \
	op(EProcMeshSliceCapOption::UseLastSectionForCap) 

enum class EProcMeshSliceCapOption : uint8;
template<> struct TIsUEnumClass<EProcMeshSliceCapOption> { enum { Value = true }; };
template<> PROCEDURALMESHCOMPONENT_API UEnum* StaticEnum<EProcMeshSliceCapOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
