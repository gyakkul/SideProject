// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepOperationsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UDataTable;
class UMaterialInterface;
class UObject;
class UStaticMesh;
class UTexture2D;
enum class EEditorScriptingStringMatchType : uint8;
enum class ERandomizeTransformReferenceFrame : uint8;
enum class ERandomizeTransformType : uint8;
enum class EScriptCollisionShapeType : uint8;
struct FStaticMeshReductionOptions;
#ifdef DATAPREPLIBRARIES_DataprepOperationsLibrary_generated_h
#error "DataprepOperationsLibrary.generated.h already included, missing '#pragma once' in DataprepOperationsLibrary.h"
#endif
#define DATAPREPLIBRARIES_DataprepOperationsLibrary_generated_h

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics; \
	DATAPREPLIBRARIES_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<struct FMaterialSubstitutionDataTable>();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics; \
	DATAPREPLIBRARIES_API static class UScriptStruct* StaticStruct();


template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<struct FMeshSubstitutionDataTable>();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLODGroupName_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<struct FLODGroupName>();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReductionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<struct FMeshReductionOptions>();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReductionArray_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<struct FMeshReductionArray>();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNaniteSettings); \
	DECLARE_FUNCTION(execResizeTextures); \
	DECLARE_FUNCTION(execSetCollisionComplexity); \
	DECLARE_FUNCTION(execAddToLayer); \
	DECLARE_FUNCTION(execSetSubOuputFolder); \
	DECLARE_FUNCTION(execSetSubOuputLevel); \
	DECLARE_FUNCTION(execFlipFaces); \
	DECLARE_FUNCTION(execRandomizeTransform); \
	DECLARE_FUNCTION(execConsolidateObjects); \
	DECLARE_FUNCTION(execAddMetadata); \
	DECLARE_FUNCTION(execAddTags); \
	DECLARE_FUNCTION(execSubstituteMeshesByTable); \
	DECLARE_FUNCTION(execSubstituteMesh); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLODGroup); \
	DECLARE_FUNCTION(execSubstituteMaterialsByTable); \
	DECLARE_FUNCTION(execSubstituteMaterial); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollision); \
	DECLARE_FUNCTION(execSetSimpleCollision); \
	DECLARE_FUNCTION(execSetLods);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNaniteSettings); \
	DECLARE_FUNCTION(execResizeTextures); \
	DECLARE_FUNCTION(execSetCollisionComplexity); \
	DECLARE_FUNCTION(execAddToLayer); \
	DECLARE_FUNCTION(execSetSubOuputFolder); \
	DECLARE_FUNCTION(execSetSubOuputLevel); \
	DECLARE_FUNCTION(execFlipFaces); \
	DECLARE_FUNCTION(execRandomizeTransform); \
	DECLARE_FUNCTION(execConsolidateObjects); \
	DECLARE_FUNCTION(execAddMetadata); \
	DECLARE_FUNCTION(execAddTags); \
	DECLARE_FUNCTION(execSubstituteMeshesByTable); \
	DECLARE_FUNCTION(execSubstituteMesh); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLODGroup); \
	DECLARE_FUNCTION(execSubstituteMaterialsByTable); \
	DECLARE_FUNCTION(execSubstituteMaterial); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollision); \
	DECLARE_FUNCTION(execSetSimpleCollision); \
	DECLARE_FUNCTION(execSetLods);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepOperationsLibrary(); \
	friend struct Z_Construct_UClass_UDataprepOperationsLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataprepOperationsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), NO_API) \
	DECLARE_SERIALIZER(UDataprepOperationsLibrary)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepOperationsLibrary(); \
	friend struct Z_Construct_UClass_UDataprepOperationsLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataprepOperationsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), NO_API) \
	DECLARE_SERIALIZER(UDataprepOperationsLibrary)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepOperationsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepOperationsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepOperationsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepOperationsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepOperationsLibrary(UDataprepOperationsLibrary&&); \
	NO_API UDataprepOperationsLibrary(const UDataprepOperationsLibrary&); \
public: \
	NO_API virtual ~UDataprepOperationsLibrary();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepOperationsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepOperationsLibrary(UDataprepOperationsLibrary&&); \
	NO_API UDataprepOperationsLibrary(const UDataprepOperationsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepOperationsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepOperationsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepOperationsLibrary) \
	NO_API virtual ~UDataprepOperationsLibrary();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_131_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_INCLASS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPLIBRARIES_API UClass* StaticClass<class UDataprepOperationsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h


#define FOREACH_ENUM_ERANDOMIZETRANSFORMTYPE(op) \
	op(ERandomizeTransformType::Rotation) \
	op(ERandomizeTransformType::Location) \
	op(ERandomizeTransformType::Scale) 

enum class ERandomizeTransformType : uint8;
template<> struct TIsUEnumClass<ERandomizeTransformType> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<ERandomizeTransformType>();

#define FOREACH_ENUM_ERANDOMIZETRANSFORMREFERENCEFRAME(op) \
	op(ERandomizeTransformReferenceFrame::World) \
	op(ERandomizeTransformReferenceFrame::Relative) 

enum class ERandomizeTransformReferenceFrame : uint8;
template<> struct TIsUEnumClass<ERandomizeTransformReferenceFrame> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<ERandomizeTransformReferenceFrame>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
