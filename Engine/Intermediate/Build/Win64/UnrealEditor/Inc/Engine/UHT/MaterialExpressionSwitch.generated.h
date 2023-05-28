// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSwitch_generated_h
#error "MaterialExpressionSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionSwitch.h"
#endif
#define ENGINE_MaterialExpressionSwitch_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSwitchCustomInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSwitchCustomInput>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionSwitch, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSwitch(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSwitch_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSwitch) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSwitch(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSwitch_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSwitch) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionSwitch(UMaterialExpressionSwitch&&); \
	ENGINE_API UMaterialExpressionSwitch(const UMaterialExpressionSwitch&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSwitch();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionSwitch(UMaterialExpressionSwitch&&); \
	ENGINE_API UMaterialExpressionSwitch(const UMaterialExpressionSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSwitch) \
	ENGINE_API virtual ~UMaterialExpressionSwitch();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionSwitch."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSwitch_h


#define FOREACH_ENUM_ESWITCHMATERIALOUTPUTTYPE(op) \
	op(TMMOT_Float1) \
	op(TMMOT_Float2) \
	op(TMMOT_Float3) \
	op(TMMOT_Float4) 

enum ESwitchMaterialOutputType : int;
template<> ENGINE_API UEnum* StaticEnum<ESwitchMaterialOutputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
