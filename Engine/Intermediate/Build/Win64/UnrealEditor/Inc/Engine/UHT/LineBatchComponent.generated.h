// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LineBatchComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LineBatchComponent_generated_h
#error "LineBatchComponent.generated.h already included, missing '#pragma once' in LineBatchComponent.h"
#endif
#define ENGINE_LineBatchComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBatchedLine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBatchedLine>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBatchedPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBatchedPoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULineBatchComponent(); \
	friend struct Z_Construct_UClass_ULineBatchComponent_Statics; \
public: \
	DECLARE_CLASS(ULineBatchComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULineBatchComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_INCLASS \
private: \
	static void StaticRegisterNativesULineBatchComponent(); \
	friend struct Z_Construct_UClass_ULineBatchComponent_Statics; \
public: \
	DECLARE_CLASS(ULineBatchComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULineBatchComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULineBatchComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineBatchComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULineBatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineBatchComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULineBatchComponent(ULineBatchComponent&&); \
	ENGINE_API ULineBatchComponent(const ULineBatchComponent&); \
public: \
	ENGINE_API virtual ~ULineBatchComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULineBatchComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULineBatchComponent(ULineBatchComponent&&); \
	ENGINE_API ULineBatchComponent(const ULineBatchComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULineBatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineBatchComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineBatchComponent) \
	ENGINE_API virtual ~ULineBatchComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_122_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_125_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LineBatchComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULineBatchComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
