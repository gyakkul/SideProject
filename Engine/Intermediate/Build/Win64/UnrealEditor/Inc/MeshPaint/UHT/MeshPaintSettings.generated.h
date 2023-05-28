// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHPAINT_MeshPaintSettings_generated_h
#error "MeshPaintSettings.generated.h already included, missing '#pragma once' in MeshPaintSettings.h"
#endif
#define MESHPAINT_MeshPaintSettings_generated_h

#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_SPARSE_DATA
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ACCESSORS
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaintBrushSettings(); \
	friend struct Z_Construct_UClass_UPaintBrushSettings_Statics; \
public: \
	DECLARE_CLASS(UPaintBrushSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UPaintBrushSettings)


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUPaintBrushSettings(); \
	friend struct Z_Construct_UClass_UPaintBrushSettings_Statics; \
public: \
	DECLARE_CLASS(UPaintBrushSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UPaintBrushSettings)


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaintBrushSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintBrushSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaintBrushSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintBrushSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaintBrushSettings(UPaintBrushSettings&&); \
	NO_API UPaintBrushSettings(const UPaintBrushSettings&); \
public:


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaintBrushSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaintBrushSettings(UPaintBrushSettings&&); \
	NO_API UPaintBrushSettings(const UPaintBrushSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaintBrushSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaintBrushSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaintBrushSettings)


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_32_PROLOG
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_SPARSE_DATA \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ACCESSORS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_SPARSE_DATA \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ACCESSORS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaintBrushSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHPAINT_API UClass* StaticClass<class UPaintBrushSettings>();

#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_SPARSE_DATA
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_RPC_WRAPPERS
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_ACCESSORS
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintSettings(); \
	friend struct Z_Construct_UClass_UMeshPaintSettings_Statics; \
public: \
	DECLARE_CLASS(UMeshPaintSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UMeshPaintSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUMeshPaintSettings(); \
	friend struct Z_Construct_UClass_UMeshPaintSettings_Statics; \
public: \
	DECLARE_CLASS(UMeshPaintSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshPaint"), NO_API) \
	DECLARE_SERIALIZER(UMeshPaintSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshPaintSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshPaintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshPaintSettings(UMeshPaintSettings&&); \
	NO_API UMeshPaintSettings(const UMeshPaintSettings&); \
public: \
	NO_API virtual ~UMeshPaintSettings();


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshPaintSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshPaintSettings(UMeshPaintSettings&&); \
	NO_API UMeshPaintSettings(const UMeshPaintSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshPaintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintSettings) \
	NO_API virtual ~UMeshPaintSettings();


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_82_PROLOG
#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_SPARSE_DATA \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_RPC_WRAPPERS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_ACCESSORS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_INCLASS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_SPARSE_DATA \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_ACCESSORS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHPAINT_API UClass* StaticClass<class UMeshPaintSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintSettings_h


#define FOREACH_ENUM_EMESHPAINTCOLORVIEWMODE(op) \
	op(EMeshPaintColorViewMode::Normal) \
	op(EMeshPaintColorViewMode::RGB) \
	op(EMeshPaintColorViewMode::Alpha) \
	op(EMeshPaintColorViewMode::Red) \
	op(EMeshPaintColorViewMode::Green) \
	op(EMeshPaintColorViewMode::Blue) 

enum class EMeshPaintColorViewMode : uint8;
template<> struct TIsUEnumClass<EMeshPaintColorViewMode> { enum { Value = true }; };
template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintColorViewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
