// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Canvas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
class UMaterialInterface;
class UTexture;
struct FCanvasUVTri;
struct FLinearColor;
#ifdef ENGINE_Canvas_generated_h
#error "Canvas.generated.h already included, missing '#pragma once' in Canvas.h"
#endif
#define ENGINE_Canvas_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCanvasIcon_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCanvasIcon>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_TextSize); \
	DECLARE_FUNCTION(execK2_StrLen); \
	DECLARE_FUNCTION(execK2_Deproject); \
	DECLARE_FUNCTION(execK2_Project); \
	DECLARE_FUNCTION(execK2_DrawPolygon); \
	DECLARE_FUNCTION(execK2_DrawMaterialTriangle); \
	DECLARE_FUNCTION(execK2_DrawTriangle); \
	DECLARE_FUNCTION(execK2_DrawBox); \
	DECLARE_FUNCTION(execK2_DrawBorder); \
	DECLARE_FUNCTION(execK2_DrawText); \
	DECLARE_FUNCTION(execK2_DrawMaterial); \
	DECLARE_FUNCTION(execK2_DrawTexture); \
	DECLARE_FUNCTION(execK2_DrawLine);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_TextSize); \
	DECLARE_FUNCTION(execK2_StrLen); \
	DECLARE_FUNCTION(execK2_Deproject); \
	DECLARE_FUNCTION(execK2_Project); \
	DECLARE_FUNCTION(execK2_DrawPolygon); \
	DECLARE_FUNCTION(execK2_DrawMaterialTriangle); \
	DECLARE_FUNCTION(execK2_DrawTriangle); \
	DECLARE_FUNCTION(execK2_DrawBox); \
	DECLARE_FUNCTION(execK2_DrawBorder); \
	DECLARE_FUNCTION(execK2_DrawText); \
	DECLARE_FUNCTION(execK2_DrawMaterial); \
	DECLARE_FUNCTION(execK2_DrawTexture); \
	DECLARE_FUNCTION(execK2_DrawLine);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvas(); \
	friend struct Z_Construct_UClass_UCanvas_Statics; \
public: \
	DECLARE_CLASS(UCanvas, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCanvas)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUCanvas(); \
	friend struct Z_Construct_UClass_UCanvas_Statics; \
public: \
	DECLARE_CLASS(UCanvas, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCanvas)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvas(UCanvas&&); \
	NO_API UCanvas(const UCanvas&); \
public: \
	NO_API virtual ~UCanvas();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvas(UCanvas&&); \
	NO_API UCanvas(const UCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvas) \
	NO_API virtual ~UCanvas();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_154_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h_158_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Canvas."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCanvas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Canvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
