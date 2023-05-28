// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomMeshTriangle;
#ifdef CUSTOMMESHCOMPONENT_CustomMeshComponent_generated_h
#error "CustomMeshComponent.generated.h already included, missing '#pragma once' in CustomMeshComponent.h"
#endif
#define CUSTOMMESHCOMPONENT_CustomMeshComponent_generated_h

#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics; \
	CUSTOMMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FCustomMeshTriangle>();

#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ACCESSORS
#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomMeshComponent(); \
	friend struct Z_Construct_UClass_UCustomMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UCustomMeshComponent)


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCustomMeshComponent(); \
	friend struct Z_Construct_UClass_UCustomMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UCustomMeshComponent)


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMeshComponent(UCustomMeshComponent&&); \
	NO_API UCustomMeshComponent(const UCustomMeshComponent&); \
public: \
	NO_API virtual ~UCustomMeshComponent();


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMeshComponent(UCustomMeshComponent&&); \
	NO_API UCustomMeshComponent(const UCustomMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMeshComponent) \
	NO_API virtual ~UCustomMeshComponent();


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMMESHCOMPONENT_API UClass* StaticClass<class UCustomMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
