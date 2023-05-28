// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/ListUtilityFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGeometryScriptIndexType : uint8;
struct FGeometryScriptColorList;
struct FGeometryScriptIndexList;
struct FGeometryScriptScalarList;
struct FGeometryScriptTriangleList;
struct FGeometryScriptUVList;
struct FGeometryScriptVectorList;
struct FLinearColor;
#ifdef GEOMETRYSCRIPTINGCORE_ListUtilityFunctions_generated_h
#error "ListUtilityFunctions.generated.h already included, missing '#pragma once' in ListUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_ListUtilityFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExtractColorListChannels); \
	DECLARE_FUNCTION(execExtractColorListChannel); \
	DECLARE_FUNCTION(execClearColorList); \
	DECLARE_FUNCTION(execDuplicateColorList); \
	DECLARE_FUNCTION(execConvertArrayToColorList); \
	DECLARE_FUNCTION(execConvertColorListToArray); \
	DECLARE_FUNCTION(execSetColorListItem); \
	DECLARE_FUNCTION(execGetColorListItem); \
	DECLARE_FUNCTION(execGetColorListLastIndex); \
	DECLARE_FUNCTION(execGetColorListLength); \
	DECLARE_FUNCTION(execClearUVList); \
	DECLARE_FUNCTION(execDuplicateUVList); \
	DECLARE_FUNCTION(execConvertArrayToUVList); \
	DECLARE_FUNCTION(execConvertUVListToArray); \
	DECLARE_FUNCTION(execSetUVListItem); \
	DECLARE_FUNCTION(execGetUVListItem); \
	DECLARE_FUNCTION(execGetUVListLastIndex); \
	DECLARE_FUNCTION(execGetUVListLength); \
	DECLARE_FUNCTION(execClearVectorList); \
	DECLARE_FUNCTION(execDuplicateVectorList); \
	DECLARE_FUNCTION(execConvertArrayToVectorList); \
	DECLARE_FUNCTION(execConvertVectorListToArray); \
	DECLARE_FUNCTION(execSetVectorListItem); \
	DECLARE_FUNCTION(execGetVectorListItem); \
	DECLARE_FUNCTION(execGetVectorListLastIndex); \
	DECLARE_FUNCTION(execGetVectorListLength); \
	DECLARE_FUNCTION(execClearScalarList); \
	DECLARE_FUNCTION(execDuplicateScalarList); \
	DECLARE_FUNCTION(execConvertArrayToScalarList); \
	DECLARE_FUNCTION(execConvertScalarListToArray); \
	DECLARE_FUNCTION(execSetScalarListItem); \
	DECLARE_FUNCTION(execGetScalarListItem); \
	DECLARE_FUNCTION(execGetScalarListLastIndex); \
	DECLARE_FUNCTION(execGetScalarListLength); \
	DECLARE_FUNCTION(execConvertArrayToTriangleList); \
	DECLARE_FUNCTION(execConvertTriangleListToArray); \
	DECLARE_FUNCTION(execGetTriangleListItem); \
	DECLARE_FUNCTION(execGetTriangleListLastTriangle); \
	DECLARE_FUNCTION(execGetTriangleListLength); \
	DECLARE_FUNCTION(execClearIndexList); \
	DECLARE_FUNCTION(execDuplicateIndexList); \
	DECLARE_FUNCTION(execConvertArrayToIndexList); \
	DECLARE_FUNCTION(execConvertIndexListToArray); \
	DECLARE_FUNCTION(execSetIndexListItem); \
	DECLARE_FUNCTION(execGetIndexListItem); \
	DECLARE_FUNCTION(execGetIndexListLastIndex); \
	DECLARE_FUNCTION(execGetIndexListLength);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExtractColorListChannels); \
	DECLARE_FUNCTION(execExtractColorListChannel); \
	DECLARE_FUNCTION(execClearColorList); \
	DECLARE_FUNCTION(execDuplicateColorList); \
	DECLARE_FUNCTION(execConvertArrayToColorList); \
	DECLARE_FUNCTION(execConvertColorListToArray); \
	DECLARE_FUNCTION(execSetColorListItem); \
	DECLARE_FUNCTION(execGetColorListItem); \
	DECLARE_FUNCTION(execGetColorListLastIndex); \
	DECLARE_FUNCTION(execGetColorListLength); \
	DECLARE_FUNCTION(execClearUVList); \
	DECLARE_FUNCTION(execDuplicateUVList); \
	DECLARE_FUNCTION(execConvertArrayToUVList); \
	DECLARE_FUNCTION(execConvertUVListToArray); \
	DECLARE_FUNCTION(execSetUVListItem); \
	DECLARE_FUNCTION(execGetUVListItem); \
	DECLARE_FUNCTION(execGetUVListLastIndex); \
	DECLARE_FUNCTION(execGetUVListLength); \
	DECLARE_FUNCTION(execClearVectorList); \
	DECLARE_FUNCTION(execDuplicateVectorList); \
	DECLARE_FUNCTION(execConvertArrayToVectorList); \
	DECLARE_FUNCTION(execConvertVectorListToArray); \
	DECLARE_FUNCTION(execSetVectorListItem); \
	DECLARE_FUNCTION(execGetVectorListItem); \
	DECLARE_FUNCTION(execGetVectorListLastIndex); \
	DECLARE_FUNCTION(execGetVectorListLength); \
	DECLARE_FUNCTION(execClearScalarList); \
	DECLARE_FUNCTION(execDuplicateScalarList); \
	DECLARE_FUNCTION(execConvertArrayToScalarList); \
	DECLARE_FUNCTION(execConvertScalarListToArray); \
	DECLARE_FUNCTION(execSetScalarListItem); \
	DECLARE_FUNCTION(execGetScalarListItem); \
	DECLARE_FUNCTION(execGetScalarListLastIndex); \
	DECLARE_FUNCTION(execGetScalarListLength); \
	DECLARE_FUNCTION(execConvertArrayToTriangleList); \
	DECLARE_FUNCTION(execConvertTriangleListToArray); \
	DECLARE_FUNCTION(execGetTriangleListItem); \
	DECLARE_FUNCTION(execGetTriangleListLastTriangle); \
	DECLARE_FUNCTION(execGetTriangleListLength); \
	DECLARE_FUNCTION(execClearIndexList); \
	DECLARE_FUNCTION(execDuplicateIndexList); \
	DECLARE_FUNCTION(execConvertArrayToIndexList); \
	DECLARE_FUNCTION(execConvertIndexListToArray); \
	DECLARE_FUNCTION(execSetIndexListItem); \
	DECLARE_FUNCTION(execGetIndexListItem); \
	DECLARE_FUNCTION(execGetIndexListLastIndex); \
	DECLARE_FUNCTION(execGetIndexListLength);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_ListUtilityFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_ListUtilityFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_ListUtilityFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_ListUtilityFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_ListUtilityFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_ListUtilityFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_ListUtilityFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_ListUtilityFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_ListUtilityFunctions(UGeometryScriptLibrary_ListUtilityFunctions&&); \
	NO_API UGeometryScriptLibrary_ListUtilityFunctions(const UGeometryScriptLibrary_ListUtilityFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_ListUtilityFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_ListUtilityFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_ListUtilityFunctions(UGeometryScriptLibrary_ListUtilityFunctions&&); \
	NO_API UGeometryScriptLibrary_ListUtilityFunctions(const UGeometryScriptLibrary_ListUtilityFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_ListUtilityFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_ListUtilityFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_ListUtilityFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_ListUtilityFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_ListUtilityFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
