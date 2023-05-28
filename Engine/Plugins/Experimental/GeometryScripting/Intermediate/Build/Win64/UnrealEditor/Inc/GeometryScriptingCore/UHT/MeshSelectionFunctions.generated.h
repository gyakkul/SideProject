// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSelectionFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
enum class EGeometryScriptCombineSelectionMode : uint8;
enum class EGeometryScriptIndexType : uint8;
enum class EGeometryScriptMeshSelectionType : uint8;
enum class EGeometryScriptTopologyConnectionType : uint8;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;
#ifdef GEOMETRYSCRIPTINGCORE_MeshSelectionFunctions_generated_h
#error "MeshSelectionFunctions.generated.h already included, missing '#pragma once' in MeshSelectionFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSelectionFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExpandContractMeshSelection); \
	DECLARE_FUNCTION(execExpandMeshSelectionToConnected); \
	DECLARE_FUNCTION(execInvertMeshSelection); \
	DECLARE_FUNCTION(execSelectMeshElementsInsideMesh); \
	DECLARE_FUNCTION(execSelectMeshElementsByNormalAngle); \
	DECLARE_FUNCTION(execSelectMeshElementsWithPlane); \
	DECLARE_FUNCTION(execSelectMeshElementsInSphere); \
	DECLARE_FUNCTION(execSelectMeshElementsInBox); \
	DECLARE_FUNCTION(execConvertMeshSelectionToIndexList); \
	DECLARE_FUNCTION(execConvertIndexListToMeshSelection); \
	DECLARE_FUNCTION(execConvertMeshSelectionToIndexArray); \
	DECLARE_FUNCTION(execConvertIndexSetToMeshSelection); \
	DECLARE_FUNCTION(execConvertIndexArrayToMeshSelection); \
	DECLARE_FUNCTION(execCombineMeshSelections); \
	DECLARE_FUNCTION(execConvertMeshSelection); \
	DECLARE_FUNCTION(execCreateSelectAllMeshSelection); \
	DECLARE_FUNCTION(execDebugPrintMeshSelection); \
	DECLARE_FUNCTION(execGetMeshSelectionInfo);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExpandContractMeshSelection); \
	DECLARE_FUNCTION(execExpandMeshSelectionToConnected); \
	DECLARE_FUNCTION(execInvertMeshSelection); \
	DECLARE_FUNCTION(execSelectMeshElementsInsideMesh); \
	DECLARE_FUNCTION(execSelectMeshElementsByNormalAngle); \
	DECLARE_FUNCTION(execSelectMeshElementsWithPlane); \
	DECLARE_FUNCTION(execSelectMeshElementsInSphere); \
	DECLARE_FUNCTION(execSelectMeshElementsInBox); \
	DECLARE_FUNCTION(execConvertMeshSelectionToIndexList); \
	DECLARE_FUNCTION(execConvertIndexListToMeshSelection); \
	DECLARE_FUNCTION(execConvertMeshSelectionToIndexArray); \
	DECLARE_FUNCTION(execConvertIndexSetToMeshSelection); \
	DECLARE_FUNCTION(execConvertIndexArrayToMeshSelection); \
	DECLARE_FUNCTION(execCombineMeshSelections); \
	DECLARE_FUNCTION(execConvertMeshSelection); \
	DECLARE_FUNCTION(execCreateSelectAllMeshSelection); \
	DECLARE_FUNCTION(execDebugPrintMeshSelection); \
	DECLARE_FUNCTION(execGetMeshSelectionInfo);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSelectionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSelectionFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSelectionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSelectionFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSelectionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSelectionFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSelectionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSelectionFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSelectionFunctions(UGeometryScriptLibrary_MeshSelectionFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSelectionFunctions(const UGeometryScriptLibrary_MeshSelectionFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshSelectionFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSelectionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSelectionFunctions(UGeometryScriptLibrary_MeshSelectionFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSelectionFunctions(const UGeometryScriptLibrary_MeshSelectionFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSelectionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSelectionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSelectionFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshSelectionFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshSelectionFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTTOPOLOGYCONNECTIONTYPE(op) \
	op(EGeometryScriptTopologyConnectionType::Geometric) \
	op(EGeometryScriptTopologyConnectionType::Polygroup) \
	op(EGeometryScriptTopologyConnectionType::MaterialID) 

enum class EGeometryScriptTopologyConnectionType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptTopologyConnectionType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptTopologyConnectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
